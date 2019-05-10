//
// Created by David Lazo on 10/05/2019.
//

#ifndef PC2_ARENA_H
#define PC2_ARENA_H

#include <iostream>
#include <vector

#include <fstream>//entreda y salida
#include <sstream>//secuencia

#include "Fighter.h"
//Creo clase Fight parte todo
class Fight{
    Fighter* Primero; Fighter* Segundo; Fighter*Ganador;
    int point;
public:
    Fight(Fighter* Primero,Fighter* Segundo):Primero(Primero),Segundo(Segundo),Ganador(nullptr),point(0){};
    Fighter* GetPrimero(){ return Primero;};
    Fighter* GetSegundo(){ return Segundo;};
    void SetWinner(Fighter* winner1){Ganador=winner1;};
    void SetScore(int score1){point=score1;};
    ~Fight(){delete Primero;delete Segundo; delete Ganador;};
};
//Crei clase Arena Todo
class Arena {
vector<Fight>Fights;
public:
    void add_fight(Fight f);
    void run(Fighter A, Fighter B);
    vector<Fight> get_Fights(){ return Fights;};
    void load_fights(string filename);
    void run_all();
};



#endif //PC2_ARENA_H
