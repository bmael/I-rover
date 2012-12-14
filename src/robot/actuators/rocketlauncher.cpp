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
// Si la ressource en (x, y) est un arbre alors détruire obstacle

//    if (map->ressourceString(x,y) == "Arbre")
//    {
//        map->destroyMapRessource(x,y) ; //On détruit la ressource
//    }
}
