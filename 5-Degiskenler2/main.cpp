/*
    adresleme RAM'de
*/

#include <iostream>

using namespace std;

int main()
{
    int tamSayi;                // 4byte
    float kesirliSayi;          // 4byte
    double buyukKesirliSayi;    // 8byte
    char karakter;              // 1byte
    bool anahtar;               // 1byte

    tamSayi = 5;
    kesirliSayi = 7.2;
    buyukKesirliSayi = 5.6;
    karakter = 'K';
    anahtar = true;

    cout << tamSayi << " " << kesirliSayi <<
    " " << buyukKesirliSayi << " "<< karakter<< " "<< anahtar <<endl;

    return 0;
}
