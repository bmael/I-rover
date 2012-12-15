#include "camera.h"

CameraSensor::CameraSensor() : Sensor("Camera") {}

CameraSensor::~CameraSensor() {}

std::vector<std::string> CameraSensor::doAction(const int& x, const int& y) {
	//Can't call getInstance because I don't have the path to the TMX file
	return GestionnaireMap::getInstance("")->cameraSensor(x,y);
}
