/* 
 * File:   Robot.h
 * Author: niiner
 *
 * Created on 12 novembre 2012, 16:20
 */

#include <list>
#include <vector>
#include <iostream>
#include "sensor.h"

#ifndef ROBOT_H
#define	ROBOT_H

using namespace std;

class Robot {
    
public:  
	Robot();
	Robot(string name);
	Robot(const Robot& orig);
	~Robot();
    
	string getName () const;    
  
	void addSensor(Sensor* sensor);

    	bool canMoveNorth();
	bool canMoveSouth();
	bool canMoveEast();
	bool canMoveWest();

	void moveOnNorth();
	void moveOnSouth();
	void moveOnEast();
	void moveOnWest();
	
	//void addObject(Objects object);
	//void addActuator(Actuator actuator);    

private:
	string name_;
	list<Sensor*> inventory_;
	//std::vector<Objects*> _bag;
};

#endif	/* ROBOT_H */

