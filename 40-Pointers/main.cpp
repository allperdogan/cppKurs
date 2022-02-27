#include <iostream>

using namespace std;

int main()
{
    int sayi=10;

    int *sayininAdresi = &sayi;

    cout << sayininAdresi << endl;
    cout << sayininAdresi + 1 << endl;
    cout << *sayininAdresi << endl;

    return 0;
}
