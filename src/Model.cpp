#include "Model.h"

/// Empty Model Constructor
Model::Model(){}
/// Full Model Constructor
Model::Model(vector<SystemInt *> s, vector<FlowInt *> f) : Systems(s), Flows(f){} 
/// Destructor
///
/// Clears the vectors before ending
Model::~Model()
{
    Systems.clear();
    Flows.clear();
}
/// Copy Constructor
Model::Model (const Model& rhs)
{
    Systems = rhs.Systems;
    Flows = rhs.Flows;
}

/// Attribution operator Overload
Model& Model::operator= (const Model& rhs)
{
    if (this == &rhs) // Checks auto-reference
    return *this;

    Systems.clear(); 
    Flows.clear();

    Systems = rhs.Systems;
    Flows = rhs.Flows;

    return *this;
}

/// Setter for Systems Vector
/// @param x A vector of System Pointers
void Model::setSystems(vector<SystemInt *> x)
{
    Systems = x;
}
/// Setter for Flows Vector
/// @param x A vector of Flows
void Model::setFlows(vector<FlowInt *> x)
{
    Flows = x;
}

/// Getter for Systems Vector
///@return An iterator to the vector containing pointers to the Model's Systems
vector<SystemInt *>::iterator Model::getSystems()
{
    return Systems.begin();
}
/// Getter for Flows Vector
///@return An iterator to the vector containing the Model's Flows
vector<FlowInt *>::iterator Model::getFlows()
{
    return Flows.begin();
}

/// Prints all model Systems
///
/// Iterates through the Model's Systems, printing each respective accumulator
void Model::printSystems()
{
    vector<SystemInt *>::iterator i;

    for (i = Systems.begin();i != Systems.end();i++)
    {
        cout << (**i).getAccumulator() << endl;
    }
}
/// Adds a System to the Model
void Model::add(SystemInt *s)
{
    Systems.push_back(s);
}
/// Adds a Flow to the Model.
void Model::add(FlowInt *f)
{
    Flows.push_back(f);
}

/// Calculates and transfers values between systems.
///
/// For every flow, executes it, subtracts the value from the execution from the origin and adds to the destiny.
void Model::calculateValues()
{
    vector<FlowInt *>::iterator i;

    for (i = Flows.begin(); i != Flows.end();i++)
    {
        (*i)->setTransferedValue((*i)->execute());

    }

}
/// Transfers the values calculated by the calculateValues() function
void Model::transferValues()
{
    vector<FlowInt *>::iterator i;

    for (i = Flows.begin(); i != Flows.end();i++)
    {
        (*i)->getOriginSystem()->setAccumulator((*i)->getOriginSystem()->getAccumulator() - (*i)->getTransferedValue());
        (*i)->getDestinySystem()->setAccumulator((*i)->getDestinySystem()->getAccumulator() + (*i)->getTransferedValue() );
    }

}

/// Iterates the Model step by step.
///
/// Iterates flow transfer execution for every step between initialT and finalT.
///@param initialT Initial step of the simulation
///@param finalT Final step of the simulation
void Model::iterate(int initialT, int finalT)
{

    for (int c=initialT;c<finalT;c++)
    {
        
        calculateValues();
        transferValues();
    }
}