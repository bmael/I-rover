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

    //Non-exhaustif list to complete (waiting for Guillaume and Noemie part)
    //return (GestionnaireMap.getFieldValue(coord.first+1, coord.second) == "trail" ||
    //        GestionnaireMap.getFieldValue(coord.first+1, coord.second) == "snow");
    return 0;
}

bool Wheels::canGoNorth() const
{
    Coord coord = Robot::getInstance()->getPosition();

    //Non-exhaustif list to complete (waiting for Guillaume and Noemie part)
    //return (GestionnaireMap.getFieldValue(coord.first, coord.second-1) == "trail" ||
    //        GestionnaireMap.getFieldValue(coord.first, coord.second-1) == "snow");
    return 0;
}

bool Wheels::canGoSouth() const
{
    Coord coord = Robot::getInstance()->getPosition();

    //Non-exhaustif list to complete (waiting for Guillaume and Noemie part)
    //return (GestionnaireMap.getFieldValue(coord.first, coord.second+1) == "trail" ||
    //        GestionnaireMap.getFieldValue(coord.first, coord.second+1) == "snow");
    return 0;
}

bool Wheels::canGoWest() const
{
    Coord coord = Robot::getInstance()->getPosition();

    //Non-exhaustif list to complete (waiting for Guillaume and Noemie part)
    //return (GestionnaireMap.getFieldValue(coord.first-1, coord.second) == "trail" ||
    //        GestionnaireMap.getFieldValue(coord.first-1, coord.second) == "snow");
    return 0;
}

