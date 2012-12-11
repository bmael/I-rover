/* ***************************************************
 * File robot.h
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#ifndef ROBOT_H
#define	ROBOT_H

#include <QPixmap>
#include <list>
#include <vector>
#include <iostream>
#include "actuator.h"
#include "sensor.h"
#include "movementactuator.h"

/**
 * @class Robot
 */
class Robot {

public:
    /**
     * @brief Constructor
     *
     * @param name : robot's name
     */
    Robot(const std::string name);

    /**
     * @brief Destructor
     */
    ~Robot();

    /**
     * @brief Robot's name
     *
     * @return Robot's name
     */
    const std::string getName() const;

    /**
     * @brief Number of sensors
     *
     * @return Number of sensors the robot has
     */
    int sensorsCount() const ;

    /**
     * @brief Number of actuators
     *
     * @return Number of actuators the robot has
     */
    int actuatorsCount() const ;

    /**
     * @brief Add a sensor
     *
     * @param sensor : Sensor to add
     */
    void addSensor (Sensor* sensor) ;

    /**
     * @brief Add an actuator
     *
     * @param actuator : Actuator to add
     */
    void addActuator(Actuator* actuator);

    /**
     * @brief Possible movement of the robot
     *
     * @return True if the Robot can move at North, false otherwise
     */
    bool canGoNorth();

    /**
     * @brief Possible movement of the robot
     *
     * @return True if the Robot can move at South, false otherwise
     */
    bool canGoSouth();

    /**
     * @brief Possible movement of the robot
     *
     * @return True if the Robot can move at East, false otherwise
     */
    bool canGoEast();

    /**
     * @brief Possible movement of the robot
     *
     * @return True if the Robot can move at West, false otherwise
     */
    bool canGoWest();

    /**
     * @brief Movement of the robot
     *
     * @return Move the robot at North
     */
    void goNorth();

    /**
     * @brief Movement of the robot
     *
     * @return Move the robot at South
     */
    void goSouth();

    /**
     * @brief Movement of the robot
     *
     * @return Move the robot at East
     */
    void goEast();

    /**
     * @brief Movement of the robot
     *
     * @return Move the robot at East
     */
    void goWest();


    /**
     * @brief A display of all actuators
     *
     * @return A string that display robot's actuators
     */
    std::string ActuatorsToString();

    /**
     * @brief A display of all sensors
     *
     * @return A string that display robot's sensors
     */
    std::string SensorsToString();

    /**
     * @brief Robot's actuators
     *
     * @return A list of robot's actuators
     */
    std::list<Actuator *>* getActuators();

    /**
     * @brief Robot's sensors
     *
     * @return A list of robot's sensors
     */
    std::list<Sensor*>* getSensors();

    /**
     * @brief Last Position occuped by the robot
     */
    int lastDirection() const;

    /**
     * @brief Activate an activator to a given direction
     *
     * @param a : the actuator to activate
     *
     * @param direction : the direction where execute the action
     */
    void doAction(Actuator * a, Direction direction);

    /**
     * @brief Modify the robot's movement actuator
     *
     * @param m : movement actuator
     */
    void setMovementActuator(MovementActuator* m);

    //    /**
    //     * @brief getImage
    //     *
    //     * @return
    //     */
    //  QPixmap *getImage() const;
    //  void addObject(Objects object);

private:
    std::string name_;
    std::list<Sensor*> sensors_;
    std::list<Actuator*> actuators_;
    MovementActuator * movementActuator_;
    //QPixmap* image_;
    //std::vector<Objects*> bag_;
};

#endif	/* ROBOT_H */

