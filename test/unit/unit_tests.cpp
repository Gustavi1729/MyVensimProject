#include "unit_tests.h"
/// Tests all System functions
void run_unit_test_system()
{
    unit_System_constructor();
    unit_System_destructor();
    unit_System_getValue();
    unit_System_setValue();
    
}
/// Tests all Flow functions
void run_unit_test_flow()
{
unit_Flow_constructor();
unit_Flow_destructor();
unit_Flow_setTransferedValue();
unit_Flow_getTransferedValue();

unit_Flow_setOriginSystem();
unit_Flow_getOriginSystem();
unit_Flow_setDestinySystem();
unit_Flow_getDestinySystem();
}
/// Tests all ExponentialFlow functions
void run_unit_test_exponential_flow()
{
    unit_exponential_Flow_constructor();
    unit_exponential_Flow_destructor();
    unit_exponential_Flow_execute();
}
/// Tests all LogisticFlow functions
void run_unit_test_logistical_flow()
{
    unit_logistical_Flow_constructor();
    unit_logistical_Flow_destructor();
    unit_logistical_Flow_execute();
}
/// Tests all Model functions
void run_unit_test_model()
{
unit_Model_constructor();
unit_Model_destructor();
unit_Model_getSystems();
unit_Model_setSystems();
unit_Model_getFlows();
unit_Model_setFlows();
unit_Model_add();
unit_Model_printSystems();
unit_Model_calculateValues();
unit_Model_transferValues();
unit_Model_iterate();


}