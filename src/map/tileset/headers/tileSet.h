#ifndef TILESET_H
#define TILESET_H

#include <set>
#include "tileSetImage.h"

//typedef std::set<Tile*, point_less<Tile> > ensTileTrie;

class TileSet{

	private:
		const int firstGid_;
		const char* name_;
		const int tileWidth_;
		const int tileHeight_;
		const TileSetImage* image_;
//		ensTileTrie tiles_;
		
	public:
		TileSet(const int& firstGid, const char* name, const int tileWidth, const int tileHeight, const TileSetImage* image);
		~TileSet();
		
//		void addTile(const Tile& tile);
//		void removeTile(const Tile& tile);
		
		int getFirstGid() const;
		const char* getName() const;
		int getTileWidth() const;
		int getTileHeight() const;
		const TileSetImage* getTileSetImage() const;
//		Tile* getTile(const int& tileId) const;
};

#endif
