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

    return ((GestionnaireMap::getInstance("")->getFieldValue(coord.first+1, coord.second) == "trail") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first+1, coord.second) == "bridge"));
}

bool Chains::canGoNorth() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance("")->getFieldValue(coord.first, coord.second-1) == "trail") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first, coord.second-1) == "bridge"));
}

bool Chains::canGoSouth() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance("")->getFieldValue(coord.first, coord.second+1) == "trail") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first, coord.second+1) == "bridge"));
}

bool Chains::canGoWest() const
{
    Coord coord = Robot::getInstance()->getPosition();
    return ((GestionnaireMap::getInstance("")->getFieldValue(coord.first-1, coord.second) == "trail") ||
            (GestionnaireMap::getInstance("")->getFieldValue(coord.first-1, coord.second) == "bridge"));
}
