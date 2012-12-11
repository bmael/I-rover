//
//  obstacle.h
//  
//
//  Created by Noémie RULLIER on 10/12/12.
//
//

#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "../tileset/headers/tileSet.h"

/**
 * \class Obstacle
 * \brief Representation of an obstacle on the map. This obstacle is a tile with parameters to know if the obstacle is passable or not and if is alterable or not.
 */
class Obstacle
{
public:

	/**
	 * \brief Constructor
	 * \param tileset
	 * \param passable
	 * \param alterable
	 * \param tileId
	 */
	Obstacle(TileSet * tileset, const bool& passable, const bool& alterable, const int& tileId);
	
	/**
	 * \brief Default constructor
	 */
	Obstacle();
	
	/**
	 * \brief Copy destructor
	 */
	Obstacle(const Obstacle& o);
	
	/**
	 * \brief Destructor
	 */
	~Obstacle();
	
	
	//! \name Getters
	//@{
	TileSet* getTileset() const;
	bool getPassable() const;
	bool getAlterable() const;
	int getTileId() const;
	//@}
	
	//! \name Setters
	//@{
	void setTileset(TileSet * tileset);
	void setPassable(bool& passable);
	void setAlterable(bool& alterable);
	void setTileId(int& tileId);
	//@}
	
	
private:
	
	TileSet * tileset_;
	bool passable_; // Specify if the robot can pass on the object
	bool alterable_; // Specify if the property passable of the obstacle can be change
	int tileId_;
	
};


#endif
