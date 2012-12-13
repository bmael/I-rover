#ifndef _HEXAGONALMAPRENDERER_H
#define _HEXAGONALMAPRENDERER_H

#include "maprenderer.h"

/**
  * @class HexagonalMapRenderer
  * @brief Renderer pour les cartes hexagonales
  */
class HexagonalMapRenderer: public MapRenderer {
public:
    /**
      * @brief Constructeur
      *
      * @param map : pointeur sur un objet de type Map
      */
    HexagonalMapRenderer(const Map* map);
    /**
      * @brief Destructeur
      */
    virtual ~HexagonalMapRenderer() ;
    /**
      * @brief Retourne la position d'un objet d'apres ces coordonnees
      *
      * @param x : Abscisse de l'objet
      * @param y : Ordonnée de l'objet
      *
      * @return Un couple (int,int) indiquant les coordonnees de l'objet sur la
      *         scene en pixels
      */
    std::pair<int,int> getPosition(int x, int y) ;
};

#endif // _HEXAGONALMAPRENDERER_H
