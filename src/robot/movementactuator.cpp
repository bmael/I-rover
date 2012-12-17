/* ***************************************************
 * File movementactuator.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "movementactuator.h"
#include "robot.h"
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

void MovementActuator::doAction(const int &x, const int &y)
{
   //Nothing to do
}

void MovementActuator::goNorth()
{
    int y = Robot::getInstance()->getPosition().first;
    if(canGoNorth())
    {
       Robot::getInstance()->setX(y-1);
    }
}

void MovementActuator::goSouth()
{
    int y = Robot::getInstance()->getPosition().first;
    if(canGoNorth())
    {
       Robot::getInstance()->setX(y+1);
    }
}

void MovementActuator::goEast()
{
    int x = Robot::getInstance()->getPosition().first;
    if(canGoNorth())
    {
       Robot::getInstance()->setX(x+1);
    }
}

void MovementActuator::goWest()
{
    int x = Robot::getInstance()->getPosition().first;
    if(canGoNorth())
    {
       Robot::getInstance()->setX(x-1);
    }
}

Direction MovementActuator::lastDirection() const
{
    return lastDirection_ ;
}

