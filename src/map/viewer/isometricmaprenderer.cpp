#include "isometricmaprenderer.h"

IsometricMapRenderer::IsometricMapRenderer(const Map *map) :
    MapRenderer(map)
{
    loadRessources() ;
}

IsometricMapRenderer::~IsometricMapRenderer()
{

}

std::pair<int,int> IsometricMapRenderer::getPosition(int x, int y)
{
    std::pair<int,int> res ;
    res.first = (mapWidth()/2) + (x-y) * (map()->tileWidth()/2) ;
    res.second = y * (map()->tileHeight() / 2) + (x-1) * (map()->tileHeight()/2) ;
    return res ;
}
