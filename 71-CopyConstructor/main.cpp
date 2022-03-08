#include <iostream>

using namespace std;

class Insan{
public:
    string name;

    Insan(){
        cout << "Bos constructor lu obje olustu" << endl;
    }
    Insan(string isim){
        this->name = name;
        cout << this->name << "Dolu constructur lu obje olustu" << endl;
    }

};

int main()
{
    Insan i1;
    Insan i2("Tugba");

    return 0;
}
