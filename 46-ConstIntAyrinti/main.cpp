#include <iostream>

using namespace std;
// const pointerlarda degistirilebilir
void araligiBastir(const int *x, const int *y){

    for( ; x!=y ; x++){
        cout << *x << endl;
    }

}

void diziyiYazdir(const string *dizininAdresi){
    const string *geciciDizi = dizininAdresi;
    for ( ; dizininAdresi != (geciciDizi+2) ; dizininAdresi++ ) {
        cout << *dizininAdresi << endl;
    }

}

int main()
{
    int sayilar[] = {1,2,3,4,5,6};
    string dizi[] = {"Alper","Dogan","ETE"};

    araligiBastir(sayilar+1,sayilar+5);
    diziyiYazdir(dizi);

    return 0;
}
