/* ***************************************************
 * File camera.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "camera.h"

CameraSensor::CameraSensor() : Sensor("Camera") {}

CameraSensor::~CameraSensor() {}

std::vector<std::string> CameraSensor::doAction(const int& x, const int& y) {
	//Can't call getInstance because I don't have the path to the TMX file
    return GestionnaireMap::getInstance()->cameraSensor(x,y);
}
