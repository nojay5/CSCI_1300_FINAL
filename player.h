#include "engine.h"
//#include "table.h"
#include <iostream>

using namespace std;


class Player : public Engine{
    
    public:
        Player();
            void setNumChambers();
            int GetNumChambers();


    private:
        int num_chambers_;
        int attributes[][3];
    
};