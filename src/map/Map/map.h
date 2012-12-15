#ifndef MAP_H
#define MAP_H

#include <vector>
#include "background.h"
#include "field.h"
#include "objectLayers.h"
#include "../tileset/headers/tileSet.h"
#include <iostream>



class Map {

public:
	
	//Enumeration that specify the map orientation style
	//for our program, we only need the ORTHOGONAL orientation style.
	enum MAPORIENTATION{
		MAPORIENTATION_ORTHOGONAL,
		MAPORIENTATION_ISOMETRIC
	};

	//Constructeurs
	Map(Background* layerBg, Field* layerField, const int& tailleX, const int& tailleY, const MAPORIENTATION& mapOrient);
	
	//Destructeur
	~Map();

	//Getters
	const int getTailleX() const;
	const int getTailleY() const;
	const MAPORIENTATION getMapOrientation() const;
	Background* getBackground() const;
	Field* getField() const;
	std::vector<ObjectLayers*> getObjectLayers() const;
	std::vector<TileSet*> getTileSets() const;
	std::vector<Layers*> getAllLayers();
	
	
	
	//Methods
	void addTileSets(std::vector<TileSet*> tileSets);
	void addObjectLayers(ObjectLayers* layer);

private:
	const int tailleX_;
	const int tailleY_;
	const MAPORIENTATION orientation_;
	Background* background_;
	Field* field_;
	std::vector<ObjectLayers*> objectLayers_;
	std::vector<TileSet*> tileSets_;

};

std::ostream& operator<<(std::ostream& os, const Map& map);

#endif

