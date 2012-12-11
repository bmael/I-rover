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
		
	private:
		Map* map_; /*!< An instance of Map object */
		Parseur* parseurTMX_; /*!< The TMX parsor */
};

#endif
