/* ***************************************************
 * File rocketlauncher.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "rocketlauncher.h"
#include "gestionnaireMap.h"
using namespace std;

RocketLauncher::RocketLauncher() : Actuator("RocketLaucher")
{
}

RocketLauncher::~RocketLauncher(){
}

void RocketLauncher::doAction(const int &x, const int &y)
{
    GestionnaireMap::getInstance()->deleteObject(x,y);
}
