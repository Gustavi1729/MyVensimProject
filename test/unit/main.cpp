#include "unit_tests.cpp"

int main()
{
    run_unit_test_system();
    run_unit_test_flow();
    run_unit_test_exponential_flow();
    run_unit_test_logistical_flow();
    run_unit_test_model();
    cout << "Passed all Unit Tests" << endl;
    return 0;
}