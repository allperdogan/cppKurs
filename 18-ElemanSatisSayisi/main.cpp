#include <iostream>

using namespace std;

int main()
{
    string isim1, isim2, isim3;
    string soyisim1, soyisim2, soyisim3;
    int kimlikNo1, kimlikNo2, kimlikNo3;
    int urunSayisi1, urunSayisi2, urunSayisi3;
    bool cinsiyet1, cinsiyet2, cinsiyet3;
    // true -> kadın
    // false -> erkek
    cout << "Lutfen calisan elemanlarin bilgilerini giriniz" << endl;

    cin >> isim1 >> soyisim1 >> kimlikNo1 >> cinsiyet1;
    cin >> isim2 >> soyisim2 >> kimlikNo2 >> cinsiyet2;
    cin >> isim3 >> soyisim3 >> kimlikNo3 >> cinsiyet3;

    urunSayisi1=50;
    urunSayisi2=50;
    urunSayisi3=50;

    urunSayisi1 -= 20;
    urunSayisi2 -= 15;
    urunSayisi3 -= 30;

    if(urunSayisi1>25) {
        cout << isim1 << " Basarisiz" << endl;
    }
    else {
        cout << isim1 << " Basarili" << endl;
    }
    if(urunSayisi2>25) {
        cout << isim2 << " Basarisiz" << endl;
    }
    else {
        cout << isim2 << " Basarili" << endl;
    }
    if(urunSayisi3>25) {
        cout << isim3 << " Basarisiz"<< endl;
    }
    else {
        cout << isim3 << " Basarili"<< endl;
    }

    cout << isim1 << " " <<soyisim1 << " " <<kimlikNo1 << " " <<cinsiyet1<< endl;
    cout << isim2 << " " <<soyisim2 << " " <<kimlikNo2 << " " <<cinsiyet2<< endl;
    cout << isim3 << " " <<soyisim3<< " " <<kimlikNo3 << " " <<cinsiyet3<< endl;

    return 0;
}
