#include <iostream>

using namespace std;

class Sayi{
public:
    int deger;
public:
    Sayi(){}
    Sayi(int s1):deger(s1){}

    Sayi operator+(Sayi s2){
    Sayi toplam;
    toplam.deger = deger + s2.deger;
    return(toplam);
    }
    Sayi operator-(Sayi s2){
    Sayi toplam;
    toplam.deger = deger - s2.deger;
    return(toplam);
    }
};

int main()
{
    Sayi sayi1(10);
    Sayi sayi2(33);
    Sayi sayi3;
    Sayi sayi4;

    sayi3 = sayi1 + sayi2;

    cout << sayi3.deger << endl;

    sayi4 = sayi1 - sayi2;

    cout << sayi4.deger << endl;

    return 0;
}
