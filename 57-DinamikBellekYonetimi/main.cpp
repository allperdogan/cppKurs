#include <iostream>

using namespace std;

struct Ogrenci{
    int numara;
    float note;
    char a;
    double deger;
};

int main()
{
    int a;
    float b;
    double c;
    char d;


    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(Ogrenci) << endl;

    return 0;
}
