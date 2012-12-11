/* ***************************************************
 * File actuator.h
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#ifndef ACTUATOR_H
#define	ACTUATOR_H
#include <iostream>
/**
 * @enum Direction
 * @brief Cardinal points
 */
enum Direction {
    Dir = 0, N, S, E, W
};

/**
 * @class Actuator
 * @brief Actuator for robot
 */
class Actuator {

public :
    /**
     * @brief Constructor
     */
    Actuator();

    /**
     * @brief Construtor
     *
     * @param name : Actuator's name
     */
    Actuator(const std::string name);

    /**
     * @brief Destructor
     */
    virtual ~Actuator();

    /**
      * @brief Activate the action of the actuator
      *
      * @param direction : direction of the action
      *
      * @return True if the action has been done, false otherwise
      */
    virtual void doAction(Direction direction) = 0;

    /**
     * @brief Actuator's name
     *
     * @return The actuator's name
     */
    std::string getName();

protected :
    std::string name_;
};

#endif	/* ACTUATOR_H */

