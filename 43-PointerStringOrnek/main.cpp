#include <iostream>

using namespace std;

int main()
{
    string takimlar[] = {"Fenerbahce", "Galatasaray", "Besiktas", "Trabzonspor"};

    string *takimlarAdres = takimlar;

    cout << takimlarAdres << endl;

    for (int i=0; i<4 ; i++){
        cout << *(takimlarAdres+i) << endl;
    }

    return 0;
}
