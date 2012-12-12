#include "arms.h"
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
void Arms::doAction(Direction direction)
{
// Si la ressource en (x, y) est un arbre alors détruire obstacle

//    if (map->ressourceString(x,y) == "WoodenBoxes")
//    {
//        map->moveMapRessource(x,y) ; //On détruit la ressource
//    }
}
