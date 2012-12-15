//
//  mapRenderer.cpp
//
//
//  Created by Noémie RULLIER on 13/12/12.
//
//

#include "mapRenderer.h"


//MapRenderer::MapRenderer(Map* map): map_(map)
//{
//    std::vector<Layers*> layers = map->getAllLayers();
//    int tileWidth = map_->getTileSets()[0]->getTileWidth();
//    int tileHeight = map_->getTileSets()[0]->getTileHeight();
////    std::cout << *map_ << std::endl;
//    int posTileX, posTileY;
//    mapImage_ = new QImage(map->getTailleX()*tileWidth, map->getTailleY()*tileHeight, QImage::Format_ARGB32);
//    painter_ = new QPainter(mapImage_);
//    // Parcours des cell du layer de plus haut niveau, par position.
//    // Recherche sur le calque de plus au niveau le tile* et créer le QPixmap pour chaque cellule
//    	std::vector<Layers*>::reverse_iterator rit = layers.rbegin();
//		ensCells mapCells = (*rit)->getCellsTab();
//		ensCells::iterator it;
//		Cell* c;
//		Obstacle* o;
//		for(it = mapCells.begin(); it != mapCells.end(); ++it)
//        {
//			c = it->second;
//            std::pair<int, int> position(c->getX(), c->getY());
//			// Récupérer l'obstacle.
//			o = c->getObstacle();
//			while(o->getTileId()==-1 && rit != layers.rend())
//			{
//				// Tant que l'id est -1 on passe au layer suivant à la position donnée
//				++rit;
//				c = (*rit)->findCellFromLayer(position);
//				o = c->getObstacle();
//			}
//			if(rit==layers.rend())
//			{
//                std::cout << "MapRenderer::MapRenderer error!" << std::endl;
//				std::cout << "Il y a une erreur sur dans le fichier tmx, à la position (" << position.first << ", " << position.second << "), sur un des layers";
//				exit(0);
//			}
//			// Si l'id != -1 on récupère le Tile, sa position dans le tileSet, le tileSet
//			Tile* tile = o->getTile();
//			posTileX = tile->getTilePositionX();
//			posTileY = tile->getTilePositionY();
//			TileSet* tileOwner = tile->getTileSet();
			
//            // On récupère le chemin de l'image
////            qDebug() << tileOwner->getTileSetImage()->getSource();
//            QImageReader reader(QString("examples/Map/")+QString(tileOwner->getTileSetImage()->getSource()));
////            QImageReader reader(QString("examples/Map/Tilesets/TilesetField.png"));

//            // Découpage du tileSet pour récupérer la Tile
//            std::cout << *c;
//            std::cout << "(" << posTileX << ", " << posTileY << ")" << std::endl;
//            reader.setClipRect(QRect(posTileX*tileWidth, posTileY*tileHeight, tileWidth, tileHeight));
//            QImage image = reader.read();

//            QPixmap pixmap = QPixmap::fromImage(image);

//            ressources_.insert(std::pair<Cell*, QPixmap>(c,pixmap));

//            painter_->drawTiledPixmap(position.second*tileWidth, position.first*tileHeight, tileWidth, tileHeight, pixmap);

//            rit = layers.rbegin();
//		}
//        // Painter est complet.
//}

