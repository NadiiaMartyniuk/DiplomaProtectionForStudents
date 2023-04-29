#ifndef TEGZAMINDYPLOMOWY_H
#define TEGZAMINDYPLOMOWY_H
#include <iostream>
#include "Tpromotor.h"
#include "Tstudent.h"
#include "TpracaDyplomowa.h"

using namespace std;

const int liczbaStudentow=1;

struct DyplomnaRobota{
    Tpromotor *promotor;
    Tstudent *student;
    TpracaDyplomowa *praca;
    float ocenaKoncowa;
};

class TegzaminDyplomowy:  public TpracaDyplomowa, public Tstudent, public Tpromotor
{
    public:
        TegzaminDyplomowy();
        virtual ~TegzaminDyplomowy();
        //void wczytaj();
        void wyswietl();
        void ObliczeniaOcenaKoncowa();

    protected:
        DyplomnaRobota dyplom[liczbaStudentow];

    private:
};

#endif // TEGZAMINDYPLOMOWY_H
