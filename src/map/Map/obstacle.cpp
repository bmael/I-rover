//
//  obstacle.cpp
//  
//
//  Created by Noémie RULLIER on 10/12/12.
//
//

#include "obstacle.h"

Obstacle::Obstacle(){}

Obstacle::Obstacle(TileSet * tileset, const bool& passable, const bool& alterable, const int& tileId):
tileset_(tileset), passable_(passable), alterable_(alterable), tileId_(tileId) {}

Obstacle::Obstacle(const Obstacle& o):
passable_(o.passable_), alterable_(o.alterable_), tileId_(o.tileId_) {}

Obstacle::~Obstacle(){}

TileSet * Obstacle::getTileset() const{
	return tileset_;
}

bool Obstacle::getPassable() const{
	return passable_;
}

bool Obstacle::getAlterable() const{
	return alterable_;
}

int Obstacle::getTileId() const{
	return tileId_;
}

void Obstacle::setTileset(TileSet * tileset){
	tileset_=tileset;
}

void Obstacle::setPassable(bool& passable){
	passable_=passable;
}

void Obstacle::setAlterable(bool& alterable){
	alterable_=alterable;
}

void Obstacle::setTileId(int& tileId){
	tileId_=tileId;
}
