#ifndef TILE_H
#define TILE_H

#include<map>
#include<vector>
#include<string>

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
	std::map<std::string, std::string> properties_;

public:
	//un tile vide, quand le tile n'existe pas
	Tile();
	Tile(const int& tileId);

	void addProperty(std::string propertyName, std::string propertyValue);
	void removeProperty(std::string propertyName);

	std::vector<std::string> getPropertiesName();
	std::string getPropertyValue(std::string propertyName);
	std::map<std::string, std::string> getProperties();

	const int& getTileId();

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
