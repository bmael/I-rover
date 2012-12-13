#ifndef _MAPRENDERER_H
#define _MAPRENDERER_H

#include <QtGui/QGraphicsPixmapItem>
#include <map>
#include <vector>

#include "map.h"

/**
  * @class MapRenderer
  * @brief Rendering manager for tmx map
  */
class MapRenderer {
private :
    const Map* _map ;
    std::map< const Tile*, const QPixmap > _ressources ;
    Field _fields ;
protected :
    /**
      * @brief Map of the renderer
      *
      * @return a Map
      */
    const Map* map() const ;
    /**
      * @brief Accès à un calque (Layer)
      *
      * @param index : numéro du calque
      *
      * @return Un pointeur sur un Layer
      */
    const Layers* layer(int index) const ;
    /**
      * @brief Préchargement des données
      *
      * Permet de précharger les données de la carte dans le renderer.
      * Les ressources et layers sont préchargés, pour gagner du temps
      * et de la mémoire.
      */
    void loadRessources() ;
public:
    /**
      * Constructeur
      *
      * @param map : pointeur sur un objet de type Map
      */
    MapRenderer(const Map* map) : _map(map) {}
    /**
      * @brief Destructeur
      */
    virtual ~MapRenderer() {}
    /**
      * @brief Retourne la largeur de la carte
      *
      * @return La largeur de la carte, en pixel
      */
    virtual int mapWidth() const ;
    /**
      * @brief Retourne la hauteur de la carte
      *
      * @return La hauteur de la carte, en pixel
      */
    virtual int mapHeight() const ;
    /**
      * @brief Element présent sur un calque aux coordonnées fournies
      *
      * Permet d'obtenir l'élément sous forme d'image sur un layer donné
      * aux coordonnées données.
      *
      * @param layer : Le numéro du layer
      * @param x : Position sur l'axe des abscisse
      * @param y : Position sur l'axe des ordonnées
      *
      * @return Un pointeur sur unQGraphicsPixmapItem représentant l'image
      * aux coordonnées fournies, NULL s'il n'y a rien.
      */
    QGraphicsPixmapItem* itemAt(int layer, int x, int y) ;
    /**
      * @brief Retourne la position d'un objet d'apres ces coordonnees
      *
      * @param x : Abscisse de l'objet
      * @param y : Ordonnée de l'objet
      *
      * @return Un couple (int,int) indiquant les coordonnees de l'objet sur la
      *         scene en pixels
      */
    virtual std::pair<int,int> getPosition(int x, int y) = 0 ;
	/**
	 * @brief Préchargement des ressources de la carte
	 *
	 * Charge les ressources dela carte. Transforme les données brutes
	 * contenues dans les Tile en image QPixMap exploitable par Qt
	 *
	 * @return Une std::map ayant pour clé des pointeurs sur Tile, et en
	 *         valeur un QPixMap représentant l'image du Tile.
	 */
	const std::map< const Tile*, const QPixmap >& ressources() const ;
	const Tile* tileAt(int lay, int x, int y) const ;
};

#endif // _MAPRENDERER_H
