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
    return ((GestionnaireMap::getInstance("")->getFieldValue(coord.first+1, coord.second) == "trail") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first+1, coord.second) == "bridge") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first+1, coord.second) == "snow"));
}

bool Wheels::canGoNorth() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance("")->getFieldValue(coord.first, coord.second-1) == "trail") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first, coord.second-1) == "bridge") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first, coord.second-1) == "snow"));

}

bool Wheels::canGoSouth() const
{
    Coord coord = Robot::getInstance()->getPosition();

    return ((GestionnaireMap::getInstance("")->getFieldValue(coord.first, coord.second+1) == "trail") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first, coord.second+1) == "bridge") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first, coord.second+1) == "snow"));

}

bool Wheels::canGoWest() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance("")->getFieldValue(coord.first-1, coord.second) == "trail") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first-1, coord.second) == "bridge") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first-1, coord.second) == "snow"));

}

