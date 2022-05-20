#ifndef FlowInt_h
#define FlowInt_h
#include <iostream>
#include <vector>
#include "System.h"
using namespace std;

class FlowInt
{
    public:

        virtual ~FlowInt(){}
        virtual void setTransferedValue(float) = 0;
        virtual void setOriginSystem(SystemInt *) = 0;
        virtual void setDestinySystem(SystemInt *) = 0;
        virtual float getTransferedValue() = 0;
        virtual SystemInt * getOriginSystem() = 0;
        virtual SystemInt * getDestinySystem() = 0;
        virtual float execute() = 0;

    protected:

    private:
};

#endif