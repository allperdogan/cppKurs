#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    string isim = "Alper Dogan";
    int sayac=0;

    for(char isminHerKarakteri : isim){
        sayac++;
        cout << isminHerKarakteri;
    }

    cout << endl << sayac;

    return 0;
}
