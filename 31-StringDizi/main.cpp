#include <iostream>

using namespace std;

int main()
{
    string isimler[3];
    int yas[3];

    for(int i=0;i<3;i++){
        cout << i+1 << ". elemanin ismini ve yasini girin" << endl;
        cin >> isimler[i] >> yas[i];
    }

    for(int i=0;i<3;i++){
        cout << i+1 << ". elemnin ismi: " << isimler[i] << " ve yasi: " << yas[i] << endl;
    }

    return 0;
}
