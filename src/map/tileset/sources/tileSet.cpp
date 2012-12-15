#include "../headers/tileSet.h"

TileSet::TileSet(const int& firstGid, const char* name, const int tileWidth, const int tileHeight, const TileSetImage* image): firstGid_(firstGid),
															 name_(name),
															 tileWidth_(tileWidth),
															 tileHeight_(tileHeight),
															 image_(image),
															 nbTilePerRow_(image->getWidth() / tileWidth)
{
}

TileSet::~TileSet()
{
	delete image_;
}

void TileSet::addTile(Tile* tile)
{
	tiles_.insert(tile);
}

void TileSet::removeTile(Tile* tile)
{
	tiles_.erase(tile);
}

int TileSet::getFirstGid() const
{
	return firstGid_;
}

const char* TileSet::getName() const
{
	return name_;
}

int TileSet::getTileWidth() const
{
	return tileWidth_;
}

int TileSet::getTileHeight() const
{
	return tileHeight_;
}

const TileSetImage* TileSet::getTileSetImage() const
{
	return image_;
}

int TileSet::getNbTilePerRow()
{
	return nbTilePerRow_;
}

Tile* TileSet::getTile(const int& tileId) 
{
	Tile* t = new Tile();
	ensTileTrie::iterator it=tiles_.begin();
	t->getTileId();
	while(it!=tiles_.end() && (**it).getTileId()!=tileId)
	{
		++it;
	}
	
	if(it==tiles_.end())
	{
		t = new Tile();
	}
	else
	{
		t = (*it);
	}
	return t;
}
