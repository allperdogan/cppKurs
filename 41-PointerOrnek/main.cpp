#include <iostream>

using namespace std;

void degerleriDegistir(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int sayi1,sayi2;
    int *sayi1Adresi, *sayi2Adresi;


    cout << "Lutfen 2 adet sayi giriniz" << endl;
    cin >> sayi1 >> sayi2;

    cout << "Sayi 1: " << sayi1 << "  Sayi 2: " << sayi2 << endl;

    sayi1Adresi = &sayi1;
    sayi2Adresi = &sayi2;

    degerleriDegistir(sayi1Adresi, sayi2Adresi);

    cout << "Sayi 1: " << sayi1 << "  Sayi 2: " << sayi2 << endl;

    return 0;
}
