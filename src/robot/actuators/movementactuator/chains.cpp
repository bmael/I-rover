/* ***************************************************
 * File chains.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "chains.h"
#include "robot.h"
#include "gestionnaireMap.h"
using namespace std;

Chains::Chains() : MovementActuator("Chains")
{
}

Chains::~Chains()
{
}

bool Chains::canGoEast() const
{
    Coord coord = Robot::getInstance()->getPosition();

    return ((GestionnaireMap::getInstance()->getFieldValue(coord.first+1, coord.second) == TRAIL) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first+1, coord.second) == BRIDGE));
}

bool Chains::canGoNorth() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance()->getFieldValue(coord.first, coord.second-1) == TRAIL) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first, coord.second-1) == BRIDGE));
}

bool Chains::canGoSouth() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance()->getFieldValue(coord.first, coord.second+1) == TRAIL) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first, coord.second+1) == BRIDGE));
}

bool Chains::canGoWest() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance()->getFieldValue(coord.first-1, coord.second) == TRAIL) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first-1, coord.second) == BRIDGE));
}
