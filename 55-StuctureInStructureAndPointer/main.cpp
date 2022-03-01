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
    Kategori kategoriOzellikleri;
};

void stoktanDusur(Reyonlar* reyon, int kacUrunSatildi) {
    reyon->kategoriOzellikleri.urunAdeti -= kacUrunSatildi;
    reyon->urunSayisi -= kacUrunSatildi;
}

int main()
{
    Reyonlar r1 = {"Kuru Gida",1,200,{"Makarna",130}};

    cout<<r1.isim<<" "<<r1.acikMi<<" "<<r1.urunSayisi<<" "<<r1.kategoriOzellikleri.isim<<" "<<r1.kategoriOzellikleri.urunAdeti<<endl;
    stoktanDusur(&r1,30);
    cout<<r1.isim<<" "<<r1.acikMi<<" "<<r1.urunSayisi<<" "<<r1.kategoriOzellikleri.isim<<" "<<r1.kategoriOzellikleri.urunAdeti<<endl;
    return 0;
}
