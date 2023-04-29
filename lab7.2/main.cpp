#include <iostream>
#include "Tstudent.h"
#include "Tpromotor.h"
#include "TpracaDyplomowa.h"
#include "TegzaminDyplomowy.h"

using namespace std;

int main()
{
    Tstudent student;
    Tpromotor promotor;
    TpracaDyplomowa praca;
    TegzaminDyplomowy egzamin;
    //egzamin.wczytaj();
    cout<<endl;
    egzamin.wyswietl();
    return 0;
}
