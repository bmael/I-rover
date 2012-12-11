//
//  field.cpp
//  
//
//  Created by Noémie RULLIER on 08/12/12.
//
//

#include "field.h"

Field::Field(const int& x, const int& y, const ensCells& cellsMap): Layers(x, y, cellsMap)
{}

Field::Field(const int& x, const int& y, const std::vector<Cell*>& cellsTab): Layers(x, y) {
	for(unsigned int i=0; i<cellsTab.size();i++){
		cellsMap_[std::pair<int,int>(cellsTab[i]->getX(),cellsTab[i]->getY())] = cellsTab[i];
	}
}

Field::~Field(){}


int Field::getTailleX() const
{
	return tailleX_;
}

int Field::getTailleY() const
{
	return tailleY_;
}

ensCells Field::getCellsTab() const
{
	return cellsMap_;
}


void Field::setTailleX(int& tailleX){
	tailleX_=tailleX;
}

void Field::setTailleY(int& tailleY){
	tailleY_=tailleY;
}

void Field::setCellsTab(ensCells& cellsMap){
	cellsMap_=cellsMap;
}