#include "gps.h"

GpsSensor::GpsSensor() : Sensor("Gps") {}

GpsSensor::GpsSensor(const GpsSensor& orig) : Sensor("Gps") {
    this->coordonnees.first = (orig.coordonnees).first;
    this->coordonnees.second = (orig.coordonnees).second;
}

GpsSensor::~GpsSensor() {}

std::pair<int,int> GpsSensor::getCoordonnees() const {
    return this->coordonnees;
}
