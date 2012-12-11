#include"../headers/parseur.h"

Parseur::Parseur(char* chemin)
{
	doc_.load_file(chemin);
	mapFactory_ = MapFactory::getInstance();
}

Parseur::~Parseur()
{
	MapFactory::kill();
}

void Parseur::testParsing() const
{
	std::cout << "tile id : " << doc_.child("map").child("tileset").child("tile").attribute("id").value() << std::endl;
}

TileSet* Parseur::createTileSet(const int& firstGid, const char* name, const int tileWidth, const int tileHeight, const TileSetImage* image)
{
	return new TileSet(firstGid, name, tileWidth, tileHeight, image);
}

TileSetImage* Parseur::createTileSetImage(const char* source, const int& width, const int height)
{
	return new TileSetImage(source, width, height);
}

//TODO: implement this method
Map* Parseur::doParsing()
{
	ensCells cellsMap;
	return mapFactory_->createMap(new Background(), new Field(300, 300, cellsMap), 300, 300, Map::MAPORIENTATION_ORTHOGONAL);
}
