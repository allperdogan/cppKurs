#include <iostream>

using namespace std;

class Ogrenci{
    private:
    string isim;
    int numara;

    public:

    Ogrenci(string isim, int numara){
        this->isim = isim;
        this->numara = numara;
    }

    void setIsim(string isim){
        if(isim.size()>3){
            this->isim = isim;
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


    return 0;
}
