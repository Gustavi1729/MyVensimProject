#ifndef ModelInt_h
#define ModelInt_h

#include "Flow.h"
#include "System.h"
#include <iostream>
#include <vector>

class ModelInt
{
    public:
        virtual ~ModelInt(){};

        virtual void setSystems(vector<SystemInt *>) = 0;
        virtual void setFlows(vector<FlowInt *>) = 0;
        virtual vector<SystemInt *>::iterator getSystems() = 0;
        virtual vector<FlowInt *>::iterator getFlows() = 0;
        virtual void add(SystemInt *) = 0;
        virtual void add(FlowInt *) = 0;
        virtual void printSystems() = 0;
        virtual void calculateValues() = 0;
        virtual void transferValues() = 0;
        virtual void iterate(int, int) = 0;
    protected:

    private:

};


#endif