#include <iostream>

using namespace std;

class Kitap{
public:
    string isim;
    void bilgileriSoyle(){
        cout << isim << endl;
    }

};

class Roman: public Kitap{
public:
    string romanTipi; // kýsa orta uzun
    Roman(string isim, string romanTipi){
        this->isim=isim;
        this->romanTipi=romanTipi;
    }
    void bilgileriSoyle(){
        cout << "Roman ismi: " <<isim << " Roman tipi: " << romanTipi << endl;
    }
};

int main()
{
    Roman r1("ABC","Uzun");
    r1.bilgileriSoyle();

    Kitap *r1Ebeveyn;
    r1Ebeveyn = &r1;

    r1Ebeveyn->bilgileriSoyle();

    return 0;
}
