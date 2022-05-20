#include "unit_model.h"
#include <math.h>
/// Tests the Model constructor function
void unit_Model_constructor(void)
{
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);
    FlowInt *f1 = new LogisticFlow(s1,s2);

    vector<SystemInt *> v1;
    vector<FlowInt *> v2;
    v1.push_back(s1);
    v1.push_back(s2);
    v2.push_back(f1);

    ModelInt *m = new Model(v1,v2);
    vector<SystemInt *>::iterator it = (*m).getSystems();
    assert((*it)->getAccumulator() == 10); 
    assert((*((*m).getFlows()))->getTransferedValue() == 0);
    
}
/// Tests the Model destructor function
void unit_Model_destructor(void){};

/// Tests the Model getSystems function
void unit_Model_getSystems(void)
{
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);
    FlowInt *f1 = new LogisticFlow(s1,s2);

    vector<SystemInt *> v1;
    vector<FlowInt *> v2;
    v1.push_back(s1);
    v1.push_back(s2);
    v2.push_back(f1);

    ModelInt *m = new Model(v1,v2);
    assert((*((*m).getSystems()))->getAccumulator() == 10);

}
/// Tests the Model setSystems function
void unit_Model_setSystems(void)
{
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);

    vector<SystemInt *> v1;

    v1.push_back(s1);
    v1.push_back(s2);

    ModelInt *m = new Model();
    (*m).setSystems(v1);
    assert((*((*m).getSystems()))->getAccumulator() == 10);
}
/// Tests the Model getFlows function
void unit_Model_getFlows(void)
{
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);
    FlowInt *f1 = new LogisticFlow(s1,s2);

    vector<SystemInt *> v1;
    vector<FlowInt *> v2;
    v1.push_back(s1);
    v1.push_back(s2);
    v2.push_back(f1);

    ModelInt *m = new Model(v1,v2);
    assert((*((*m).getFlows()))->getTransferedValue() == 0);

}
/// Tests the Model setFlows function
void unit_Model_setFlows(void)
{
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);
    FlowInt *f1 = new LogisticFlow(s1,s2);

    vector<FlowInt *> v2;
    v2.push_back(f1);

    ModelInt *m = new Model();
    (*m).setFlows(v2);
    assert((*((*m).getFlows()))->getTransferedValue() == 0);
}
/// Tests the Model add functions
void unit_Model_add(void)
{
    ModelInt *m = new Model();
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);
    (*m).add(s1);
    (*m).add(s2);
    vector<SystemInt *>::iterator i = (*m).getSystems();
    assert((*i)->getAccumulator() == 10);

    FlowInt *f = new LogisticFlow(s1,s2);
    (*m).add(f);

    vector<FlowInt *>::iterator i2 = (*m).getFlows();
    assert((*i2)->getTransferedValue() == 0);

    
}
void unit_Model_printSystems(void){}
/// Tests the Model calculateValues function
void unit_Model_calculateValues(void)
{
    ModelInt *m = new Model();
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);
    FlowInt *f = new LogisticFlow(s1,s2);
    (*m).add(s1);
    (*m).add(s2);
    (*m).add(f);
    (*m).calculateValues();

    assert( fabs((*((*m).getFlows()))->getTransferedValue() - 0.1) < 0.0001);

}
/// Tests the Model transferValues function
void unit_Model_transferValues(void)
{
    ModelInt *m = new Model();
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);
    Flow *f = new LogisticFlow(s1,s2);
    (*m).add(s1);
    (*m).add(s2);
    (*m).add(f);
    (*((*m).getFlows()))->setTransferedValue(10);
    (*m).transferValues();
    assert((*((*m).getFlows()))->getOriginSystem()->getAccumulator() == 0);
    assert((*((*m).getFlows()))->getDestinySystem()->getAccumulator() == 30);

}
/// Tests the Model iterate function
void unit_Model_iterate(void)
{
    ModelInt *m = new Model();
    SystemInt *s1 = new System(10);
    SystemInt *s2 = new System(20);
    Flow *f = new LogisticFlow(s1,s2);
    (*m).add(s1);
    (*m).add(s2);
    (*m).add(f);
    (*m).iterate(0,2);
    vector<SystemInt *>::iterator i = (*m).getSystems();
    
    assert(fabs((*i)->getAccumulator() - 9.801) < 0.0001);
    i++;
    assert(fabs((*i)->getAccumulator() - 20.199) < 0.0001);
}

