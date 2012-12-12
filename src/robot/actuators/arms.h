/* ***************************************************
 * File arms.h
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#ifndef ARMS_H
#define ARMS_H
#include "actuator.h"

/**
 * @class Arms
 * @brief Arms for the robot
 *
 * Allow the robot to move obstacles like rocks or wooden boxes
 */
class Arms : public Actuator
{
public:
    /**
     * @brief Constructor
     */
    Arms();

    /**
     * @brief Destructor
     */
    ~Arms();

    /**
     * @brief Move the object
     *
     * @param direction : move the object on this direction
     */
    void doAction(Direction direction);
};

#endif // ROCKETLAUNCHER_H
