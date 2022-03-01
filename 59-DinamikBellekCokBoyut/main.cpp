#include <iostream>

using namespace std;

int main()
{
    int boyut = 4;
    int *adres = new int[boyut];

    *adres = 10;
    *(adres + 1) = 20;
    *(adres + 2) = 30;
    *(adres + 3) = 40;

    for(int i=0; i<4;i++){
        cout << *(adres+i) << endl;
    }

    delete [] adres;
    adres = nullptr;

    for(int i=0; i<3;i++){
        cout << *(adres+i) << endl;
    }

    return 0;
}
