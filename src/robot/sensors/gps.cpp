#include "gps.h"

GpsSensor::GpsSensor() {
}

GpsSensor::GpsSensor(const GpsSensor& orig) {
    this->coordonnees.first = (orig.coordonnees).first;
    this->coordonnees.second = (orig.coordonnees).second;
}

GpsSensor::~GpsSensor() {}

std::pair<int,int> GpsSensor::getCoordonnees() const {
    return this->coordonnees;
}
