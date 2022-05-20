#ifndef System_h
#define System_h
#include "SystemInt.h"

class System:public SystemInt
{
    public:
        System();
        System(float);
        virtual ~System();

        void setAccumulator(float);
        float getAccumulator();

        System (const System& rhs);
        System& operator= (const System& rhs);
    protected:

    private:

    float accumulator;
};

#endif