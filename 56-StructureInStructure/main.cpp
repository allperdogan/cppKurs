#include <iostream>

using namespace std;

//KURUGIDA KOZMETÝK KASAP MANAV
struct Kategori{
    string isim;
    int urunAdeti;

};

struct Reyonlar{
    string isim;
    bool acikMi;
    int urunSayisi;
    Kategori* kategoriOzellikleri;
};

int main()
{
    Reyonlar r1;
    Reyonlar r2;
    r2.isim = "Kasap";
    r2.acikMi = true;
    r2.urunSayisi = 300;

    Kategori a = {"Tavuk",150};

    r2.kategoriOzellikleri = &a;

    cout<<r1.isim<<endl;
    r1 = r2;
    cout<<r1.isim<<endl;
    cout<<r2.kategoriOzellikleri->isim<< " " << r2.kategoriOzellikleri->urunAdeti;
    //cout<<r1.isim<<" "<<r1.acikMi<<" "<<r1.urunSayisi<<" "<<r1.kategoriOzellikleri.isim<<" "<<r1.kategoriOzellikleri.urunAdeti<<endl;
    return 0;
}
