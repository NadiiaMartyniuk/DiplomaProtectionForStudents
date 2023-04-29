#ifndef TPRACADYPLOMOWA_H
#define TPRACADYPLOMOWA_H
#include "Tstudent.h"
#include "Tpromotor.h"
#include <iostream>
#include<string>
using namespace std;

class TpracaDyplomowa : public Tstudent, public Tpromotor
{
    public:
        TpracaDyplomowa();
        TpracaDyplomowa(string n, float o);
        virtual ~TpracaDyplomowa();
        void wczytajDanePracy();
        void wyswietlDanePracy();
        float focenaPracyPromotora();

    protected:
        string nazwaPracy;
        float ocenaPracyPromotora;


    private:
};

#endif // TPRACADYPLOMOWA_H
