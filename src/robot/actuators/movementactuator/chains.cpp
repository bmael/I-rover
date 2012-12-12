#include "chains.h"
using namespace std;

Chains::Chains() : MovementActuator("Chains")
{
}

Chains::~Chains()
{
}

bool Chains::canGoEast() const
{
    //Récupération des coordonnées de la carte
    //Vérification que le terrain est franchisssable par les chaines : le terrain est donc de type "neige"
    return 0;
}

bool Chains::canGoNorth() const
{
    //Same
    return 0;
}

bool Chains::canGoSouth() const
{
    //Same
    return 0;
}

bool Chains::canGoWest() const
{
    //Same
    return 0;
}
