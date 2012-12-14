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

private:
    /**
     * @brief Constructor
     *
     * @param name : robot's name
     */
    Robot(const std::string name);

    Robot();


public:

    /**
     * @brief Create an instance of robot if does not exist, and return it.
     * @return Robot, the current instance of the robot.
     */
    static Robot * getInstance();

    /**
     * @brief Initialize the current instance of robot
     * @param name
     * @param sensors
     * @param actuators
     * @param mact
     */
    void init(std::string name, std::list<Sensor*> sensors, std::list<Actuator*> actuators, std::list<MovementActuator*> mact);

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
     * @brief Give a name to the robot
     *
     * @param name : the name given to the robot
     */
    void setName(std::string name);

    /**
     * @brief Give or modify a movement actuator to the robot
     *
     * @param m : the movement actuator given to the robot
     */
    void setMovementActuator(MovementActuator * m);

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

    //    /**
    //     * @brief getImage
    //     *
    //     * @return
    //     */
    //  QPixmap *getImage() const;
    //  void addObject(Objects object);

    /**
     *Clear the current robot. Erase all sensors, actuators and the name of the robot.
     * @brief clear
     */
    void clear();


private:
    std::string name_;
    std::list<Sensor*> sensors_;
    std::list<Actuator*> actuators_;
    MovementActuator * movementActuator_;
    static Robot* _instance;

    //QPixmap* image_;
    //std::vector<Objects*> bag_;
};

#endif	/* ROBOT_H */

