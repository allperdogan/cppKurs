#include <iostream>

using namespace std;

class Takim{
protected:
    string isim;
    int kurulusYili;
public:
    void setIsim(string isim){
        this->isim = isim;
    }
    string getIsim(){
        return this->isim;
    }

};

class Futbolcu:public Takim{
private:
    string isim;
    int dogumYili;
    float futbolcuMaas;

public:
    Futbolcu(){
        this->isim = "Bir isim verilmedi";
    }
    string getIsim(){
        return this->isim;
    }
    int getDogumYili(){
        return this->dogumYili;
    }
    float getFutbolcuMaas(){
        return this->futbolcuMaas;
    }
    void setIsim(string isim){
        this->isim = isim;
    }
    void setDogumYili(int dogumYili){
        this->dogumYili = dogumYili;
    }
    void setFutbolcuMaas(float futbolcuMaas){
        this->futbolcuMaas = futbolcuMaas;
    }
};

int main()
{
    Futbolcu f1;
    Takim* f1Takim;
    f1Takim = &f1;
    cout << f1.getIsim()<<endl;

    f1Takim->setIsim("Fenerbahce");
    f1.setIsim("Tugba");
    f1.setDogumYili(1999);
    f1.setFutbolcuMaas(12.54);

    cout << f1Takim->getIsim() << " " <<f1.getIsim() <<" "<<f1.getDogumYili()<<" "<<f1.getFutbolcuMaas()<<endl;

    return 0;
}
