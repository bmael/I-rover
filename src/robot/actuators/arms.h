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
     * @param x : the ordonnee where the actuator need to be activate
     * @param y : the abcisse where the actuator need to be activate
     */
    void doAction(const int &x, const int &y);
};

#endif // ROCKETLAUNCHER_H
