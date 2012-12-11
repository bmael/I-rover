#ifndef WHEELS_H
#define WHEELS_H

#include <robot/movementactuator.h>

/**
 * @class Wheels
 * @brief Wheels for the robot
 *
 * Allow the robot to move on ground, grass.
 */
class Wheels : public MovementActuator
{
public:
    /**
     * @brief Constructor
     */
    Wheels();

    /**
     * @brief Destructor
     */
    ~Wheels();

    /**
     * @brief Movement possible of the robot
     *
     * @return True if the Robot can move at North, false otherwise
     */
    bool canGoNorth() const;

    /**
     * @brief Movement possible of the robot
     *
     * @return True if the Robot can move at South, false otherwise
     */
    bool canGoSouth() const;

    /**
     * @brief Movement possible of the robot
     *
     * @return True if the Robot can move at East, false otherwise
     */
    bool canGoEast() const;

    /**
     * @brief Movement possible of the robot
     *
     * @return True if the Robot can move at West, false otherwise
     */
    bool canGoWest() const;
};

#endif // WHEELS_H
