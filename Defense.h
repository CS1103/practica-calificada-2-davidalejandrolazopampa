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
        string Identificador;
public:
    Defense(int);
};
class Elude : public Defense{
public:
    Elude(string,int);
};
class Shield : public Defense{
public:
    string Identificador;
};
class Armor : public Defense{
public:
    string Identificador;
};
#endif //PC2_DEFENSE_H
