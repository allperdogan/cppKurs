#include <iostream>

using namespace std;

void sayilariDegistir(int &x, int &y){
    int temp;

    temp = x;
    x = y;
    y = temp;
}


int main()
{
    int sayi1 = 5;
    int sayi2 = 8;

    cout << "Sayi1: " << sayi1 << "  Sayi2: " << sayi2 << endl;
    sayilariDegistir(sayi1,sayi2);
    cout << "Sayi1: " << sayi1 << "  Sayi2: " << sayi2 << endl;

    return 0;
}
