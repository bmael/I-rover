#include "map.h"


Map::Map(Background* layerBg, Field* layerField, const int& tailleX, const int& tailleY, const MAPORIENTATION& mapOrient): tailleX_(tailleX), tailleY_(tailleY), orientation_(mapOrient)
{
	layers_.push_back(layerBg);
	layers_.push_back(layerField);
}

const int Map::getTailleX() const
{
	return tailleX_;
}

const int Map::getTailleY() const
{
	return tailleY_;
}

void Map::addLayer(Layers* layer)
{
	layers_.push_back(layer);
}

void Map::addTileSets(TileSet* tileSet)
{
	tileSets_.push_back(tileSet);
}
