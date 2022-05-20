#ifndef Flow_h
#define Flow_h

#include "FlowInt.h"
class Flow:public FlowInt
{
    public:

        Flow();
        Flow(SystemInt *, SystemInt *);
        virtual ~Flow();


        void setTransferedValue(float);
        void setOriginSystem(SystemInt *);
        void setDestinySystem(SystemInt *);
        float getTransferedValue();
        SystemInt * getOriginSystem();
        SystemInt * getDestinySystem();
        virtual float execute() = 0;


        Flow (const Flow& rhs);
        Flow& operator= (const Flow& rhs);

    protected:

    private:
        float transferedValue;
        float limit;
        float function;
        SystemInt *originSystem;
        SystemInt *destinySystem;
};

#endif