/* ***************************************************
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "sensor.h"

Sensor::Sensor() {}

Sensor::Sensor(const std::string name) : name_(name) {}

Sensor::~Sensor() {}

std::string Sensor::getName() const {
    return this->name_;
}
