#include "maprenderer.h"

const Map* MapRenderer::map() const
{
    return _map ;
}

void MapRenderer::loadRessources()
{
    std::map<int, Tile>::const_iterator it  ;
    for(it = _map->ressources().begin() ; it != _map->ressources().end() ; it++)
    {
        const Tile* tile = &((*it).second) ;
        QByteArray data(tile->binaryData(), tile->binaryDataLength()) ;
        QImage img = QImage::fromData(data) ;
        _ressources.insert(std::pair<const Tile*, const QPixmap>(tile, QPixmap::fromImage(img))) ;
    }
    for(unsigned int i = 0 ; i < _map->layers().size() ; i ++)
    {
        _fields.push_back(&(_map->layers().at(i))) ;
    }
}

int MapRenderer::mapWidth() const
{
    return map()->width() *  map()->tileWidth() ;
}

int MapRenderer::mapHeight() const
{
    return  map()->height() *  map()->tileHeight() ;
}

const std::map< const Tile*, const QPixmap >& MapRenderer::ressources() const
{
    return _ressources ;
}

const Layers *MapRenderer::layer(int index) const
{
    return _fields.at(index) ;
}

QGraphicsPixmapItem* MapRenderer::itemAt(int lay, int x, int y)
{
    QGraphicsPixmapItem* pmi = 0 ;
    if(layer(lay)->tile(x,y) != NULL)
    {
        pmi =  new QGraphicsPixmapItem(ressources().at(layer(lay)->tile(x,y))) ;
        std::pair<int,int> pos = getPosition(x, y) ;
        pmi->setX(pos.first);
        pmi->setY(pos.second);
        pmi->setZValue(lay);

        if(pmi->pixmap().height() > map()->tileHeight())
        {
            pmi->setY(pmi->y() - pmi->pixmap().height() + map()->tileHeight());
        }

    }
    return pmi ;
}

const Tile* MapRenderer::tileAt(int lay, int x, int y) const
{
	return layer(lay)->tile(x,y) ;
}
