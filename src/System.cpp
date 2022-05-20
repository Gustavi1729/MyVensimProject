#include "System.h"

/// Empty System Constructor
System::System() : accumulator(0){};
/// System Destructor
System::~System(){};
/// Full System Constructor
System:: System(float accumulator) : accumulator(accumulator){};

/// Copy Constructor
System::System (const System& rhs) 
{
    accumulator = rhs.accumulator;
}

/// Attribution operator Overload
System& System::operator= (const System& rhs) 
{
    if (this==&rhs)  // Check Auto-reference
    return *this;

    accumulator = rhs.accumulator;
    return *this;
}
/// Getter for the system accumulator
///@returns the current value of the System

float System::getAccumulator ()
{
    return accumulator;
}

void System::setAccumulator(float x)
{
    accumulator = x;
}