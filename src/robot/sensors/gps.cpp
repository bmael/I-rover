/* ***************************************************
 * File gps.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "gps.h"

GpsSensor::GpsSensor() : Sensor("Gps") {}

GpsSensor::~GpsSensor() {}

std::pair<int,int> GpsSensor::doAction() const {
    return Robot::getInstance()->getPosition();
}
