#include <iostream>

using namespace std;
// fonksiyon aþaðýda tanýmlanacaksa burada bir kez tanýtýlmalý

void diziElemaniBastir(int sayiDizisi[],int boyut);

int main()
{
    int sayilar[3] = {2,4,6};
    int sayilar2[4] = {1,3,5,10};
    int sayilar3[5] = {3,5,7,9,11};

    diziElemaniBastir(sayilar,3);
    cout << endl;
    diziElemaniBastir(sayilar2,4);
    cout << endl;
    diziElemaniBastir(sayilar3,5);
    cout << endl;

    return 0;
}

void diziElemaniBastir(int sayiDizisi[], int boyut){
    for(int i=0; i<boyut;i++){
        cout << sayiDizisi[i] << " ";
    }
}
