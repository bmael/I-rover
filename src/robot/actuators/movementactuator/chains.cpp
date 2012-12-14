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

    //Non-exhaustif list to complete (waiting for Guillaume and Noemie part)
    //return (GestionnaireMap.getFieldValue(coord.first+1, coord.second) == "snow" ||
    //        GestionnaireMap.getFieldValue(coord.first+1, coord.second) == "grass");
    return 0;
}

bool Chains::canGoNorth() const
{
    Coord coord = Robot::getInstance()->getPosition();

    //Non-exhaustif list to complete (waiting for Guillaume and Noemie part)
    //return (GestionnaireMap.getFieldValue(coord.first, coord.second-1) == "snow" ||
    //        GestionnaireMap.getFieldValue(coord.first, coord.second-1) == "grass");
    return 0;
}

bool Chains::canGoSouth() const
{
    Coord coord = Robot::getInstance()->getPosition();

    //Non-exhaustif list to complete (waiting for Guillaume and Noemie part)
    //return (GestionnaireMap.getFieldValue(coord.first, coord.second+1) == "snow" ||
    //        GestionnaireMap.getFieldValue(coord.first, coord.second+1) == "grass");
    return 0;
}

bool Chains::canGoWest() const
{
    Coord coord = Robot::getInstance()->getPosition();

    //Non-exhaustif list to complete (waiting for Guillaume and Noemie part)
    //return (GestionnaireMap.getFieldValue(coord.first-1, coord.second) == "snow" ||
    //        GestionnaireMap.getFieldValue(coord.first-1, coord.second) == "grass");
    return 0;
}
