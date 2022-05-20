#include "unit_flow.h"

void unit_Flow_constructor(){

SystemInt *s1 = new System(10);
SystemInt *s2 = new System(20);

FlowInt *f  = new LogisticFlow(s1,s2);
FlowInt *f2 = new ExponentialFlow(s1,s2);

assert((*f).getOriginSystem()->getAccumulator() == 10);
assert((*f).getDestinySystem()->getAccumulator() == 20);

assert((*f2).getOriginSystem()->getAccumulator() == 10);
assert((*f2).getDestinySystem()->getAccumulator() == 20);

}
void unit_Flow_destructor(void){}
void unit_Flow_setTransferedValue(void)
{
    FlowInt *f  = new LogisticFlow();
    (*f).setTransferedValue(10);
    assert((*f).getTransferedValue() == 10);
    
}
void unit_Flow_getTransferedValue(void)
{
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);

    FlowInt *f  = new LogisticFlow(s1,s2);
    assert((*f).getTransferedValue() == 0);
}
void unit_Flow_setOriginSystem(void)
{
    System *s = new System(10);
    FlowInt *f  = new LogisticFlow();
    (*f).setOriginSystem(s);
    assert((*f).getOriginSystem()->getAccumulator());
}
void unit_Flow_getOriginSystem(void)
{
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);

    FlowInt *f  = new LogisticFlow(s1,s2);
    assert((*f).getOriginSystem()->getAccumulator() == 10);
};
void unit_Flow_setDestinySystem(void)
{
    System *s = new System(10);
    FlowInt *f  = new LogisticFlow();
    (*f).setDestinySystem(s);
    assert((*f).getDestinySystem()->getAccumulator());
}
void unit_Flow_getDestinySystem(void)
{
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);

    FlowInt *f  = new LogisticFlow(s1,s2);
    assert((*f).getDestinySystem()->getAccumulator() == 20);
}