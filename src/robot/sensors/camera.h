#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
#include "sensor.h"

class CameraSensor : public Sensor {
public:
    CameraSensor();
    CameraSensor(const CameraSensor& orig);
    ~CameraSensor();

    Object getObject(int X, int Y) const;
};

#endif // CAMERA_H