MapRenderer::MapRenderer(Map* map): map_(map)
{
    std::vector<Layers*> layers = map->getAllLayers();
    int tileWidth = map_->getTileSets()[0]->getTileWidth();
    int tileHeight = map_->getTileSets()[0]->getTileHeight();
//    std::cout << *map_ << std::endl;
    int posTileX, posTileY;
    mapImage_ = new QImage(map->getTailleX()*tileWidth, map->getTailleY()*tileHeight, QImage::Format_ARGB32);
    painter_ = new QPainter(mapImage_);
    // Parcours des cell du layer de plus haut niveau, par position.
    // Recherche sur le calque de plus au niveau le tile* et créer le QPixmap pour chaque cellule
    std::vector<Layers*>::iterator rit;
    ensCells mapCells;
    ensCells::iterator it;
    Cell* c;
    Obstacle* o;
    for(rit = layers.begin(); rit != layers.end(); ++rit)
    {
        mapCells = (*rit)->getCellsTab();
        for(it = mapCells.begin(); it != mapCells.end(); ++it)
        {
            c = it->second;
            std::pair<int, int> position(c->getX(), c->getY());
            // Récupérer l'obstacle.
            o = c->getObstacle();
            if(o->getTileId()!=-1)
            {
                // Si l'id != -1 on récupère le Tile, sa position dans le tileSet, le tileSet
                Tile* tile = o->getTile();
                posTileX = tile->getTilePositionX();
                posTileY = tile->getTilePositionY();
                TileSet* tileOwner = tile->getTileSet();

                // On récupère le chemin de l'image
    //            qDebug() << tileOwner->getTileSetImage()->getSource();
                QImageReader reader(QString("examples/Map/")+QString(tileOwner->getTileSetImage()->getSource()));
    //            QImageReader reader(QString("examples/Map/Tilesets/TilesetField.png"));

                // Découpage du tileSet pour récupérer la Tile
                reader.setClipRect(QRect(posTileX*tileWidth, posTileY*tileHeight, tileWidth, tileHeight));
                QImage image = reader.read();

                QPixmap pixmap = QPixmap::fromImage(image);

                ressources_.insert(std::pair<Cell*, QPixmap>(c,pixmap));

                painter_->drawTiledPixmap(position.first*tileWidth, position.second*tileHeight, tileWidth, tileHeight, pixmap);

            }
        }
    }
    // Painter est complet.
}

//QPixmap MapRenderer::createTilePixmap(const int& x, const int& y)
//{
//    std::vector<Layers*> layers = map_->getAllLayers();
//    int tileWidth = map_->getTileSets()[0]->getTileWidth();
//    int tileHeight = map_->getTileSets()[0]->getTileHeight();
//    int posTileX, posTileY;

//    std::vector<Layers*>::reverse_iterator rit = layers.rbegin();
//    bool find = false;
//    Cell* c;
//    Obstacle* o;
//    while(rit!=layers.rend() && !find)
//    {
//        c = (*rit)->findCellFromLayer(std::pair<int, int>(x,y));
//        o = c->getObstacle();
//        if(o->getTileId()!=-1)
//        {
//            find = true;
//        }
//        ++rit;
//    }
//    if(!find)
//    {
//        std::cout << "MapRenderer::createTilePixmap error!" << std::endl;
//        std::cout << "Il y a une erreur sur dans le fichier tmx, à la position (" << x << ", " << y << "), sur un des layers";
//    }

//    Tile* tile = o->getTile();
//    posTileX = tile->getTilePositionX();
//    posTileY = tile->getTilePositionY();
//    TileSet* tileOwner = tile->getTileSet();

//    // On récupère le chemin de l'image
//    QImageReader reader(QString("examples/Map/")+QString(tileOwner->getTileSetImage()->getSource()));

//    // Découpage du tileSet pour récupérer la Tile
//    reader.setClipRect(QRect(posTileX*tileWidth, posTileY*tileHeight, tileWidth, tileHeight));
//    QImage image = reader.read();

//    QPixmap pixmap = QPixmap::fromImage(image);
//    return pixmap;
//}

//std::map<Cell*, QPixmap>::iterator MapRenderer::findPosIt(const int& x, const int& y)
//{
//	std::map<Cell*, QPixmap>::iterator pos;
//	std::map<Cell*, QPixmap>::iterator it;
//    for(it = ressources_.begin(); it != ressources_.end(); ++it)
//    {
//        if(it->first->getX()==x && it->first->getY()==y)
//        {
//            pos = it;
//        }
//    }
//	return pos;
//}


