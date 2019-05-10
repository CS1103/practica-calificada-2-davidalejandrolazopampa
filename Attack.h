//
// Created by David Lazo on 10/05/2019.
//

#ifndef PC2_ATTACK_H
#define PC2_ATTACK_H

#include <string>
using namespace std;
class Attack {
protected:
    int Power;
public:
    Attack();
};
class Punch : public Attack{
    Punch(){this->Power=1;};
};
class Saber : public Attack{
protected:
    Saber(){this->Power=1;};
};
class Fiream : public Attack{
protected:
    Fiream(){this->Power=1;};
};

#endif //PC2_ATTACK_H
