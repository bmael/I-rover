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
