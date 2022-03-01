#include <iostream>

using namespace std;

struct Ogrenci{
int numara;
string isim;
string soyisim;
string bolum;
char cinsiyet; //1 erkek , 0 kadýn
};

int main()
{
    Ogrenci ogr1 = {170504013,"Alper","Dogan","ETE",'E'};
    Ogrenci ogr2 = {170503028,"Tugba","Dogan","INF",'K'};
    Ogrenci ogr3;

    cout << "3. ogrencinin bilgilerini giriniz" << endl;
    cin >> ogr3.numara >> ogr3.isim >> ogr3.soyisim >> ogr3.bolum >> ogr3.cinsiyet;
    cout << "1. ogrenci" << endl;
    cout << ogr1.numara << endl;
    cout << ogr1.isim << endl;
    cout << ogr1.soyisim << endl;
    cout << ogr1.bolum << endl;
    cout << ogr1.cinsiyet << endl;
    cout << "2. ogrenci" << endl;
    cout << ogr2.numara << endl;
    cout << ogr2.isim << endl;
    cout << ogr2.soyisim << endl;
    cout << ogr2.bolum << endl;
    cout << ogr2.cinsiyet << endl;
    cout << "3. ogrenci" << endl;
    cout << ogr3.numara << endl;
    cout << ogr3.isim << endl;
    cout << ogr3.soyisim << endl;
    cout << ogr3.bolum << endl;
    cout << ogr3.cinsiyet << endl;
    return 0;
}
