#ifndef _ORTHOGONALMAPRENDERER_H
#define _ORTHOGONALMAPRENDERER_H

#include "maprenderer.h"

/**
  * @class OrthogonalMapRenderer
  * @brief Renderer pour les cartes orthogonales
  */
class OrthogonalMapRenderer : public MapRenderer {
public:
    /**
      * @brief Constructeur
      *
      * @param map : pointeur sur un objet de type Map
      */
    OrthogonalMapRenderer(const Map* map) ;
    /**
      * @brief Destructeur
      */
    virtual ~OrthogonalMapRenderer() ;
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

#endif // _ORTHOGONALMAPRENDERER_H
