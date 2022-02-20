#include <iostream>

using namespace std;

int main()
{
    string isim;
    string soyisim;
    string meslek;
    int yas;
    cout << "Isim Soyisim Meslek ve Yas giriniz:" << endl;
    cin >> isim >> soyisim >> meslek >> yas;

    cout << "Kullanici bilgileri: " << isim << " " <<soyisim << " " << meslek << " " <<yas;

    return 0;
}
