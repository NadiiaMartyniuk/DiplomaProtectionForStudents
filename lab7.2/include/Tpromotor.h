#ifndef TPROMOTOR_H
#define TPROMOTOR_H
#include <iostream>
#include<string>
using namespace std;

class Tpromotor
{
    public:
        Tpromotor();
        Tpromotor(string i, string n);
        virtual ~Tpromotor();
        void wczytajPromotora();
        void wyswietlPromotora();

    protected:
        string imiePromotora;
        string nazwiskoPromotora;


    private:
};

#endif // TPROMOTOR_H
