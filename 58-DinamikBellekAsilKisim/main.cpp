#include <iostream>

using namespace std;

int main()
{
    int *adres = new int;

    *adres = 10;

    cout << *adres<<endl;

    *adres = 12;
    delete adres;
    adres = nullptr; //veya 0 yap

    return 0;
}
