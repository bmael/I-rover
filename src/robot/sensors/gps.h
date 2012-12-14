#ifndef GPS_H
#define GPS_H

#include <iostream>
#include "sensor.h"
#include "robot.h"

/**
 * @class GpsSensor
 * @brief This class represents a GPS sensor, that allow the robot to know its position on the map
 */
class GpsSensor : public Sensor {
    public:
        /**
         * @brief Default constructor
         */
        GpsSensor();

        /**
         * @brief Destructor
         */
        ~GpsSensor();
        
        /**
         * @brief return a std::pair<int,int> representing the position (x,y) of the robot on the map
         * @return A std::pair of two integers corresponding to the current robot location on the map
         * The first element of the pair represents the x-axis(abcissa)
         * The second element of the pair represents the y-axis(ordinate)
         */
        std::pair<int,int> doAction() const;
        
};

#endif
