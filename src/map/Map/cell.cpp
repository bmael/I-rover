//
//  cell.cpp
//  
//
//  Created by Noémie RULLIER on 19/11/12.
//
//

#include "cell.h"

Cell::Cell(const int& x, const int& y, Obstacle* tile):
x_(x), y_(y) , tile_(tile) {}

Cell::Cell(const int& x, const int& y):
x_(x), y_(y) {}

Cell::Cell(const Cell& c):
x_(c.x_), y_(c.y_) {}

Cell::~Cell(){
}

int Cell::getX() const{
	return x_;
}

int Cell::getY() const{
	return y_;
}

Obstacle* Cell::getTile() const{
	return tile_;
}

void Cell::setX(int& x){
	x_=x;
}

void Cell::setY(int& y){
	y_=y;
}

void Cell::setTile(Obstacle* tile){
	tile_=tile;
}