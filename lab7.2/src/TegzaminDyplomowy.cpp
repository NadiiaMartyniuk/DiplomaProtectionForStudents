#include "TegzaminDyplomowy.h"
#include <iostream>
using namespace std;
#include "Tpromotor.h"
#include "Tstudent.h"
#include "TpracaDyplomowa.h"



TegzaminDyplomowy::TegzaminDyplomowy()
{
    for (int i = 0; i < liczbaStudentow; i++) {
        dyplom[i].student = new Tstudent();
        dyplom[i].student->wczytajStudenta();
        dyplom[i].promotor = new Tpromotor();
        dyplom[i].promotor->wczytajPromotora();
        dyplom[i].praca = new TpracaDyplomowa();
        dyplom[i].praca->wczytajDanePracy();
        dyplom[i].ocenaKoncowa = ((1.0/2.0)*(dyplom[i].student->fsrednia())) + ((1.0/4.0)*(dyplom[i].praca->focenaPracyPromotora())) + ((1.0/4.0)*(dyplom[i].student->focenaEgzaminu()));
    }
}


void TegzaminDyplomowy::wyswietl(){
    for (int i=0; i< liczbaStudentow; i++){
        dyplom[i].student->Tstudent::WyswietlStudenta();
        dyplom[i].promotor->Tpromotor::wyswietlPromotora();
        dyplom[i].praca->TpracaDyplomowa::wyswietlDanePracy();
        cout<<"OCENA KONCOWA "<<dyplom[i].ocenaKoncowa<<endl;
    }
}



TegzaminDyplomowy::~TegzaminDyplomowy()
{

}
