/* ***************************************************
 * File movementactuator.h
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#ifndef MOVEMENTACTUATOR_H
#define MOVEMENTACTUATOR_H
#include "actuator.h"

class MovementActuator : public Actuator
{
public:
    /**
     * @brief Constructor
     */
    MovementActuator();

    /**
     * @brief Constructor
     */
    MovementActuator(const std::string name);

    /**
     * @brief Destructor
     */
    virtual ~MovementActuator();

    /**
     * @brief Movement possible of the robot
     * @return True if the Robot can move at North, false otherwise
     */
    virtual bool canGoNorth() const = 0;

    /**
     * @brief Movement possible of the robot
     * @return True if the Robot can move at South, false otherwise
     */
    virtual bool canGoSouth() const = 0;

    /**
     * @brief Movement possible of the robot
     * @return True if the Robot can move at East, false otherwise
     */
    virtual bool canGoEast() const = 0;

    /**
     * @brief Movement possible of the robot
     * @return True if the Robot can move at West, false otherwise
     */
    virtual bool canGoWest() const = 0;

    /**
     * @brief Movement of the robot
     * @return Move the robot at North
     */
    virtual void goNorth();

    /**
     * @brief Movement of the robot
     * @return Move the robot at South
     */
    virtual void goSouth();

    /**
     * @brief Movement of the robot
     * @return Move the robot at East
     */
    virtual void goEast();

    /**
     * @brief Movement of the robot
     * @return Move the robot at East
     */
    virtual void goWest();

    /**
     * @brief Direction of the last movement
     * @return The direction the last movement
     */
    virtual Direction lastDirection() const;

    /**
     * @brief Realise an action
     * @param No action needed for a movement actuator, function empty here
     */
    virtual void doAction(const int &x, const int &y) ;

protected :
    Direction lastDirection_;
};

#endif // MOVEMENTACTUATOR_H
