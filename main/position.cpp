

#include <iostream>
#include <math.h>

#include "TestPort.h"
#include "CanBusPort.h"
#include "Cia402device.h"
#include "CiA301CommPort.h"


using namespace std;

int main(int argc, char *argv[])
{

    ///prepare ports
    /// Open a port address with a PortBase Object
    //TestPort port;
    CanBusPort port;
    uint16_t status;





    ///Then instantiate a 301 communications object for that address
    //CiA301CommPort coms(port.getPortFileDescriptor());

    ///Create a joint and give a canopen id, and a 301port (by constructor)
    CiA402Device j1(6,port.getPortFileDescriptor());

    ///Check the status of the device
//    j1.PrintStatus();
//    //j1.SwitchOn();
//   cout<<j1.GetPosition()<<endl;
//   j1.FlushBuffer();
//   //cout<<posicion<<endl;
  j1.SetupPositionMode(100000,100000);
  sleep(2);
   j1.SetPosition(5000);
//   j1.FlushBuffer();
   sleep(2);
   j1.PrintStatus();
    cout<<j1.GetPosition()<<endl;





    return 0;

}
