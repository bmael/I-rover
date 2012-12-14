/* 
 * File:   ProximitySensor.h
 * Author: julien
 *
 * Created on 10 décembre 2012, 17:01
 */

#ifndef PROXIMITYSENSOR_H
#define	PROXIMITYSENSOR_H

#include <iostream>
#include <list>
#include "sensor.h"

/**
 * @class ProximitySensor
 * @brief This class represents a proximity sensor, that allows a Robot to "know" if objects are arround him
 */
class ProximitySensor : public Sensor {
public:
    /**
     * @brief Default constructor
     */
    ProximitySensor();
    
    /**
     * @brief Constructor with a sensibility parameter
     * @param param sensibility The sensibility(in number of cases) of the sensor
     */
    ProximitySensor(int sensibility);
    
    /**
     * @brief Destructor
     */
    ~ProximitySensor();
    
    /**
     * @brief Getter for sensibility
     * @return sensibility
     */
    int getProximitySensibility() const;
    
    /**
     * @brief This method return a list of std::list<std::pair<int,int> >, representing position of objects detected by the Proximity sensor on the map.
     * @return A std::list<std::pair<int,int> > representing the position on the map of the detected objects
     */
    std::list<std::pair<int,int> > doAction();
    
private:
    int sensibility_;
};

#endif	/* PROXIMITYSENSOR_H */

