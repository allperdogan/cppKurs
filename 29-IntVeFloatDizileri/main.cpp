#include <iostream>

using namespace std;

int main()
{
    int sayilar[5];

    for(int i=0; i<5;i++){
        cout << "Dizinin " << i+1 << ". indisiniz giriniz:"<<endl;
        cin >> sayilar[i];
    }

    for(int i=0;i<5;i++){
        cout << "Dizinin " << i+1 << ". elemani: " <<sayilar[i] << endl;
    }

    return 0;
}
