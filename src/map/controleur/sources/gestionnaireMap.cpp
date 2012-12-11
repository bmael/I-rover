#include "../headers/gestionnaireMap.h"

GestionnaireMap::GestionnaireMap(char* tmxpath)
{
	parseurTMX_ = new Parseur(tmxpath);
	map_ = parseurTMX_->doParsing();
}
