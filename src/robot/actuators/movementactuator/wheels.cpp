#include "wheels.h"
#include "robot.h"
#include "gestionnaireMap.h"
using namespace std;

Wheels::Wheels() : MovementActuator("Wheels")
{
}

Wheels::~Wheels()
{
}

bool Wheels::canGoEast() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance()->getFieldValue(coord.first+1, coord.second) == TRAIL) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first+1, coord.second) == BRIDGE) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first+1, coord.second) == SNOW));
}

bool Wheels::canGoNorth() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance()->getFieldValue(coord.first, coord.second-1) == TRAIL) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first, coord.second-1) == BRIDGE) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first, coord.second-1) == SNOW));

}

bool Wheels::canGoSouth() const
{
    Coord coord = Robot::getInstance()->getPosition();

    return ((GestionnaireMap::getInstance()->getFieldValue(coord.first, coord.second+1) == TRAIL) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first, coord.second+1) == BRIDGE) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first, coord.second+1) == SNOW));

}

bool Wheels::canGoWest() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance()->getFieldValue(coord.first-1, coord.second) == TRAIL) ||
            (GestionnaireMap::getInstance()->getFieldValue(coord.first-1, coord.second) == BRIDGE) ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first-1, coord.second) == SNOW));

}

