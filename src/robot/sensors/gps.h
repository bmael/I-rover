#ifndef GPS_H
#define GPS_H

#include <iostream>
#include "sensor.h"


class GpsSensor : public Sensor {
    public:
        /**
         * Default constructor
         */
        GpsSensor();
        
        /**
         * Copy constructor
         * \param orig Copy orig into a new Object
         */
        GpsSensor(const GpsSensor& orig);

        /**
         *
         *
         */
        GpsSensor(const std::string& name);
        
        /**
         * Destructor
         */
        ~GpsSensor();
        
        /**
         * Getter for coordonnees
         *
         * \return A std::pair of two integers corresponding to the current robot location on the map
         */
        std::pair<int,int> getCoordonnees() const;

    private:
        std::pair<int,int> coordonnees;
        
};

#endif
