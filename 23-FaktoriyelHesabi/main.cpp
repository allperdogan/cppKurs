#include <iostream>

using namespace std;

int main()
{
    int sayi;
    int sonuc=1;

    cout << "Faktoriyeli alinacak sayiyi girin" << endl;
    cin >> sayi;

    while(sayi>0){
        sonuc *= sayi;
        sayi--;
    }
    cout << "Sonuc: " << sonuc << endl;

    return 0;
}
