//
//  mapRenderer.h
//
//
//  Created by Noémie RULLIER on 13/12/12.
//
//

#ifndef MAPRENDERER_H
#define MAPRENDERER_H

#include <QPainter>
#include <QImage>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QImageReader>

#include "../Map/map.h"
#include "../Map/cell.h"

class MapRenderer
{
    
public:
	
	/**
     * \brief Constructor of the mapRenderer
	 */
	MapRenderer(Map* map);
	
//	/**
//     * \brief Method that create the QPixmap associate at the obstacle no empty in the more higher layer at position x and y
//	 */
//    QPixmap createTilePixmap(const int& x, const int& y);
	
//	/**
//     * \brief Method that update the ressources_ attribute
//	 */
//	void updateRessources(const int& x, const int& y);
	
//	/**
//     * \brief Method that create the QPainter which contanin all the QPixmap
//	 */
//	void createQPainter();
	
//	/**
//     * \brief Method that update the QPainter at the position x and y
//	 */
//	void updateQPainter(const int& x, const int& y);
	
	/**
     * \brief Method that create the renderer of the map
	 */
	QGraphicsPixmapItem* createRendu();
	
    /**
     * \brief Method that update the renderer of the map
     */
    QGraphicsPixmapItem* updateRendu(const int& x, const int& y);
    
//	/**
//     * \brief Method that return an iterator at the position where the cell have for coordinate x and y
//	 */
//    std::map<Cell*, QPixmap>::iterator findPosIt(const int& x, const int& y);
	
private:
	
	Map* map_;
	std::map<Cell*, QPixmap> ressources_;
	QPainter *painter_; // Contiendra tous les QPixmap
	QImage *mapImage_;
	
};

#endif


// Pour le constructeur ==> == 1 et 2
// créer les ressources
// Créer QPainter (utilse la méthode de création QPainter)



//Etapes:
// 1) Création du map render -> passe la map en paramètre, remplir ressources soit pour chaque cellule on créer "l'image" (=QPixmap) corespondante (à partir du tileset du layer de plus haut nivo)
// 2) createRendu -->
// a - On parcours les QPixmap et on les ajoute dans un grand QPixmap (définit une taille en pixel soit pixel tile x taille map) ==> Voir avec Qt si c'est possible
// b- Le grand QPIxmap on le met dans un QGraphicsPixmapItem (quand on créé
// c===> Voir schéma feuille

// 3) Update


// prend ton QPainter et transforme en tralalala cf schéma



// On commence par mettre à jour le rendu de la cellule modifiée = mettre a jour les ressources
// Modification du QPainter
//appel de createRendu


// Etapes:
// 1) Pour chaque case on récupère la représentation graphique (= celle qui correspond au calque de plus haut niveau )
// 2) Une fois qu'on a toutes les représentations cases, on créer le rendu
// ==> Etape 1 et 2 = methode initialisation
// 3) Quand on a une action du robot, on met a jour la cellule et on recalcul le rendu
// ==> Autre méthode de màj
