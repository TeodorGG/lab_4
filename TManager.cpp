//
// Created by Tudor Deviza on 13.10.2021.
//

#include "TManager.h"
#include <iostream>
using namespace std;

TManager::TManager(TPersoana t) {
    this->setIdnp(t.getIdnp());
    this->setNume(t.getNume());
    this->setPrenume(t.getPrenume());
    this->setVarsta(t.getVarsta());
    this->setAdresa(t.getAdresa());
}

void TManager::afiseazaDatePersonale() {
    cout << "\n\nManager :\n" <<
        this->getNume() << " " <<
        this->getPrenume() << " " <<
        this->getIdnp() << " " <<
        this->getVarsta() << " " <<
        this->getAdresa() << endl;
}
