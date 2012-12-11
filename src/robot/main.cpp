/* ***************************************************
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include <cstdlib>
#include <iostream>
#include "robot.h"
#include "wheels.h"
#include "actuator.h"
#include "rocketlauncher.h"
#include "chains.h"
using namespace std;

int main() {

    Robot robot1("\nWall-E\n");
    cout << robot1.getName() << endl;

    Sensor * mySensor = new Sensor();
    Sensor * mySensor2 = new Sensor();
    Sensor * mySensor3 = new Sensor();

    robot1.addSensor(mySensor);
    robot1.addSensor(mySensor2);
    //robot1.addSensor(mySensor3);

    RocketLauncher * rocketlauncher = new RocketLauncher();
    RocketLauncher * rocketlauncher1 = new RocketLauncher();
    RocketLauncher * rocketlauncher2 = new RocketLauncher();

    robot1.addActuator(rocketlauncher);
    //robot1.addActuator(rocketlauncher1);
    //robot1.addActuator(rocketlauncher2);

    int string1 = robot1.actuatorsCount();
    int string2 = robot1.sensorsCount();
    cout << "Nombre d'actuateurs " << string1 <<endl ;
    cout << "Nombre de senseurs " << string2 <<endl ;

    cout << robot1.getActuators() << endl;
    cout << robot1.ActuatorsToString() << endl;
    cout << robot1.getSensors() << endl;

    MovementActuator * chains = new Chains();
    Wheels * wheels = new Wheels();

    return 0;
}

