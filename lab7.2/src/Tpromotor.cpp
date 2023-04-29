#include "Tpromotor.h"
#include <iostream>
#include<string>
using namespace std;
Tpromotor::Tpromotor()
{
    imiePromotora="Maria";
    nazwiskoPromotora="Mazur";
}

Tpromotor::Tpromotor(string i, string n){
    imiePromotora=i;
    nazwiskoPromotora=n;
}

void Tpromotor::wczytajPromotora(){
    cout<<"Podaj imie promotora ";
    cin>>imiePromotora;
    cout<<"Podaj nazwisko promotora ";
    cin>>nazwiskoPromotora;
}

void Tpromotor::wyswietlPromotora(){
    cout<<"Promotor: "<<nazwiskoPromotora<<" "<<imiePromotora<<endl;
}

Tpromotor::~Tpromotor()
{
    //dtor
}
