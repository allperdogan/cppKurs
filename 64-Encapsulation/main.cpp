#include <iostream>

using namespace std;

class Ogrenci{
    private:
    string isim;
    int numara;

    public:
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
    string getIsim(){
        return isim;
    }
    int getNumara(){
        return numara;
    }

};

int main()
{
    Ogrenci ogr1;

    ogr1.setIsim("Tugba");
    ogr1.setNumara(15);
    cout<<ogr1.getIsim()<<endl;
    cout<<ogr1.getNumara()<<endl;

    return 0;
}
