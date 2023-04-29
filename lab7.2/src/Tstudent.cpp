#include "Tstudent.h"
#include <iostream>
#include<string>
using namespace std;
Tstudent::Tstudent()
{
    imieStudenta="Nadiia";
    nazwiskoStudenta="Martyniuk";
    srednia=4.66;
    ocenaEgzaminu=5;

}

Tstudent::Tstudent(string i, string n, float s, float o){
    imieStudenta=i;
    nazwiskoStudenta=n;
    srednia=s;
    ocenaEgzaminu=o;
}

void Tstudent::wczytajStudenta(){
    cout<<"Podaj imie studenta ";
    cin>>imieStudenta;
    cout<<"Podaj nazwisko studenta ";
    cin>>nazwiskoStudenta;
    cout<<"Srednia ocena ";
    cin>>srednia;
    if ((srednia<2)||(srednia>5)){
        cout<<"Taka ocena nie istnieje "<<endl<<"Ocena zostala zamieniona na ocenê 2"<<endl;
        srednia=2;
    }
    cout<<"Ocena z egzaminu ";
    cin>>ocenaEgzaminu;
    if ((ocenaEgzaminu<2)||(ocenaEgzaminu>5)){
        cout<<"Taka ocena nie istnieje "<<endl<<"Ocena zostala zamieniona na ocenê 2"<<endl;
        ocenaEgzaminu=2;
    }

}

float Tstudent::fsrednia(){
    return srednia;
}

float Tstudent::focenaEgzaminu(){
    return ocenaEgzaminu;
}

void Tstudent::WyswietlStudenta(){
    cout<<"Student: "<<nazwiskoStudenta<<" "<<imieStudenta<<endl;
    cout<<"Srednia ocena "<<srednia<<endl;
    cout<<"Ocena z egzaminu "<<ocenaEgzaminu<<endl;
}

Tstudent::~Tstudent()
{
    //dtor
}
