//
// Created by Tudor Deviza on 13.10.2021.
//

#ifndef LAB4_TPERSOANA_H
#define LAB4_TPERSOANA_H

#include <string>
#include <iostream>

using namespace std;

class TPersoana {
private:
    string idnp;
    string nume;
    string prenume;
    int varsta;
    string adresa;

public:
    TPersoana();

    void citesteDate();

    const string &getIdnp() const;

    void setIdnp(const string &idnp);

    const string &getNume() const;

    void setNume(const string &nume);

    const string &getPrenume() const;

    void setPrenume(const string &prenume);

    int getVarsta() const;

    void setVarsta(int varsta);

    const string &getAdresa() const;

    void setAdresa(const string &adresa);
};


#endif //LAB4_TPERSOANA_H