//void MapRenderer::updateRessources(const int& x, const int& y)
//{
//	std::map<Cell*, QPixmap>::iterator pos = findPosIt(x,y);
//	pos->second = createTilePixmap(x,y);
//}

//// A voir si on en a vraiment besoin
//void MapRenderer::createQPainter()
//{
//	int xPx = map_->getTileSets()[0]->getTileWidth();
//    int yPx = map_->getTileSets()[0]->getTileHeight();
//	painter_ = new QPainter(mapImage_);
//	std::map<Cell*, QPixmap>::iterator it;
//    for(it = ressources_.begin(); it != ressources_.end(); ++it)
//    {
//        painter_->drawPixmap(it->first->getX()*xPx, it->first->getY()*yPx, it->second);
//    }
//}



QGraphicsPixmapItem* MapRenderer::updateRendu(const int& x, const int& y)
{
//    std::cout << *map_ << std::endl;
    std::vector<Layers*> layers = map_->getAllLayers();
    int tileWidth = map_->getTileSets()[0]->getTileWidth();
    int tileHeight = map_->getTileSets()[0]->getTileHeight();
    int posTileX, posTileY;
	
    std::vector<Layers*>::iterator rit;
    Cell* c;
    Obstacle* o;
    std::pair<int, int> position(x,y);
    QPixmap pixmap;
	
    painter_->eraseRect(position.first*tileWidth, position.second*tileHeight, tileWidth, tileHeight);
    for(rit = layers.begin(); rit!=layers.end() ; ++rit)
    {
        c = (*rit)->findCellFromLayer(position);
        o = c->getObstacle();
        if(o->getTileId()!=-1)
        {
            // Si l'id != -1 on récupère le Tile, sa position dans le tileSet, le tileSet
            Tile* tile = o->getTile();
            posTileX = tile->getTilePositionX();
            posTileY = tile->getTilePositionY();
            TileSet* tileOwner = tile->getTileSet();

			
            // On récupère le chemin de l'image
            QImageReader reader(QString("examples/Map/")+QString(tileOwner->getTileSetImage()->getSource()));
			
            // Découpage du tileSet pour récupérer la Tile
            reader.setClipRect(QRect(posTileX*tileWidth, posTileY*tileHeight, tileWidth, tileHeight));
            QImage image = reader.read();
			
            pixmap = QPixmap::fromImage(image);
			
            ressources_.insert(std::pair<Cell*, QPixmap>(c,pixmap));
			
            painter_->drawTiledPixmap(position.first*tileWidth, position.second*tileHeight, tileWidth, tileHeight, pixmap);
        }
    }
	
    QPixmap mapPixmap = QPixmap::fromImage(*mapImage_);
    QGraphicsPixmapItem* map = new QGraphicsPixmapItem(mapPixmap);
    return map;
}

//void MapRenderer::updateQPainter(const int& x, const int& y)
//{
    /*int xPx = map_->getTileSets()[0]->getTileWidth();
    int yPx = map_->getTileSets()[0]->getTileHeight();
    // In the method eraseRect, the coordinate x and y are in pixels
    painter_->eraseRect(x*xPx, y*yPx, xPx, yPx);
    painter_->drawPixmap(x*xPx, y*yPx, findPosIt(x,y)->second);*/
//}

QGraphicsPixmapItem* MapRenderer::createRendu(){
	// Creation of the QPixmap which contain the image of the entire map
	QPixmap mapPixmap = QPixmap::fromImage(*mapImage_);
	// Creation of the QGraphicsPixmapItem which contain the previous QPixmap
	QGraphicsPixmapItem* map = new QGraphicsPixmapItem(mapPixmap);
	
	return map;
}

/*QGraphicsPixmapItem* MapRenderer::updateRendu(const int& x, const int& y)
{
	updateRessources(x,y);
	updateQPainter(x,y);
	return createRendu();
}*/
