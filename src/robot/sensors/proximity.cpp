/* ***************************************************
 * File proximity.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "proximity.h"

ProximitySensor::ProximitySensor() : Sensor("Proximity"), sensibility_(1) {}

ProximitySensor::ProximitySensor(int sensibility) : Sensor("Proximity"), sensibility_(sensibility) {
}

ProximitySensor::~ProximitySensor() {
}

int ProximitySensor::getProximitySensibility() const {
    return this->sensibility_;
}

std::list<std::pair<int,int> > ProximitySensor::doAction() {
    std::list<std::pair<int,int> > res;

	// Retrieving the position of the robot
    int positionX = Robot::getInstance()->getX();
    int positionY = Robot::getInstance()->getY();
    
    // Searching on the Cells arround the robot if there is an object
    for ( int x = positionX - sensibility_ ; x <= positionX + sensibility_ ; x++ ) {
    	for ( int y = positionY - sensibility_ ; y <= positionY + sensibility_ ; y++ ) {
            if ( GestionnaireMap::getInstance()->proximitySensor(x,y) ) {
    			res.push_back(std::pair<int,int>(x,y));
    		}
       	}
    }
    
    return res;
}
