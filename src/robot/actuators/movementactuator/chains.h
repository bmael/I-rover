/* ***************************************************
 * File chains.h
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#ifndef CHAINS_H
#define CHAINS_H

#include "movementactuator.h"

/**
 * @class Chains
 * @brief Chains for the robot
 *
 * Allow the robot to move on the snow
 */
class Chains : public MovementActuator
{
public:
    /**
     * @brief Constructor
     */
    Chains();

    /**
     * @brief Destructor
     */
    ~Chains();
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

#endif // CHAINS_H
