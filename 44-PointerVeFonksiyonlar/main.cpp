#include <iostream>

using namespace std;

void dizidekiElemanlariGoruntule(int *diziAdres, int boyut){
    for(int i=0; i<boyut;i++){
        cout << *(diziAdres+i) << endl;
    }
}

void keyifeGoreArttir(int *diziAdres, int boyut, int miktar){
    for(int i=0; i<boyut ; i++){
        *(diziAdres+i) += miktar;
    }
}

void keyifeGoreAzalt(int *diziAdres, int boyut, int miktar){
    for(int i=0; i<boyut ; i++){
        *(diziAdres+i) -= miktar;
    }
}


int diziElemanlariniTopla(int *diziAdres, int boyut){
    int toplam = 0;
    for(int i=0; i<boyut ; i++){
        toplam += *(diziAdres+i);
    }
    return toplam;
}

int maximum(int *diziAdres, int boyut){
    int buyuk = *diziAdres;
    for(int i=0; i<boyut; i++){
        if(buyuk < *(diziAdres+i)){
            buyuk = *(diziAdres+i);
        }
    }
    return buyuk;
}

int minimum(int *diziAdres, int boyut){
    int kucuk = *diziAdres;
    for(int i=0; i<boyut; i++){
        if(kucuk > *(diziAdres+i)){
            kucuk = *(diziAdres+i);
        }
    }
    return kucuk;
}

float ortalama(int *diziAdres, int boyut){

    float ortalamaDeger = diziElemanlariniTopla(diziAdres,boyut) / (float)boyut;

    return ortalamaDeger;
}

int main()
{
    // bir tane dizi 5-10
    // dizinin içerisindeki elemanlarý listele
    // keyife göre arttýrma ve azaltma iþlemleri
    int sayilar[]= {16,10,20,15};
    dizidekiElemanlariGoruntule(sayilar,4);
    cout << "Toplam: " <<diziElemanlariniTopla(sayilar,4) << endl;
    keyifeGoreArttir(sayilar,4,3);
    dizidekiElemanlariGoruntule(sayilar,4);
    cout << "Toplam: " <<diziElemanlariniTopla(sayilar,4) << endl;
    keyifeGoreAzalt(sayilar,4,5);
    dizidekiElemanlariGoruntule(sayilar,4);
    cout << "Toplam: " <<diziElemanlariniTopla(sayilar,4) << endl;
    cout << "Max sayi: " <<maximum(sayilar,4) << endl;
    cout << "Min sayi: " <<minimum(sayilar,4) << endl;
    cout << "Ortalama: " <<ortalama(sayilar,4) << endl;
    return 0;
}
