#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int j=1;

    for ( ; i<10 ; i++){
        cout << i << "ler" << endl;
        for (int j=1 ; j<10; j++){
            cout << i << "x";
            cout << j << "=";
            cout << i*j << endl;
        }

    }

    return 0;
}
