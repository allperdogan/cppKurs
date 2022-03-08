#include <iostream>

using namespace std;

class Araba{
public:
    string isim;
    int beygirGucu;

    void isimSoyle(){
        cout << isim << endl;
    }
    void beygirGucuSoyle(){
        cout << beygirGucu << endl;
    }
};

class Bmw: public Araba{
public:
    Bmw(){
        isim = "BMW";
        beygirGucu = 1000;
    }
};

class Mercedes: public Araba{
public:
    Mercedes(){
        isim = "Mercedes";
        beygirGucu = 1200;
    }
};

class Ferrari: public Araba{
public:
    Ferrari(){
        isim = "Ferrari";
        beygirGucu = 1500;
    }

};
int main()
{
    Bmw b1;
    Mercedes m1;
    Ferrari f1;
    b1.isimSoyle();
    b1.beygirGucuSoyle();
    m1.isimSoyle();
    m1.beygirGucuSoyle();
    f1.isimSoyle();
    f1.beygirGucuSoyle();
    return 0;
}
