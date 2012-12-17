/* ***************************************************
 * File mission_parser.h
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

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
 * @file mission_parser.h
 */

/**
 * @brief This function parses the XML file entered as a parameter and returns a list of Sensor pointers.
 * If the XML file does not contain Sensor, the returned list is empty.
 * @param file_path The relative or absolute path of the file you want to parse
 * @return A std::list that contains pointers to the Sensor contained in the XML file, or an empty std::list if the XML file does not contain Sensor
 */
std::list<Sensor*> parse_sensors(const char* file_path);


/**
 * @brief This function parses the XML file entered as a parameter and returns a list of Actuator pointers.
 * If the XML file does not contain Actuator, the returned list is empty.
 * @param file_path The relative or absolute path of the file you want to parse
 * @return A std::list that contains pointers to the Actuator contained in the XML file, or or an empty std::list if the XML file does not contain Actuator
 */
std::list<Actuator*> parse_actuators(const char* file_path);


/**
 * @brief This function parses the XML file entered as a parameter and returns a MovementActuator pointer.
 * If the XML file does not contain MovementActuator, the returned MovementActuator pointer is empty.
 * @param file_path The relative or absolute path of the file you want to parse
 * \return A pointer to the MovementActuator contained in the XML file, or empty if the XML file does not contain MovementActuator
 */
MovementActuator* parse_movementActuator(const char* file_path);


/**
 * @brief This function parses the XML file entered as a parameter and returns a std::string corresponding to the mission description.
 * If the XML file does not contains a mission description, the returned std::string is "".
 * @param file_path The relative or absolute path of the file you want to parse
 * @return A std::string that describes the mission, or an empty string if the XML file does not contain a mission description
 */
std::string parse_description(const char* file_path);


/**
 * @brief This function parses the XML file entered as a parameter and returns a std::string corresponding to the mission objective.
 * If the XML file does not contains a mission objective, the returned std::string is "".
 * @param file_path The relative or absolute path of the file you want to parse
 * @return A std::string that correspond to the mission objective, or an empty string if the XML file does not contain a mission objective
 */
std::string parse_objective(const char* file_path);


/**
 * @brief This function parses the XML file entered as a parameter and returns an std::pair<std::string,int> corresponding to the mission targets ans its number.
 * If the XML file does not contains a mission targets, the returned std::pair<std::string,int> is empty.
 * @param file_path The relative or absolute path of the file you want to parse
 * @return An std::pair<std::string,int> that correspond to the mission targets and its number, or an empty std::pair<std::string,int> if the XML file does not contain a mission targets.
 */
std::pair<std::string,int> parse_targets(const char* file_path);


/**
 * @brief This function parses the XML file entered as a parameter and returns an std::pair<int,int> corresponding to the robot initial position on the map.
 * If the XML file does not contains an initial position, the returned std::pair<int,int> is 0, 0.
 * @param file_path The relative or absolute path of the file you want to parse
 * @return A std::pair<int,int> that correspond to the initial robot position on the map, or 0,0 if the XML file does not contain an initial position
 */
std::pair<int,int> parse_start_position(const char* file_path);

#endif
