//
// Created by Tudor Deviza on 13.10.2021.
//

#ifndef LAB4_TMANAGER_H
#define LAB4_TMANAGER_H


#include "TPersoana.h"
using namespace std;

class TManager  : public TPersoana{
public :
    TManager(TPersoana);
    void afiseazaDatePersonale();
};


#endif //LAB4_TMANAGER_H
