#include <iostream>

using namespace std;

class Calisan{
private:
    string isim;
    float maas;
public:
    Calisan(){
        this->isim = "Isim verilmedi.";
    }
    string getIsim(){
        return this->isim;
    }
    void setIsim(string isim){
        this->isim = isim;
    }

};

int main()
{
    Calisan c1;
    cout << c1.getIsim() << endl;
    c1.setIsim("Tugba");
    cout << c1.getIsim() << endl;
    return 0;
}
