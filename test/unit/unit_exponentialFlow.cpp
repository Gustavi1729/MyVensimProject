#include "unit_exponentialFlow.h"

/// 
void unit_exponential_Flow_constructor(void)
{
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);

FlowInt *f  = new ExponentialFlow(s1,s2);

assert((*f).getOriginSystem()->getAccumulator() == 10);
assert((*f).getDestinySystem()->getAccumulator() == 20);

}
void unit_exponential_Flow_destructor(void){};
void unit_exponential_Flow_execute(void)
{
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);

    FlowInt *f  = new ExponentialFlow(s1,s2);

    assert (fabs((*f).execute() - 0.1) < 0.001);
}