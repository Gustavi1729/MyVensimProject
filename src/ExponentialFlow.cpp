#include "ExponentialFlow.h"

/// Empty ExponentialFlow Constructor
ExponentialFlow::ExponentialFlow(){}
/// ExponentialFlow Destructor
ExponentialFlow::~ExponentialFlow(){}
/// Full ExponentialFlow Constructor
ExponentialFlow::ExponentialFlow(SystemInt *sOrigin, SystemInt *sDestiny)
{
    setOriginSystem(sOrigin);
    setDestinySystem(sDestiny);
    setTransferedValue(0);
};

/// Execute function
///
/// The function to be performed every step. Can be overwritten by creating child class deriving from this
float ExponentialFlow::execute(){

return ((0.01)*getOriginSystem()->getAccumulator());

};
