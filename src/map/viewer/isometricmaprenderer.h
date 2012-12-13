#ifndef _ISOMETRICMAPRENDERER_H
#define _ISOMETRICMAPRENDERER_H

#include "maprenderer.h"

/**
  * @class IsometricMapRenderer
  * @brief Renderer pour les cartes isometriques
  */
class IsometricMapRenderer : public MapRenderer {
public:
    /**
      * @brief Constructeur
      *
      * @param map : pointeur sur un objet de type Map
      */
    IsometricMapRenderer(const Map* map) ;
    /**
      * @brief Destructeur
      */
    virtual ~IsometricMapRenderer() ;
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

#endif // _ISOMETRICMAPRENDERER_H
