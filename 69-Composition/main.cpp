#include <iostream>

using namespace std;

class Tarih{
private:
    int gun;
    int ay;
    int yil;
public:
    Tarih(int g, int a, int y){
        gun=g;
        ay=a;
        yil=y;
    }
    void tarihGoster(){
        cout << gun << "/" << ay << "/" << yil << endl;
    }
};

class Insan{
private:
    string isim;
    Tarih dogumTarihi;
public:
    Insan(string i, Tarih dt):isim(i),dogumTarihi(dt){}
    void bilgileriniGoster(){
        cout << isim << " isimli kisinin dogum tarihi ";
        dogumTarihi.tarihGoster();
    }

};

int main()
{
    Tarih dogumTarihi(17,06,1999);
    //dogumTarihi.tarihGoster();
    Insan i1("Tugba", dogumTarihi);
    i1.bilgileriniGoster();

    return 0;
}
