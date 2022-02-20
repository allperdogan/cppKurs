#include <iostream>

using namespace std;

int main()
{
    float sayi;
    cout << "Lutfen bir sayi degeri giriniz" << endl;
    cin >> sayi;

    if(sayi>0){
        cout << "Girmis oldugunuz sayi " << sayi << " pozitiftir" << endl;
    }
    else if (sayi == 0){
        cout << "Girmis oldugunuz sayi " << sayi << " ne pozitif ne negatiftir" << endl;
    }
    else if ( sayi < 0 ) {
        cout << "Girmis oldugunuz sayi " << sayi << " negatiftir" << endl;
    }
    else {
        cout << "Sayi degil" << endl;
    }
    return 0;
}
