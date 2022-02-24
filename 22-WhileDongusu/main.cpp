#include <iostream>

using namespace std;

int main()
{
    int sinir,toplam = 0;

    cout << "Sayi giriniz 1'e kadar sayilmasi icin" << endl;

    cin >> sinir;

    while (sinir>0){
        cout << sinir << endl;
        toplam += sinir;
        sinir--;
    }
    cout << "Sayilarin toplami: " << toplam;
    return 0;
}
