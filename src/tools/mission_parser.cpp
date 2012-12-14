#include "mission_parser.h"


std::list<Sensor*> parse_sensors(const char* file_path) {
    std::list<Sensor*> list_sensors;
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(file_path);

    if (result) {
		// retrieving the sensors node
		pugi::xml_node sensors = doc.child("robot").child("sensors");

		// Iterate through sensor
		for (pugi::xml_node sensor = sensors.child("sensor"); sensor; sensor = sensor.next_sibling("sensor"))
		{
			std::string s(sensor.attribute("type").value());

			if (s.compare("Gps") == 0) {
				Sensor * gps = new GpsSensor();
				list_sensors.push_back(gps);
			}
			else if (s.compare("Proximity") == 0) {
				// If the user gives a sensibility, we have to call the right constructor
				if ( sensor.attribute("sensibility") ) {
					Sensor * prox = new ProximitySensor(sensor.attribute("sensibility").as_int());
					list_sensors.push_back(prox);
				}
				else {
					Sensor * prox = new ProximitySensor();
					list_sensors.push_back(prox);
				}
			}
			else if (s.compare("Camera") == 0) {
			    Sensor * camera = new CameraSensor();
			    list_sensors.push_back(camera);
			}
			else {
				std::cerr << "Not yet implemented" << std::endl;
			}
		}
    }
    
    return list_sensors;
}

std::list<Actuator*> parse_actuators(const char* file_path) {
    std::list<Actuator*> list_actuators;
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(file_path);

    if (result) {
		// retrieving the actuators node
		pugi::xml_node actuators = doc.child("robot").child("actuators");

		// Iterate through actuator
		for (pugi::xml_node actuator = actuators.child("actuator"); actuator; actuator = actuator.next_sibling("actuator"))
		{
			std::string s(actuator.attribute("type").value());

			if (s.compare("Arms") == 0) {
				Actuator * act = new Arms();
				list_actuators.push_back(act);
			}
			else if (s.compare("RocketLauncher") == 0) {
				Actuator * act = new RocketLauncher();
				list_actuators.push_back(act);
			}
			else {
				std::cerr << "Not yet implemented" << std::endl;
			}
		}
    }
    
    return list_actuators;
}

MovementActuator* parse_movementActuator(const char* file_path) {
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(file_path);
    MovementActuator * mov = 0;
    if (result) {
		// retrieving the sensors node
		pugi::xml_node movementActuator = doc.child("robot").child("movementActuator");

		std::string s(movementActuator.attribute("type").value());

		if (s.compare("Wheels") == 0) {
            mov = new Wheels();
		}
		else if (s.compare("Chains") == 0) {
            mov = new Chains();
		}
		else {
			std::cerr << "Not yet implemented" << std::endl;
		}
    }

    return mov;
}

std::string parse_description(const char* file_path) {
	std::string res;
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(file_path);

    if (result) {
		// retrieving the mission node
		pugi::xml_node mission = doc.child("robot").child("mission");
		res = mission.child("description").text().as_string();
    }
    
    std::cout << "[Parser_desc]" << file_path;
    std::cout << "[Parser_desc] " << res << std::endl;

    return res;
}


std::string parse_objective(const char* file_path) {
	std::string res;
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(file_path);

    if (result) {
		// retrieving the mission node
		pugi::xml_node mission = doc.child("robot").child("mission");
		res = mission.child("objective").text().as_string();
    }
    
    return res;
}


int parse_targets(const char* file_path) {
	int res;
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(file_path);

    if (result) {
		// retrieving the mission node
		pugi::xml_node mission = doc.child("robot").child("mission");
		res = mission.child("targets").text().as_int();
    }
    
    return res;
}


std::pair<int,int> parse_start_position(const char* file_path) {
	std::pair<int,int> res;
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(file_path);

    if (result) {
		// retrieving the start position node
		pugi::xml_node start_position = doc.child("robot").child("startPosition");
		res.first = start_position.attribute("coordinateX").as_int();
		res.second = start_position.attribute("coordinateY").as_int();
    }
    
    return res;
}
