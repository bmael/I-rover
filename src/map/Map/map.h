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
//<<<<<<< HEAD
//	std::vector<Layers*> getLayers() const;
//=======
	Background* getBackground() const;
	Field* getField() const;
	std::vector<ObjectLayers*> getObjectLayers() const;
//>>>>>>> Essai-No-avec-modif-de-map-(les-layers)-et-ajout-de-la-fonction-qui-permet-de-retourner-le-type-des-cellules
	
	
	
	//Methods
//<<<<<<< HEAD
//	void addLayer(Layers* layer);
	void addTileSets(std::vector<TileSet*> tileSets);
//=======
	void addObjectLayers(ObjectLayers* layer);
//	void addTileSets(TileSet* tileSet);
//>>>>>>> Essai-No-avec-modif-de-map-(les-layers)-et-ajout-de-la-fonction-qui-permet-de-retourner-le-type-des-cellules

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

