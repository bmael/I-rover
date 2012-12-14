#include "rocketlauncher.h"
#include "gestionnaireMap.h"
using namespace std;

RocketLauncher::RocketLauncher() : Actuator("RocketLaucher")
{
}
/**
 * @brief RocketLauncher::doAction
 */

RocketLauncher::~RocketLauncher(){
}

void RocketLauncher::doAction(const int &x, const int &y)
{
 //   GestionnaireMap gestionnaire = GestionnaireMap::getInstance();
 //   gestionnaire.deleteObject(x, y);
}
