#include "camera.h"

CameraSensor::CameraSensor() : Sensor("Camera") {}

CameraSensor(const CameraSensor& orig) : Sensor("Camera") {}

~CameraSensor() {}

Object getObject(int X, int Y) const {
    // Not yet implemented
}
