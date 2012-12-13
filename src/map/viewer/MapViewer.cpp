#include <stdexcept>

#include "MapViewer.h"
#include "orthogonalmaprenderer.h"
#include "isometricmaprenderer.h"
#include "hexagonalmaprenderer.h"

MapViewer::MapViewer(QWidget* parent) :
    QGraphicsView(parent)
{
    _map = 0 ;
    _renderer = 0 ;
    _scene = 0 ;

    setWindowTitle("TMX Viewer");

    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    setDragMode(QGraphicsView::ScrollHandDrag);
    setOptimizationFlags(QGraphicsView::DontAdjustForAntialiasing | QGraphicsView::DontSavePainterState);
    setBackgroundBrush(QBrush(QColor(64,64,64)));
    setFrameStyle(QFrame::NoFrame);

    viewport()->setAttribute(Qt::WA_StaticContents);
}

MapViewer::~MapViewer()
{
    if(_renderer)
        delete _renderer ;
    if(_scene)
        delete _scene ;
    if(_map)
        delete _map ;
}

void MapViewer::viewMap(const std::string& filename)
{
    if(_renderer)
        delete _renderer ;

    if(_map)
        delete _map ;

    if(_scene)
        delete _scene ;

    _scene = new QGraphicsScene(this) ;
    setScene(_scene);

    _map = new Map() ;
    _map->loadFromFile(filename) ;

    if(_map->orientation() == ORTHOGONAL)
        _renderer = new OrthogonalMapRenderer(_map) ;
    else if(_map->orientation() == ISOMETRIC)
         _renderer = new IsometricMapRenderer(_map) ;
    else if(_map->orientation() == HEXAGONAL)
        _renderer = new HexagonalMapRenderer(_map) ;
    else
        throw std::exception() ;

    for(unsigned int l = 0 ; l < _map->layers().size() ; l ++ )
    {
        if(!_map->layers().at(l).visible())
            continue ;
        for(int x = 1 ; x <= _map->width() ; x++)
        {
            for(int y = 1 ; y <= _map->height() ; y++)
            {
                const Tile* tile = _map->layers().at(l).tile(x,y) ;
                if(tile)
                {
                    QGraphicsPixmapItem* pmi = _renderer->itemAt(l, x, y) ;
                    if(pmi)
                    {
                        pmi->setOpacity(_map->layers().at(l).opacity());
                        _scene->addItem(pmi) ;
                    }
                }

            }
        }
    }
    if(_map->orientation() == ORTHOGONAL)
        setSceneRect(QRect(sceneRect().left(),  _scene->height() - (_map->tileHeight() * _map->width()) + sceneRect().top()  ,
                           sceneRect().width(), sceneRect().height() - (_scene->height() - (_map->tileHeight() * _map->width())))) ;
}

Map* MapViewer::map() const
{
    return _map ;
}

void MapViewer::addRobotImage(QGraphicsPixmapItem* robotImage)
{
    _scene->addItem(robotImage);
}

std::pair <int,int> MapViewer::getPosition(int x, int y)
{
    return _renderer->getPosition(x,y) ;
}

const std::map< const Tile*, const QPixmap >& MapViewer::ressources() const
{
	return _renderer->ressources() ;
}

const Tile* MapViewer::ressourceAt(int x, int y) const
{
	const Tile* res = 0 ;
	int layer = _map->layers().size() ;
	while(res == 0 && layer != 0)
	{
		res = _renderer->tileAt(layer - 1, x, y) ;
		layer -- ;
	}
	return res ;
}
