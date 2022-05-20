#ifndef SystemInt_h
#define SystemInt_h

#include <iostream>
#include <vector>
using namespace std;

class SystemInt
{
    public:
        virtual ~SystemInt(){};
        virtual void setAccumulator(float) = 0;
        virtual float getAccumulator() = 0;

    protected:

    private:
        
};

#endif