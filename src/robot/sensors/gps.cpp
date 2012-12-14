#include "gps.h"

GpsSensor::GpsSensor() : Sensor("Gps") {}

GpsSensor::~GpsSensor() {}

std::pair<int,int> GpsSensor::doAction() const {
    return Robot::getInstance()->getPosition();
}
