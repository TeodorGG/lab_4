#include <iostream>
#include "TManager.h"

int main() {
    TPersoana persoana;
    persoana.citesteDate(); // idnp, nume, prenume, varsta, adresa
    TManager manager(persoana);// copie datele din ob. persoana
    manager.afiseazaDatePersonale();
    return 0;
}
