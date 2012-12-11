/* ***************************************************
 * File rocketlauncher.h
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#ifndef ROCKETLAUNCHER_H
#define ROCKETLAUNCHER_H

#include "actuator.h"
/**
 * @class RocketLauncher
 * @brief A rocketlauncher for the robot
 *
 * Allow the robot to destroy obstacles like rocks or trees
 */
class RocketLauncher : public Actuator
{
public:
    /**
     * @brief Constructor
     */
    RocketLauncher();

    /**
     * @brief Destructor
     */
    ~RocketLauncher();

    /**
     * @brief Destroy the object
     *
     * @param direction : Object destroy at this direction
     */
    void doAction(Direction direction);
};

#endif // ROCKETLAUNCHER_H
