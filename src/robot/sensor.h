/* ***************************************************
 * File sensor.h
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#ifndef SENSOR_H
#define	SENSOR_H

#include <iostream>

/**
 * @class Sensor
 * @brief A sensor for the robot that allow it to know informations on its environment(the map)
 */
class Sensor {

public:
    /**
     * Default constructor
     * @brief Sensor
     */
    Sensor();
    
    /**
     * Constructor to set the name attribute
     * @brief Sensor
     * @param name
     */
    Sensor(const std::string name);
    //virtual void ObjectPresentation() const;

    /**
     * Destructor
     * @brief ~Sensor
     */
    virtual ~Sensor();

    /**
     * Getter for the attribute name
     * @brief getName
     * @return name of the sensor
     */
    std::string getName() const;

protected:
    std::string name_;
};

#endif	/* SENSOR_H */

