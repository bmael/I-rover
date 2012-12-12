#include "gps.h"

GpsSensor::GpsSensor() {
    this->id_type_ = 1;
}

GpsSensor::GpsSensor(const GpsSensor& orig) {
    this->id_type_ = 1;
    this->coordonnees.first = (orig.coordonnees).first;
    this->coordonnees.second = (orig.coordonnees).second;
}

GpsSensor::~GpsSensor() {}

std::pair<int,int> GpsSensor::getCoordonnees() const {
    return this->coordonnees;
}