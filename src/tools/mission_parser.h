#ifndef MISSIONPARSER_H
#define MISSIONPARSER_H

#include <iostream>
#include <string>
#include <map>

#include "pugixml.hpp"
#include "actuator.h"
#include "sensor.h"
#include "movementactuator.h"
#include "arms.h"
#include "rocketlauncher.h"
#include "wheels.h"
#include "chains.h"
#include "gps.h"
#include "proximity.h"
#include "camera.h"

/**
 * \file mission_parser.h
 */

/**
 * \brief This function parses the XML file entered as a parameter and returns a list of Sensor pointers.
 * If the XML file does not contain Sensor, the returned list is empty.
 * \param file_path The relative or absolute path of the file you want to parse
 * \return A std::list that contains pointers to the Sensor contained in the XML file, or empty if the XML file does not contain Sensor
 */
std::list<Sensor*> parse_sensors(const char* file_path);


/**
 * \brief This function parses the XML file entered as a parameter and returns a list of Actuator pointers.
 * If the XML file does not contain Actuator, the returned list is empty.
 * \param file_path The relative or absolute path of the file you want to parse
 * \return A std::list that contains pointers to the Actuator contained in the XML file, or empty if the XML file does not contain Actuator
 */
std::list<Actuator*> parse_actuators(const char* file_path);


/**
 * \brief This function parses the XML file entered as a parameter and returns a list of MovementActuator pointers.
 * If the XML file does not contain MovementActuator, the returned list is empty.
 * \param file_path The relative or absolute path of the file you want to parse
 * \return A std::list that contains pointers to the MovementActuator contained in the XML file, or empty if the XML file does not contain MovementActuator
 */
std::list<MovementActuator*> parse_movementActuator(const char* file_path);


/**
 * \brief This function parses the XML file entered as a parameter and returns a std::string corresponding to the mission description.
 * If the XML file does not contains a mission description, the returned std::string is "".
 * \param file_path The relative or absolute path of the file you want to parse
 * \return A std::string that describes the mission, or an empty string if the XML file does not contain a mission description
 */
std::string parse_description(const char* file_path);


/**
 * \brief This function parses the XML file entered as a parameter and returns a std::string corresponding to the mission objective.
 * If the XML file does not contains a mission description, the returned std::string is "".
 * \param file_path The relative or absolute path of the file you want to parse
 * \return A std::string that correspond to the mission objective, or an empty string if the XML file does not contain a mission objective
 */
std::string parse_objective(const char* file_path);


/**
 * \brief This function parses the XML file entered as a parameter and returns an int corresponding to the mission targets.
 * If the XML file does not contains a mission targets, the returned int is 0.
 * \param file_path The relative or absolute path of the file you want to parse
 * \return An int that correspond to the mission targets, or an 0 if the XML file does not contain a mission targets
 */
int parse_targets(const char* file_path);


/**
 * \brief This function parses the XML file entered as a parameter and returns an std::pair<int,int> corresponding to the robot initial position on the map.
 * If the XML file does not contains an initial position, the returned std::pair<int,int> is 0, 0.
 * \param file_path The relative or absolute path of the file you want to parse
 * \return A std::pair<int,int> that correspond to the initial robot position on the map, or 0,0 if the XML file does not contain an initial position
 */
std::pair<int,int> parse_start_position(const char* file_path);

#endif
