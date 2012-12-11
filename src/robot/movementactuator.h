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
     *
     * @return True if the Robot can move at North, false otherwise
     */
    virtual bool canGoNorth() const = 0;

    /**
     * @brief Movement possible of the robot
     *
     * @return True if the Robot can move at South, false otherwise
     */
    virtual bool canGoSouth() const = 0;

    /**
     * @brief Movement possible of the robot
     *
     * @return True if the Robot can move at East, false otherwise
     */
    virtual bool canGoEast() const = 0;

    /**
     * @brief Movement possible of the robot
     *
     * @return True if the Robot can move at West, false otherwise
     */
    virtual bool canGoWest() const = 0;

    /**
     * @brief Movement of the robot
     *
     * @return Move the robot at North
     */
    virtual void goNorth();

    /**
     * @brief Movement of the robot
     *
     * @return Move the robot at South
     */
    virtual void goSouth();

    /**
     * @brief Movement of the robot
     *
     * @return Move the robot at East
     */
    virtual void goEast();

    /**
     * @brief Movement of the robot
     *
     * @return Move the robot at East
     */
    virtual void goWest();

    /**
     * @brief Direction of the last movement
     *
     * @return The direction the last movement
     */
    virtual Direction lastDirection() const;

    virtual void doAction(Direction direction) ;

protected :
    Direction lastDirection_;
};

#endif // MOVEMENTACTUATOR_H
