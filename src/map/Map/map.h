#ifndef MAP_H
#define MAP_H

#include <vector>
#include "background.h"
#include "field.h"
#include "objectLayers.h"
#include "../tileset/headers/tileSet.h"



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
	
	
	
	//Methods
	void addLayer(Layers* layer);
	void addTileSets(TileSet* tileSet);

private:
	const int tailleX_;
	const int tailleY_;
	const MAPORIENTATION orientation_;
	std::vector<Layers*> layers_;
	std::vector<TileSet*> tileSets_;

};

#endif

