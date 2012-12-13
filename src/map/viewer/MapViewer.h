#ifndef _MAPVIEWER_H
#define _MAPVIEWER_H

#include <QtGui/QGraphicsView>
#include <string>

#include "map/map.h"
#include "maprenderer.h"

/**
  * @class MapViewer
  * @brief Visionneur de carte au format TMX
  */
class MapViewer : public QGraphicsView {
protected :
    Map* _map ;
    QGraphicsScene* _scene ;
    MapRenderer* _renderer ;
public :
    /**
      * @brief Constructeur
      *
      * @param parent : ELement graphique parent du visionneur
      */
    MapViewer(QWidget* parent = 0) ;
    /**
      * @brief Destructeur
      */
    virtual ~MapViewer() ;
    /**
      * @brief Affiche une carte au format TMX.
      *
      * @param filename : Chemin vers une carte au format TMX
      */
    void viewMap(const std::string& filename) ;
    /**
      * @brief Carte affichée par le viewer
      *
      * @return Un pointeur sur une Map
      */
    Map* map() const ;
    /**
      * @brief Ajoute l'image d'un robot sur la carte
      *
      * @param robotImage : image du robot
      */
    void addRobotImage(QGraphicsPixmapItem* robotImage) ;

    std::pair <int,int> getPosition(int x, int y) ;
	const std::map< const Tile*, const QPixmap >& ressources() const ;
	const Tile* ressourceAt(int x, int y) const ;
};

#endif // _MAPVIEWER_H
