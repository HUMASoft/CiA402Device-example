#include <iostream>


#include "TestPort.h"
#include "CanBusPort.h"
#include "Cia402device.h"
#include "CiA301CommPort.h"

using namespace std;

int main(int argc, char *argv[])
{
 CanBusPort port;
 CiA402Device j1(6,port.getPortFileDescriptor());
// j1.OperationMode(od::positionmode);
// sleep(1);
// j1.FlushBuffer();
 j1.SwitchOn();









    return 0;
}
