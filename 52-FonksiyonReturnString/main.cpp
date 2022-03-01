#include <iostream>

using namespace std;

string notHarfiniVer(float sayi){
    if(sayi>90){
        return "AA";
    }
    else if(sayi>75){
        return "BB";
    }
    else if(sayi>50){
        return "CC";
    }
    else {
        return "FF";
    }
}

int main()
{
    float vizeNotu,finalNotu;
    float ortalama;
    while (true){
        cout << "Vize ve Final notunu sirasiyla giriniz" << endl;
        cin >> vizeNotu >> finalNotu;
        ortalama = vizeNotu * 0.4 + finalNotu * 0.6;
        cout << "Ortalama: " << ortalama << endl;
        cout << notHarfiniVer(ortalama) << endl;
    }

    return 0;
}
