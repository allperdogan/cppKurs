#include <iostream>

using namespace std;

int main()
{
    int kontrol;
    int toplam = 0;

    cout << "0'a kadar tek sayilari toplanacak sayiyi giriniz" << endl;

    cin >> kontrol;

    do{
        if(kontrol%2==1){
            toplam += kontrol;
        }
        kontrol--;
    }while(kontrol>0);

    cout << "Tek sayilarin toplami: " <<toplam << endl;

    return 0;
}
