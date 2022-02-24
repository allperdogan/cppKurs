#include <iostream>

using namespace std;

int main()
{
    int sayi;
    int tekToplam = 0;
    int ciftToplam = 0;
    cout << "1 den n'e kadar tek ve cift sayilari toplami bulunacak sayiyi giriniz" << endl;
    cin >> sayi;

    do{
        if (sayi%2==0){
            ciftToplam += sayi;
        }
        else if (sayi%2==1){
            tekToplam += sayi;
        }
        sayi--;
    } while (sayi>0);

    cout << "Cift sayilarin toplami: " << ciftToplam << endl;
    cout << "Tek sayilarin toplami: " << tekToplam << endl;

    return 0;
}
