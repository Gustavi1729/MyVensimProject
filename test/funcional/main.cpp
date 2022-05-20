#include "funcional_tests.h"
#include "../../src/Flow.cpp"
#include "../../src/Model.cpp"
#include "../../src/System.cpp"
#include "../../src/LogisticFlow.cpp"
#include "../../src/ExponentialFlow.cpp"
/// Functional Tests
///
/// Executes the 3 functional tests and if their assertions don't trigger, prints a confirmation
int main()
{
exponencialFuncionalTest();
logisticalFuncionalTest();
complexFuncionalTest();
cout << "Success in all tests" << endl;
return true;
}