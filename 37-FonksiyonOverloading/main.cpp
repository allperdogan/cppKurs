#include <iostream>

using namespace std;

void isimSoyle(){
    cout << "Alper" << endl;
}

void isimSoyle(string isim){
    cout << isim << endl;
}

void isimSoyle(string isim1, string isim2){
    cout << isim1 << " " << isim2 << endl;
}

int main()
{
    isimSoyle();
    isimSoyle("Dogan");
    isimSoyle("Elektrik","Elektronik");

    return 0;
}
