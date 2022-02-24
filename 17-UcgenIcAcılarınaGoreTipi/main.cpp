#include <iostream>

using namespace std;

int main()
{
    float x,y,z, toplam;
    cout << "Ucgenin ic acilarini giriniz" << endl;
    cin >> x >> y >>z;

    toplam = x + y + z;

    if (toplam == 180){
        if (x==60 && y==60){
            cout << "Eskenar ucgen" << endl;
        }
        else if (x==90 || y ==90 || z==90) {
            cout << "Dik ucgen" << endl;
        }
        else if ( x==y || x==z || y==z){
            cout << "Ikizkenar ucgen" << endl;
        }
        else {
            cout << "Cesitkenar ucgen" << endl;
        }
    }

    else {
        cout << "Lutfen acilari yeniden giriniz" << endl;
    }

    return 0;
}
