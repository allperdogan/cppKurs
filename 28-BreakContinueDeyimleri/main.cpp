#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    do{
            if(i==5){
                i++;
                continue; //alttaki kodlar� pas gecip �art� kontrol eder
                //break; //d�ng� tamamen k�r�l�r
            }
        cout<<i<<endl;
        i++;
    }while(i<10); //�art i�ine true veya 1 yazarsak sonsuz d�ng� olur
                  // for i�in -> for( ; ; )
    return 0;
}
