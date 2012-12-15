#ifndef TILE_H
#define TILE_H

#include<map>
#include<vector>
#include<string>

class TileSet;

template< typename T>
struct point_less
{
	bool operator() (const T* x, const T* y)
	{
		return *x < *y;
	}
};

class Tile
{

private:
	const int tileId_;
	TileSet* tileSet_;
	std::map<std::string, std::string> properties_;
	//tile position in the tileset
	const int posX_; //tileId_ mod (number of tile in a row)
	const int posY_; //tileId_ div (number of tile in a row)
	
public:
	//un tile vide, quand le tile n'existe pas
	Tile();
	Tile(const int& tileId, TileSet* tileSet, const int& nbTileperRow);

	void addProperty(std::string propertyName, std::string propertyValue);
	void removeProperty(std::string propertyName);

	std::vector<std::string> getPropertiesName();
	std::string getPropertyValue(std::string propertyName);
	std::map<std::string, std::string> getProperties();

	const int& getTileId();
	TileSet* getTileSet();
	int getTilePositionX() const;
	int getTilePositionY() const;

	bool operator<(const Tile& t) const;
	bool operator>(const Tile& t) const;
	bool operator==(const Tile& t) const;
	bool operator!=(const Tile& t) const;

};

class ComparatorTile
{
	bool operator()(const Tile& t1, const Tile& t2);
};

#endif
