#include <iostream>

using namespace std;

int main()
{
    string isim = "Kaan";

    string *isimAdres = &isim;

    cout << isimAdres << endl;
    cout << *isimAdres << endl;

    return 0;
}
