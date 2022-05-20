#ifndef unit_model_h
#define unit_model_h

#include "../../src/Model.cpp"
#include "unit_flow.h"
#include <cassert>

void unit_Model_constructor(void);
void unit_Model_destructor(void);

void unit_Model_getSystems(void);
void unit_Model_setSystems(void);
void unit_Model_getFlows(void);
void unit_Model_setFlows(void);
void unit_Model_add(void);
void unit_Model_printSystems(void);
void unit_Model_calculateValues(void);
void unit_Model_transferValues(void);
void unit_Model_iterate(void);



#endif