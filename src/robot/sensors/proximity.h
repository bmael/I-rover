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
 * This class represents a proximity sensor, that allows a Robot to "know" if objects are arround him
 */
class ProximitySensor : public Sensor {
public:
    /**
     * Default constructor
     */
    ProximitySensor();
    
    /**
     * Constructor with a sensibility parameter
     * \param sensisility The sensibility(in number of cases) of the sensor
     */
    ProximitySensor(int sensibility);
    
    /**
     * Copy constructor
     * \param orig Copy orig into a new Object
     */
    ProximitySensor(const ProximitySensor& orig);
    
    /**
     * Destructor
     */
    virtual ~ProximitySensor();
    
    /**
     * Getter for sensibility
     * \return sensibility
     */
    int getProximitySensibility() const;
    
    /**
     * This method return a list of Cells detected by the Proximity sensor.
     * We return only the Cells containing Obstacles that can't be passed by the Robot.
     * \return A std::list of Cell pointers containing the detected obstacles
     */
    //std::list<Cell*> getObstacles();
    
private:
    int sensibility_;
};

#endif	/* PROXIMITYSENSOR_H */

