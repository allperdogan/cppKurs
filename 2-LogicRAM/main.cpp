/*  deðiþkenler
    kontrol yapýlarý
    döngüler
    fonksiyonlar
*/

#include <iostream>

using namespace std;

void ekranaYaz(){
    cout<<"Bu bir fonksiyon"<<endl;
}

int kareAl(int sayi){
    return sayi*sayi;
}

int main()
{
    int sayi = 5;
    float kSayi = 6.2;
    double buyukKesirSayi = 3.4;
    char karakter = 'K';
    bool anahtar = true;

    cout << "Sayi: " << sayi << endl;
    cout << "kSayi: " << kSayi << endl;
    cout << "buyukKesirSayi: " << buyukKesirSayi << endl;
    cout << "karakter: " << karakter << endl;
    cout << "anahtar: " << anahtar << endl;

    sayi = 1;
    kSayi = 4.1;
    buyukKesirSayi = 12.423;
    karakter = 'x';
    anahtar = false;

    cout << sayi << " " << kSayi<< " "
    << buyukKesirSayi<< " " << karakter<< " " << anahtar << endl;

    if(sayi==1){
        cout << "Sayi 1"<< endl;
    }
    else {
        cout << "Sayi 1 degil"<< endl;
    }
    ekranaYaz();
    cout<< "sayi x 5 karesi:  " << kareAl(sayi*5) << endl;
    return 0;
}
