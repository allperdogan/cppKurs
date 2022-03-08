#include <iostream>

using namespace std;

class Hayvan{
public:
    string ses = "Her hayvanin bir sesi vardir";
    void sesCikar(){
        cout << ses << endl;
    }

};

class Kedi: public Hayvan{
public:
    Kedi() {
        ses = "Miyav";
    }

};

class Kopek: public Hayvan{
public:
    Kopek() {
        ses = "Hav Hav";
    }
};

class Kus: public Hayvan{
public:
    Kus() {
        ses = "Cik cik";
    }

};

int main()
{
    Kedi kedi;
    Kopek kopek;
    Kus kus;
    kedi.sesCikar();
    kopek.sesCikar();
    kus.sesCikar();
    return 0;
}
