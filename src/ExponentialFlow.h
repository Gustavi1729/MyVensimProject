#ifndef ExponentialFlow_h
#define ExponentialFlow_h

#include "Flow.h"

class ExponentialFlow:public Flow
{
    public:
    float execute();
    ExponentialFlow(SystemInt *, SystemInt *);
    ExponentialFlow();
    virtual ~ExponentialFlow();
};

#endif