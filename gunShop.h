#include "engine.h"
#include <iostream>

class GunShop{

    public:
        GunShop();
        void setNumChambers();
        int getNumChambers;
        void setGunName();
        int getGunName();
        void menu();
        

    private:
        
        int num_chambers_;
        string gun_name;

};
