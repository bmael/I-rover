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
    //Non-exhaustif list to complete (waiting for Guillaume and Noemie part)
    //    GestionnaireMap.deleteObject(coord.first-1, coord.second);
}
