#ifndef PARSEUR_HPP
#define PARSEUR_HPP

/*!
*	\file Parseur.h
*	\brief the tmx parsor
*	\author Guillaume COUTABLE
*	\version 1.0
*/


#include "../../lib/pugixml_sources/pugixml.hpp"
#include "mapFactory.h"
#include <iostream>
#include <string>

/*!
*	\class Parseur
*	\brief the tmx parsor class
*	
*	This class read tmx files and create all class in reference to files tilesets
*/
class Parseur{

private:
	pugi::xml_document doc_;
	MapFactory* mapFactory_;
	
public:
	Parseur(char* chemin);
	~Parseur();
	
	TileSet* createTileSet(const int& firstGid, const char* name, const int tileWidth, const int tileHeight, const TileSetImage* image);
		
	TileSetImage* createTileSetImage(const char* source, const int& width, const int height);
		
	void testParsing() const;
	
	Map* doParsing();
};

#endif
