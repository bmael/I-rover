/* 
 * File:   ProximitySensor.cpp
 * Author: julien
 * 
 * Created on 10 décembre 2012, 17:01
 */

#include "proximity.h"

ProximitySensor::ProximitySensor() : Sensor("Proximity"), sensibility_(1) {}

ProximitySensor::ProximitySensor(int sensibility) : Sensor("Proximity"), sensibility_(sensibility) {
}

ProximitySensor::ProximitySensor(const ProximitySensor& orig) : Sensor("Proximity") {
}

ProximitySensor::~ProximitySensor() {
}

int ProximitySensor::getProximitySensibility() const {
    return this->sensibility_;
}

//std::list<Cell*> getObstacles() {
//    return 0;
//}
