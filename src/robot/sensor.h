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
 * @brief A sensor for the robot
 *
 * Allow the robot to destroy obstacles like rocks or trees
 */
class Sensor {

public:
    Sensor();
    Sensor(const Sensor& orig);
    //virtual void ObjectPresentation() const;
    virtual ~Sensor();

protected:
    std::string name;

};

#endif	/* SENSOR_H */

