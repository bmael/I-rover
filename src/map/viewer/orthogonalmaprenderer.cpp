#include "orthogonalmaprenderer.h"

OrthogonalMapRenderer::OrthogonalMapRenderer(const Map *map) :
    MapRenderer(map)
{
    loadRessources() ;
}

OrthogonalMapRenderer::~OrthogonalMapRenderer()
{

}

std::pair<int,int> OrthogonalMapRenderer::getPosition(int x, int y)
{
    std::pair<int,int> res ;
    res.first = x * map()->tileWidth() ;
    res.second = y * map()->tileHeight() ;
    return res ;
}
