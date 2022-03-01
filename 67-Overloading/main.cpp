#include <iostream>

using namespace std;

class Ogrenci{
    private:
    string isim;
    int numara;

    public:

    Ogrenci(string yazilacakIsim, int yazilacakNumara){
        isim = yazilacakIsim;
        numara = yazilacakNumara;
    }

    Ogrenci(string yazilacakIsim){
        isim=yazilacakIsim;
        numara = 0;
    }

    void setIsim(string yazilacakIsim){
        if(yazilacakIsim.size()>3){
            isim = yazilacakIsim;
        }
        else{
            cout << "Lutfen 3 harften fazla deger giriniz" << endl;
        }
    }
    void setNumara(int yazilacakNumara){
        if(yazilacakNumara>0) {
            numara = yazilacakNumara;
        }
        else {
            cout << "Lutfen 0 dan fazla deger giriniz" << endl;
        }
    }

    void ogrenciBilgileriniGoster(){
        cout << "Isim: " << isim << endl;
        cout << "Numara: " << numara << endl;

    }

    string getIsim(){
        return isim;
    }
    int getNumara(){
        return numara;
    }

};

int main()
{
    Ogrenci ogr1("Tugba",170501028);

    ogr1.ogrenciBilgileriniGoster();

    ogr1.setIsim("Alper");

    ogr1.ogrenciBilgileriniGoster();

    Ogrenci ogr2("Mert");

    ogr2.ogrenciBilgileriniGoster();

    return 0;
}
