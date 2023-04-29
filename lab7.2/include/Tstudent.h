#ifndef TSTUDENT_H
#define TSTUDENT_H
#include <iostream>
#include<string>
using namespace std;

class Tstudent
{
    public:
        Tstudent();
        Tstudent(string i, string n, float s, float o);
        virtual ~Tstudent();
        void wczytajStudenta();
        void WyswietlStudenta();
        float fsrednia();
        float focenaEgzaminu();

    protected:
        string imieStudenta;
        string nazwiskoStudenta;
        float srednia;
        float ocenaEgzaminu;

    private:
};

#endif // TSTUDENT_H
