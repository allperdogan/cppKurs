#include <iostream>

using namespace std;

int main()
{
    string isim1 = "Kaan";
    string isim2 = "Mert";
    string isim3 = "Burcu";
    string isimler[3];

    int ogrenciVize1[3];
    int ogrenciVize2[3];
    int ogrenciFinal[3];
    int notOrt[3];
    bool okulSeviyesi[3];

    cout << "Ogrencinin isimlerini girin" << endl;
    for(int i=0; i<3; i++){
        cin >> isimler[i];
    }
    // true -> üni      false -> lise

    // vize1 %20 , vize2 %30 , final %50
    cout << "Ogrencinin egitim seviyesini girin" << endl;
    for(int i=0; i<3; i++){
        cin >> okulSeviyesi[i];
    }
    cout << "Ogrencilerin 1. vize notlarini giriniz" << endl;
    for(int i=0; i<3; i++){
        cin >> ogrenciVize1[i];
    }
    cout << "Ogrencilerin 2. vize notlarini giriniz" << endl;
    for(int i=0; i<3; i++){
        cin >> ogrenciVize2[i];
    }
    cout << "Ogrencilerin final notlarini giriniz" << endl;
    for(int i=0; i<3; i++){
        cin >> ogrenciFinal[i];
    }
    for(int i=0; i<3; i++){
        notOrt[i] = ogrenciVize1[i]*0.2 + ogrenciVize2[i]*0.3 + ogrenciFinal[i]*0.5;
    }
    for (int i=0; i<3 ; i++){
        cout << i+1 << ". ogrencinin ortalamasi: " << notOrt[i] << endl;
        if(notOrt[i]>=85){
            if(okulSeviyesi[i]==true){
                cout << "AA aldi" << endl;
            }
            else{
            cout << "5 aldi" << endl;
            }
        }
        else if(notOrt[i]>=70 ){
             if(okulSeviyesi[i]==true){
                cout << "BB aldi" << endl;
            }
            else {
            cout << "4 aldi" << endl;
            }
        }
        else if(notOrt[i]>=55){
            if(okulSeviyesi[i]==true){
                cout << "CC aldi" << endl;
            }
            else {
            cout << "3 aldi" << endl;
            }
        }
        else if(notOrt[i]>=45){
            if(okulSeviyesi[i]==true){
                cout << "DD aldi" << endl;
            }
            else{
            cout << "2 aldi" << endl;
            }
        }
        else {
            if(okulSeviyesi[i]==true){
                cout << "FF aldi" << endl;
            }
            else {
            cout << "1 aldi" << endl;
            }
        }

    }

    for (int i=0; i<3 ; i++){
        cout << isimler[i] << " bu notu aldi: " << notOrt[i] << endl;
    }

    return 0;
}
