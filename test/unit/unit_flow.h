#ifndef unit_flow_h
#define unit_flow_h

#include "../../src/LogisticFlow.cpp"
#include "../../src/ExponentialFlow.cpp"
#include "../../src/Flow.cpp"
#include <cassert>

void unit_Flow_constructor(void);
void unit_Flow_destructor(void);
void unit_Flow_setTransferedValue(void);
void unit_Flow_getTransferedValue(void);

void unit_Flow_setOriginSystem(void);
void unit_Flow_getOriginSystem(void);
void unit_Flow_setDestinySystem(void);
void unit_Flow_getDestinySystem(void);


#endif