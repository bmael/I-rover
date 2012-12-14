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

Robot * Robot::_instance = NULL;

Robot::Robot(const std::string name) : name_(name) {}

Robot::Robot()
{
}

/**
 * Create an instance of Robot if does not exist and return it.
 * @brief Robot::getInstance
 * @return the current instance of the robot.
 */
Robot *Robot::getInstance()
{
    if(_instance == NULL){
        _instance = new Robot();
    }
    return _instance;
}

void Robot::init(string name, list<Sensor*> sensors, list<Actuator*> actuators, MovementActuator* mact, pair<int,int> coord)
{
    name_ = name;
    sensors_ = sensors;
    actuators_ = actuators;
    coord_ = coord;
    movementActuator_ = mact;
}


Robot::~Robot(){
    clear();
    delete _instance;
}

const string Robot::getName() const{
    return name_;
}

void Robot::setName(string name)
{
    name_ = name;
}

void Robot::setMovementActuator(MovementActuator* m)
{
    if (movementActuator_){
        delete movementActuator_ ;
    }
    movementActuator_ = m ;
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
        out += (*it)->getName();
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

void Robot::doAction(Actuator * a, const int &x, const int &y)
{
    if (a)
        a->doAction(x,y) ;
}

int Robot::getX(){
    return coord_.first;
}

int Robot::getY(){
    return coord_.second;
}

int Robot::getTargetsDestroyed(){
    return targetsDestroyed_;
}

void Robot::setX(int newX){
    coord_.first = newX;
}

void Robot::setY(int newY){
    coord_.second = newY;
}

const Coord& Robot::getPosition() const
{
    return coord_ ;
}

int Robot::lastDirection() const
{
    return movementActuator_->lastDirection();
}

void Robot::clear()
{
    for (list<Sensor*>::iterator it = getSensors()->begin(); it != getSensors()->end() ; ++it )
    {
        delete *it;
        *it = 0;
    }
    for (list<Actuator*>::iterator it = getActuators()->begin(); it != getActuators()->end() ; ++it )
    {
        delete *it;
        *it = 0;
    }

    if (movementActuator_)
    {
        delete movementActuator_;
    }
}





