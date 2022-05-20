#ifndef Model_h
#define Model_h

#include "ModelInt.h"

class Model:public ModelInt
{
    public:
    // CONSTRUTORES E DESTRUTORES
        Model();
        virtual ~Model();
        Model(vector<SystemInt *>, vector<FlowInt *>);

    // MÉTODOS
        void setSystems(vector<SystemInt *>);
        void setFlows(vector<FlowInt *>);
        vector<SystemInt *>::iterator getSystems();
        vector<FlowInt *>::iterator getFlows();
        void add(SystemInt *);
        void add(FlowInt *);
        void printSystems();
        void calculateValues();
        void transferValues();
        void iterate(int, int);

    // CÓPIA E ATRIBUIÇÃO    
        Model (const Model& rhs);
        Model& operator= (const Model& rhs);

    protected:

    private:
        vector<SystemInt *> Systems;
        vector<FlowInt *> Flows;
};


#endif