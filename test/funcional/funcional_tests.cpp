#include "funcional_tests.h"
#include "../../src/Model.h"
#include "../../src/System.h"
#include "../../src/ExponentialFlow.h"
#include "../../src/LogisticFlow.h"
#include <math.h>
#include <cassert>
/// Exponential Functional Test
///
/// Creates 2 systems, one with 10 and 0, and performs 5 iterations on them, removing 1% from the origin and adding it to the destiny
void exponencialFuncionalTest()
{
    ModelInt *m = new Model();
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(0);
    FlowInt *f1 = new ExponentialFlow(s1,s2);
    
    (*m).add(s1);
    (*m).add(s2);
    (*m).add(f1);

    (*m).iterate(0,5);

    assert(fabs((*s1).getAccumulator() - 9.5099) < 0.0001);
    assert(fabs((*s2).getAccumulator() - 0.4900) < 0.0001);

}
/// Logistical Functional Test
///
/// Creates 2 systems, one with 10 and 0, and performs 5 iterations on them, removing 1% from the origin and adding it to the destiny
void logisticalFuncionalTest()
{

    ModelInt *m = new Model();
    System *s1 = new System(10);
    System *s2 = new System(0);
    Flow *f1 = new LogisticFlow(s1,s2);
    
    (*m).add(s1);
    (*m).add(s2);
    (*m).add(f1);

    (*m).iterate(0,5);

    assert(fabs((*s1).getAccumulator() - 9.5099) < 0.0001);
    assert(fabs((*s2).getAccumulator() - 0.4900) < 0.0001);

}
/// Complex Functional Test
///
/// Creates 5 systems, one with 10 and 0, and creates 6 flows between them, iterating 2 times the function that removes 1% from the origin and adds to the destiny
void complexFuncionalTest()
{
    ModelInt *m = new Model();
    System *s1 = new System(100);
    System *s2 = new System(0);
    System *s3 = new System(100);
    System *s4 = new System(0);
    System *s5 = new System(0);

    Flow *f1 = new ExponentialFlow(s4,s1);
    Flow *f2 = new ExponentialFlow(s1,s3);
    Flow *f3 = new ExponentialFlow(s3,s4);
    Flow *f4 = new ExponentialFlow(s1,s2);
    Flow *f5 = new ExponentialFlow(s2,s3);
    Flow *f6 = new ExponentialFlow(s2,s5);

    (*m).add(s1);
    (*m).add(s2);
    (*m).add(s3);
    (*m).add(s4);
    (*m).add(s5);
    (*m).add(f1);
    (*m).add(f2);
    (*m).add(f3);
    (*m).add(f4);
    (*m).add(f5);
    (*m).add(f6);

    (*m).iterate(0,100);
    
    assert(fabs((*s1).getAccumulator() - 31.8513 ) < 0.0001);
    assert(fabs((*s2).getAccumulator() - 18.4003) < 0.0001);
    assert(fabs((*s3).getAccumulator() - 77.1143) < 0.0001);
    assert(fabs((*s4).getAccumulator() - 56.1728) < 0.0001);
    assert(fabs((*s5).getAccumulator() - 16.4612) < 0.0001);

}