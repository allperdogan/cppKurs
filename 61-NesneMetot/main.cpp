#include <iostream>

using namespace std;

class Insan{
    public:
    string isim;
    int yas;

    void isimVeYasSoyle(){
        cout << isim << " " << yas << endl;
    }
};

int main()
{
    Insan insan1, insan2;
    insan1.isim = "Kaan";
    insan1.yas = 25;
    insan2.isim = "Hasan";
    insan2.yas = 21;

    insan1.isimVeYasSoyle();
    insan2.isimVeYasSoyle();

    return 0;
}
