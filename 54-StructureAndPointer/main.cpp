#include <iostream>

using namespace std;

struct Ogrenci{
    int numara;
    string isim;
};

void ismiDegistir(Ogrenci* ismiDegistirilcekOgrenci, string yeniIsim) {

    ismiDegistirilcekOgrenci->isim = yeniIsim;
}

void ogrenciOlustur(Ogrenci* yeniOgrenci, int numara, string isim) {

    yeniOgrenci->isim = isim;
    yeniOgrenci->numara = numara;

}

void ogrenciSil(Ogrenci* ogr){

    ogr->isim="Boyle bir ogrenci yok";
    ogr->numara=0;
}

int main()
{

    Ogrenci ogr1;
    Ogrenci ogr2;

    ogr1.isim = "ADO";
    ogr1.numara = 170504013;

    ogrenciOlustur(&ogr2, 152, "Mahmut");

    cout << "eski isim: " <<ogr1.isim << endl;
    ismiDegistir(&ogr1,"Ali");
    cout<< "yeni isim: " <<ogr1.isim << endl;
    cout << "2. ogrenci: " << ogr2.isim << " " << ogr2.numara << endl;
    ogrenciSil(&ogr2);
    cout << "2. ogrenci: " << ogr2.isim << " " << ogr2.numara << endl;
    return 0;
}
