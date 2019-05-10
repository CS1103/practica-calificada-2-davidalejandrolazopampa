//
// Created by David Lazo on 10/05/2019.
//

#ifndef PC2_DEFENSE_H
#define PC2_DEFENSE_H

#include <string>
using namespace std;
class Defense {
protected:
        int Level;

public:
    Defense();
    //Poner en minuscula no me genera error
    int defense(){
        return Level;
    }
};
class Elude : public Defense{
    Elude(){
        this->Level=1;
    };
};
class Shield : public Defense{
    Shield(){
        this->Level=4;
    };
};
class Armor : public Defense{
    Armor(){
        this->Level=8;
    };
};
#endif //PC2_DEFENSE_H
