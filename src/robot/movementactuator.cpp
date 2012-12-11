#include "movementactuator.h"
using namespace std;

MovementActuator::MovementActuator()
{
}

MovementActuator::MovementActuator(const string name) : Actuator(name)
{
}

MovementActuator::~MovementActuator()
{
}

void MovementActuator::doAction(Direction direction)
{
   //Nothing to do
}

void MovementActuator::goNorth()
{
    if(canGoNorth())
    {
        //map->goNorth() ; //Utiliser méthode de la map pour faire "bouger" le robot !
        lastDirection_ = N ;
    }
    else
        lastDirection_ = Dir ;
}

void MovementActuator::goSouth()
{
    if(canGoSouth())
    {
        //map->goSouth() ;
        lastDirection_ = S ;
    }
    else
        lastDirection_ = Dir ;
}

void MovementActuator::goEast()
{
    if(canGoEast())
    {
        //map->goEast() ;
        lastDirection_ = E ;
    }
    else
        lastDirection_ = Dir ;
}

void MovementActuator::goWest()
{
    if(canGoWest())
    {
        //map->goWest() ;
        lastDirection_ = W ;
    }
    else
        lastDirection_ = Dir ;
}

Direction MovementActuator::lastDirection() const
{
    return lastDirection_ ;
}

