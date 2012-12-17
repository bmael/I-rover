/* ***************************************************
 * File actuator.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "actuator.h"

using namespace std;

Actuator::Actuator()
{
}

Actuator::Actuator(const string name) : name_(name)
{
}

Actuator::~Actuator()
{
}

string Actuator::getName()
{
    return name_;
}
