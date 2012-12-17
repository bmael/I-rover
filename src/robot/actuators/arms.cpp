/* ***************************************************
 * File arms.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "arms.h"
#include "gestionnaireMap.h"
using namespace std;

Arms::Arms() : Actuator("Arms")
{
}

Arms::~Arms(){
}

void Arms::doAction(const int &x, const int &y)
{
   // Not implemented yet in map
   // For example, this actuator move the object in (x, y+1) if robot do the action in South Direction
   // GestionnaireMap::getInstance()->moveObject(x,y);
}
