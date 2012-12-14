#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
#include <vector>
#include "sensor.h"
#include "gestionnaireMap.h"

/**
 * @class CameraSensor
 * @brief This class represents a Camera sensor, that allow the robot to know the type of an object on the map by its position
 */
class CameraSensor : public Sensor {
public:
	/**
	 * @brief Default constructor
	 */
    CameraSensor();
    
    /**
     * @brief Default destructor
     */
    ~CameraSensor();
	
	/**
	 * @brief This method returns a std::vector<std::string> containing the list of the types of objects detected on the map at a given position
	 * @param x The x-axis(abcissa) of the Cell you want to check
	 * @param y The y-axis(ordinate) of the Cell you want to check
	 * @return A std::vector<std::string> containing the list of the types of objects detected on the map at a given position
	 */
    std::vector<std::string> doAction(const int& x, const int& y);
};

#endif // CAMERA_H
