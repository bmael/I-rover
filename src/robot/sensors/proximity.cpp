/* 
 * File:   ProximitySensor.cpp
 * Author: julien
 * 
 * Created on 10 décembre 2012, 17:01
 */

#include "proximity.h"

ProximitySensor::ProximitySensor() : sensibility_(1) {
    this->id_type_ = 2;
}

ProximitySensor::ProximitySensor(int sensibility) : sensibility_(sensibility) {
    this->id_type_ = 2;
}

ProximitySensor::ProximitySensor(const ProximitySensor& orig) {
    this->id_type_ = 2;
}

ProximitySensor::~ProximitySensor() {
}

int ProximitySensor::getProximitySensibility() const {
    return this->sensibility_;
}

//std::list<Cell*> getObstacles() {
//    return 0;
//}
