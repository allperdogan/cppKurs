#include <iostream>

using namespace std;

int main()
{
    int x;
    int yuzbinler,onbinler,binler,yuzler,onlar,birler;
    int toplam;
    cout << "6 basamakli bir sayi giriniz..." << endl;
    cin >> x;

    yuzbinler = x / 100000;
    onbinler = (x%100000) / 10000;
    binler = (x%10000) / 1000;
    yuzler = (x%1000) / 100;
    onlar = (x%100) / 10;
    birler = (x%10);

    cout << yuzbinler << " " << onbinler << " " << binler << " " << yuzler << " " << onlar << " " << birler << endl;

    toplam = yuzbinler+onbinler+binler+yuzler+onlar+birler;

    cout << "Basamaklar toplami: " << toplam << endl;

    return 0;
}
