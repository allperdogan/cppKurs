#include <iostream>

using namespace std;

class Toplama{
private:
    int sayi1,sayi2;
public:
    Toplama(int s1, int s2):sayi1(s1),sayi2(s2){}
    Toplama(const Toplama & kopya):sayi1(kopya.sayi1),sayi2(kopya.sayi2){}

    void sonuc (){
        cout << "Sonuc= " << sayi1+sayi2 << endl;
    }
};

int main()
{
    Toplama t1(15,22);
    Toplama t2(t1);

    t1.sonuc();
    t2.sonuc();

    return 0;
}
