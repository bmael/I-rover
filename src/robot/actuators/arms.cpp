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
    //Non-exhaustif list to complete (waiting for Guillaume and Noemie part)
    //if (GestionnaireMap.getFieldValue(coord.first-1, coord.second) == "rainders")
    //{
    //    GestionnaireMap.deleteObject(coord.first-1, coord.second);
    //}
}
