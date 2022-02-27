#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //char dizi[40];
    string dizi;
    int sayac=0,temp;

    cout << "Lutfen bir kelime giriniz" << endl;
    cin >> dizi;

/*    while(dizi[sayac] != '\0'){
        sayac++;
    }*/
    sayac=dizi.length();

    cout << "Kelimedeki harf sayisi: " << sayac << endl;

    sort(dizi.begin(),dizi.end());

    cout << dizi << endl;

    /*int i=0, j=0;

    while(i<sayac-1){
        j=i+1;
            while(j<sayac){
                if(dizi[i]>dizi[j]){
                    temp = dizi[i];
                    dizi[i]=dizi[j];
                    dizi[j]=temp;
                    j++;
                }
                else{
                    j++;
                }
            }
            i++;
    }
    for(int i=0; i<sayac;i++){
        cout << dizi[i];
    }*/

    return 0;
}
