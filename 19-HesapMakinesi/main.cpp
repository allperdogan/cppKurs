#include <iostream>

using namespace std;

int main()
{
    float sayi1,sayi2;
    float toplama,cikarma,carpma,bolme;
    int islem;

    cout << "Lutfen yapmak istediginiz islemi seciniz" << endl;
    cout << "1. Toplama Islemi" << endl;
    cout << "2. Cikarma Islemi" << endl;
    cout << "3. Carpma Islemi" << endl;
    cout << "4. Bolme Islemi" << endl;
    cout << "5. Mod Islemi" << endl;

    cin >> islem;

    cout << "Lutfen iki sayi degeri giriniz"<< endl;

    cin >> sayi1 >> sayi2;

    if (islem==1) {
        toplama = sayi1 + sayi2;
        cout << "Sonuc: " << toplama << endl;
    }
    else if (islem==2) {
        cikarma = sayi1 - sayi2;
        cout << "Sonuc: " << cikarma << endl;
    }
    else if (islem==3) {
        carpma = sayi1 * sayi2;
        cout << "Sonuc: " << carpma << endl;
    }
    else if (islem==4) {
        bolme = sayi1 / sayi2;
        cout << "Sonuc: " << bolme << endl;
    }
    else if (islem==5) {
        cout << "Sonuc: " << int(sayi1) % int(sayi2) << endl;
    }
    else {
        cout << "1-5 arasinda deger secmediniz " <<  endl;
    }

    return 0;
}
