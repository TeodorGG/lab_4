//
// Created by Tudor Deviza on 13.10.2021.
//

#include "TPersoana.h"
using namespace std;

TPersoana::TPersoana() {}

const string &TPersoana::getIdnp() const {
    return idnp;
}

void TPersoana::setIdnp(const string &idnp) {
    TPersoana::idnp = idnp;
}

const string &TPersoana::getNume() const {
    return nume;
}

void TPersoana::setNume(const string &nume) {
    TPersoana::nume = nume;
}

const string &TPersoana::getPrenume() const {
    return prenume;
}

void TPersoana::setPrenume(const string &prenume) {
    TPersoana::prenume = prenume;
}

int TPersoana::getVarsta() const {
    return varsta;
}

void TPersoana::setVarsta(int varsta) {
    TPersoana::varsta = varsta;
}

const string &TPersoana::getAdresa() const {
    return adresa;
}

void TPersoana::setAdresa(const string &adresa) {
    TPersoana::adresa = adresa;
}

void TPersoana::citesteDate() {
    cout << "Citeste date : \n";
    cout << "IDNP: ";
    cin >> this->idnp;
    cout << "Nume : ";
    cin >> this->nume;
    cout << "Prenume : ";
    cin >> this->prenume;
    cout << "Varsta : ";
    cin >> this->varsta;
    cout << "Adresa : ";
    cin >> this->adresa;

}
