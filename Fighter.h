//
// Created by David Lazo on 10/05/2019.
//

#ifndef PC2_FIGHTER_H
#define PC2_FIGHTER_H

#include <iostream>
#include <numeric>
#include "vector"
#include "Attack.h"
#include "Defense.h"

class Fighter {
    vector<int> DefensaDavid;
    vector<int> AtacaqueDavid;
public:
    int Attack();
    int Defense();
    Fighter(vector<int> DefensaDavid,vector<int> AtacaqueDavid):DefensaDavid(DefensaDavid),AtacaqueDavid(AtacaqueDavid){};
};

class BruceLee : public Fighter{};
class ChuckNorris : public Fighter{};
class JasonStatham : public Fighter{};
#endif //PC2_FIGHTER_H
