#include "LogisticFlow.h"
/// Empty LogisticFlow Constructor
LogisticFlow::LogisticFlow(){}
/// LogisticFlow Destructor
LogisticFlow::~LogisticFlow(){}
/// Full LogisticFlow Constructor
LogisticFlow::LogisticFlow(SystemInt *sOrigin, SystemInt *sDestiny)
{
    setOriginSystem(sOrigin);
    setDestinySystem(sDestiny);
    setTransferedValue(0);
};

/// Execute function
///
/// The function to be performed every step. Can be overwritten by creating a child class deriving from this
float LogisticFlow::execute(){

return ((0.01)*getOriginSystem()->getAccumulator());

};
