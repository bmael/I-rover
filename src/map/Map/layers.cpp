//
//  layers.cpp
//  
//
//  Created by Noémie RULLIER on 19/11/12.
//
//

#include "layers.h"

Layers::Layers(const int& x, const int& y) :
tailleX_(x), tailleY_(y) {}

Layers::Layers(const int& x, const int& y, const ensCells& cellsMap) :
tailleX_(x), tailleY_(y), cellsMap_(cellsMap) {}

Layers::~Layers() {}