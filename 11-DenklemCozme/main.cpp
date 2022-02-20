#include <iostream>

using namespace std;

int main()
{
    float a,b,c,x;
    float birinciDerece;
    float ikinciDerece;
    cout << "Lutfen a b c ve x degerlerini giriniz..." << endl;
    cin >> a >> b >> c >> x;

    birinciDerece = a * x + b;
    ikinciDerece = a * x * x + b * x + c;

    cout << "Birinci derece: " << birinciDerece << endl;
    cout << "Ýkinci derece: " << ikinciDerece << endl;


    return 0;
}
