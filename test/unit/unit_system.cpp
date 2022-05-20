#include "unit_system.h"

/// Tests the System constructor function
void unit_System_constructor(void)
{
    SystemInt *s = new System();
    assert((*s).getAccumulator() == 0);
    SystemInt *s2 = new System(10);
    assert((*s2).getAccumulator() == 10);
}
/// Tests the System destructor function
void unit_System_destructor(void){}
/// Tests the System setValue function
void unit_System_setValue(void)
{
    SystemInt *s = new System();
    (*s).setAccumulator(10);
    assert((*s).getAccumulator() == 10);
};
/// Tests the System getValue function
void unit_System_getValue(void)
{
    SystemInt *s = new System(10);
    assert((*s).getAccumulator() == 10);
};