#include <iostream>

using namespace std;

int main()
{
    // + - * /

    int sayi1=5;
    int sayi2=0;

    sayi2 = sayi1++;

    cout<<"Sayi 2: "<<sayi2<<endl<<"Sayi 1: "<<sayi1<<endl;

    int sayi11=4;
    int sayi22=0;

    sayi22 = ++sayi11;

    cout<<"Sayi 22: "<<sayi22<<endl<<"Sayi 11: "<<sayi11<<endl;

    return 0;
}
