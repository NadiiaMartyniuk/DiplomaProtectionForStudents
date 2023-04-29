#include "TpracaDyplomowa.h"
#include <iostream>
#include<string>
using namespace std;
TpracaDyplomowa::TpracaDyplomowa()
{
   nazwaPracy="Nazwa Nieznana";
   ocenaPracyPromotora=5;
}

TpracaDyplomowa::TpracaDyplomowa(string n, float o){
    nazwaPracy=n;
    ocenaPracyPromotora=o;
}

void TpracaDyplomowa::wczytajDanePracy(){
   /* wczytajPromotora();
    wczytajStudenta();*/
    cout<<"Nazwa pracy ";
    cin>>nazwaPracy;
    cout<<"Ocena pracy promotora ";
    cin>>ocenaPracyPromotora;
    if ((ocenaPracyPromotora<2)||(ocenaPracyPromotora>5)){
        cout<<"Taka ocena nie istnieje "<<endl<<"Ocena zostala zamieniona na ocenê 2"<<endl;
        ocenaPracyPromotora=2;
    }
}

float TpracaDyplomowa::focenaPracyPromotora(){
    return ocenaPracyPromotora;
}


void TpracaDyplomowa::wyswietlDanePracy(){
    cout<<"Nazwa pracy: "<<nazwaPracy<<endl;
    /*WyswietlStudenta();
    wyswietlPromotora();*/
    cout<<"Ocena pracy promotora "<<ocenaPracyPromotora<<endl;
}

TpracaDyplomowa::~TpracaDyplomowa()
{
    //dtor
}
