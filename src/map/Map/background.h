//
//  background.h
//  
//
//  Created by Noémie RULLIER on 19/11/12.
//
//

/**
 * \class Background
 * \brief Background's representation of the map. 
		  This background is always the same background for all the map
 */
#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "layers.h"

class Background : public Layers
{
public:
	
	/**
	 * \brief Default constructor
	 */
	Background();
	
	/**
	 * \brief Destructor
	 */
	~Background();
	
	//! \name Getters
	//@{
	virtual int getTailleX() const;
	virtual int getTailleY() const;
	virtual ensCells getCellsTab() const;
	//@}
	
	
	//! \name Setters
	//@{
	virtual void setTailleX(int& tailleX);
	virtual void setTailleY(int& tailleY);
	virtual void setCellsTab(ensCells& cellsMap);
	//@}
	
	virtual std::ostream& operator<<(std::ostream& os);
//	virtual std::ostream& operator<<(std::ostream& os, const Layer& ly);
//	virtual std::ostream& operator<<(std::ostream& os, const Background& bg);
//	virtual std::ostream& operator<<(std::ostream& os, const Field& fd);
//	virtual std::ostream& operator<<(std::ostream& os, const ObjectLayers& ol);
	
};

#endif
