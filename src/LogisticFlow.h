#ifndef LogisticFlow_h
#define LogisticFlow_h

#include "Flow.h"

class LogisticFlow:public Flow
{
    public:
    float execute();
    LogisticFlow(SystemInt *, SystemInt *);
    LogisticFlow();
    ~LogisticFlow();
};

#endif