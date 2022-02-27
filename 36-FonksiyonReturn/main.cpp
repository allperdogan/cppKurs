#include <iostream>

using namespace std;

int toplama(int sayi1, int sayi2){
    return sayi1+sayi2;
}

int main()
{
    int x=2;
    int y=3;
    while(true){
        cout << "Lutfen iki sayi giriniz" << endl;
        cin >> x >> y ;
        cout << x<<"+ "<<y<< "= " << toplama(x,y)<< endl;
    }

    return 0;
}
