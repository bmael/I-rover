#ifndef GESTIONNAIREMAP_H
#define GESTIONNAIREMAP_H

/*!
*	\file gestionnaireMap.h
*	\brief controler that link the view and the model
*	\author Guillaume COUTABLE
*	\version 1.0
*/

#include "parseur.h"

/*!
*	\class GestionnaireMap
*	\brief the controler class
*	
*	This class create link the view and the model
*/
class GestionnaireMap
{
	public:
	
    static GestionnaireMap* getInstance(char* tmxpath = "");
		
		static void kill();
	
		/*!
		 *	\brief Type of the cell
		 *	\param x
		 *	\param y
		 *	Return true if the cell's type is different of field
		 */
		bool proximitySensor(const int& x, const int& y);
	
		/*!
		 *	\brief Name of the cell
		 *	\param x
		 *	\param y
		 *	Return the name of the object of a cell
		 */
		std::vector<std::string> cameraSensor(const int& x, const int& y);
	
		/*!
		 *	\brief Name of the cell of type field
		 *	\param x
		 *	\param y
		 *	Return the name of the field of a cell
		 */
		std::string getFieldValue(const int& x, const int& y);
	
		/*!
		 *	\brief Delete the object on the layer
		 *	\param x
		 *	\param y
		 */
		void deleteObject(const int& x, const int& y);
		
		/*!
		*	\brief Return the map
		*/
		Map* getMap();
		
	private:
	
		//to avoid copy
		GestionnaireMap(const GestionnaireMap&);
		void operator=(const GestionnaireMap&);
	
		/*!
		*	\brief Constructor
		*
		*	GestionnaireMap constructor
		*/
		GestionnaireMap(char* tmxpath);
		
		/*!
		*	\brief Destructor
		*
		*	GestionnaireMap destructor
		*/
		~GestionnaireMap();
		
		static GestionnaireMap* gestionnaire_;
		
		Map* map_; /*!< An instance of Map object */
		Parseur* parseurTMX_; /*!< The TMX parsor */
};

#endif
