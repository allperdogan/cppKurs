#include <iostream>

using namespace std;

class Hayvan{

private:
    string isim;
    string tur;
    int yas;

public:
    Hayvan(){
        this->isim = "null";
        this->tur = "null";
        this->yas = 0;
    }

    void bilgileriGuncelle(string yazilacakIsim, string yazilacakTur, int yazilacakYas){
        this-> isim = yazilacakIsim;
        this-> tur = yazilacakTur;
        this-> yas = yazilacakYas;
    }
    void bilgileriGetir(){
        cout << "Hayvanin ismi: " << isim << " turu: " << tur << " yasi: " << yas << endl;
    }
};

int main()
{
    Hayvan hayvanlar[4];
    Hayvan h1;
    Hayvan h2;
    Hayvan h3;
    Hayvan h4;
    hayvanlar[0] = h1;
    hayvanlar[1] = h2;
    hayvanlar[2] = h3;
    hayvanlar[3] = h4;

    string isim,tur;
    int yas;

    for(int i=0; i<3 ; i++){
        cout<<i+1<<". hayvanin ozelliklerini giriniz" << endl;
        cin>>isim>>tur>>yas;
        hayvanlar[i].bilgileriGuncelle(isim,tur,yas);
    }

    for(int i=0; i<4 ; i++){
        hayvanlar[i].bilgileriGetir();
    }
    return 0;
}
