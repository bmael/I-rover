#include "arms.h"
#include "gestionnaireMap.h"
using namespace std;

Arms::Arms() : Actuator("Arms")
{
}

Arms::~Arms(){
}

/**
 * @brief Arms::doAction
 *
 * @param direction : move the object on this direction
 */
void Arms::doAction(const int &x, const int &y)
{
   // GestionnaireMap gestionnaire = GestionnaireMap::getInstance();
   // gestionnaire.deleteObject(x, y);
}
