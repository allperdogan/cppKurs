#include <iostream>

using namespace std;

class Altin{
public:
    int ayar;
    int kullanilmaMiktari;
    void neKadarKullanildi(){
        cout << kullanilmaMiktari << endl;
    }

};

class Demir{
public:
    int kullanilmaMiktari;
    void neKadarKullanildi(){
        cout << kullanilmaMiktari << endl;
    }

};


class Motor: public Altin, public Demir{
public:
    int devirSayisi;
    int kullanilanAltin;
    int kullanilanDemir;

};

int main()
{
    Motor m1;
    m1.devirSayisi = 1600;
    m1.kullanilanAltin = 5;
    m1.kullanilanDemir = 1500;

    m1.Altin::kullanilmaMiktari = m1.kullanilanAltin;
    m1.Demir::kullanilmaMiktari = m1.kullanilanDemir;

    m1.Altin::neKadarKullanildi();
    m1.Demir::neKadarKullanildi();
    return 0;
}
