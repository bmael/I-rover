/* ***************************************************
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "robot.h"

using namespace std;

Robot::Robot(const std::string name) : name_(name) {}
Robot::~Robot(){
    for (list<Sensor*>::iterator it = getSensors()->begin(); it != getSensors()->end() ; ++it )
    {
        //delete *it;
        //Not implemented yet !
    }
    for (list<Actuator*>::iterator it = getActuators()->begin(); it != getActuators()->end() ; ++it )
    {
        //delete *it;
        //Julien -> Not implemented yet !
    }

    if (movementActuator_)
    {
        //delete movementActuator_;
    }
}

const string Robot::getName() const{
    return name_;
}

bool Robot::canGoNorth(){
    return movementActuator_->canGoNorth();
}

bool Robot::canGoSouth(){
    return movementActuator_->canGoSouth();
}

bool Robot::canGoEast(){
    return movementActuator_->canGoEast();
}

bool Robot::canGoWest(){
    return movementActuator_->canGoWest();
}

void Robot::goNorth(){
    movementActuator_->goNorth();
}

void Robot::goSouth(){
    movementActuator_->goSouth();
}

void Robot::goEast(){
    movementActuator_->goEast();
}

void Robot::goWest(){
    movementActuator_->goNorth();
}

void Robot::addSensor(Sensor* sensor){
    sensors_.push_back(sensor);
}

void Robot::addActuator(Actuator* actuator){
    actuators_.push_back(actuator);
}

int Robot::sensorsCount() const
{
    return sensors_.size();
}

int Robot::actuatorsCount() const
{
    return actuators_.size();
}

//QPixmap* Robot::getImage() const
//{
//    return image_ ;
//}

string Robot::ActuatorsToString(){
    string out;
    out = "The robots contains the following actuators : \n";
    for (list<Actuator*>::iterator it = getActuators()->begin(); it != getActuators()->end() ; ++it )
    {
        out += (*it)->getName();
    }
    return out;
}

string Robot::SensorsToString(){
    string out;
    out = "The robots contains the following sensors : \n";
    for (list<Sensor*>::iterator it = this->getSensors()->begin(); it != this->getSensors()->end() ; ++it )
    {
        //out += (*it)->getName(); A COMPLETER PAR JULIEN
    }
    return out;
}

list<Actuator*>* Robot::getActuators()
{
    return &actuators_;
}

list<Sensor*>* Robot::getSensors()
{
    return &sensors_;
}

void Robot::doAction(Actuator * a, Direction direction)
{
    if (a)
        a->doAction(direction) ;
}

int Robot::lastDirection() const
{
     return movementActuator_->lastDirection();
}

void Robot::setMovementActuator(MovementActuator* m)
{
    if (movementActuator_){
        delete movementActuator_ ;
    }
    movementActuator_ = m ;
}


