#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    do{
            if(i==5){
                i++;
                continue; //alttaki kodlarý pas gecip þartý kontrol eder
                //break; //döngü tamamen kýrýlýr
            }
        cout<<i<<endl;
        i++;
    }while(i<10); //þart içine true veya 1 yazarsak sonsuz döngü olur
                  // for için -> for( ; ; )
    return 0;
}
