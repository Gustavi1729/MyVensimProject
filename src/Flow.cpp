#include "Flow.h"

Flow::Flow(){}
Flow::~Flow(){}
Flow::Flow(SystemInt *sOrigin, SystemInt *sDestiny): originSystem(sOrigin), destinySystem(sDestiny), transferedValue(0) {};

/// Copy constructor
Flow::Flow(const Flow& rhs) 
{
    originSystem = rhs.originSystem;
    destinySystem = rhs.destinySystem;
}

/// Attribution operator overload
Flow& Flow::operator= (const Flow& rhs) 
{
    if (this == &rhs) // Auto-Reference Check
    return *this;

    originSystem = rhs.originSystem;
    destinySystem = rhs.destinySystem;

    return *this;
}

/// Sets the value to be transfered
/// @param  x value to be set
void Flow::setTransferedValue(float x)
{
    transferedValue = x;
}
/// Sets the origin system for the flow
/// @param *x pointer to the system
void Flow::setOriginSystem(SystemInt *x)
{
    originSystem = x;
}
/// Sets the destiny system for the flow
/// @param *x pointer to the system
void Flow::setDestinySystem(SystemInt *x)
{
    destinySystem = x;
}



/// Gets the value to be transfered
/// @return value to be transfered 
float Flow::getTransferedValue()
{
    return transferedValue;
}
/// Gets a pointer to the origin System
/// @return a pointer to the origin System
SystemInt * Flow::getOriginSystem()
{
    return originSystem;
}
/// Gets a pointer to the destiny System
/// @return a pointer to the destiny System
SystemInt * Flow::getDestinySystem()
{
    return destinySystem;
}




