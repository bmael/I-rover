#include "hexagonalmaprenderer.h"

HexagonalMapRenderer::HexagonalMapRenderer(const Map *map) :
    MapRenderer(map)
{
    loadRessources() ;
}

HexagonalMapRenderer::~HexagonalMapRenderer()
{

}

std::pair<int,int> HexagonalMapRenderer::getPosition(int x, int y)
{
    std::pair<int,int> res ;
    res.first = x * map()->tileWidth() - ( x * (map()->tileWidth() / 4)) ;
    res.second = y * map()->tileHeight() ;
    if(x % 2 == 0)
        res.second = res.second + map()->tileHeight() / 2 ;
    return res ;
}
