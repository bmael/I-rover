/* 
 * File:   Robot.cpp
 * Author: niiner
 * 
 * Created on 12 novembre 2012, 16:20
 */

#include "robot.h"

Robot::Robot() {}
Robot::Robot(string name) : name_(name) {}
Robot::Robot(const Robot& orig) {}
Robot::~Robot() {}

string Robot::getName() const{
    return name_;
}

void Robot::addSensor(Sensor* sensor){
    inventory_.push_back(sensor);
}

//void Robot::addObject(Objects object){
//    _bag.push_back(object);
//}
//
//void Robot::addActuator(Actuators actuator){
//    _inventory.push_back(actuator);
//}

