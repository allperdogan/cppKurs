#include <iostream>

using namespace std;

int main()
{
    /*
    ==
    !=
    <
    >
    <=
    >=
    */

    if(5>4){
        cout << "5 buyuktur 4" << endl;
    }
    if(0){
        cout << "Olmadi" << endl;
    }
    if(1){
        cout << "Oldu" << endl;
    }
    if(false){
        cout << "Olmadi" << endl;
    }
    if(true){
        cout << "Oldu" << endl;
    }
    cout << (5>7) << endl; //0 yazar = false
    return 0;
}
