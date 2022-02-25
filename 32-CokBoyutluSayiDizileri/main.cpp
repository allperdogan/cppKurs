#include <iostream>

using namespace std;

int main()
{
    int matris[2][2];
    int matris2[2][2];
    int toplam[2][2];

    cout << "1. matris degerlerinin girin 2x2"<<endl;
    for(int i=0; i<2; i++){
        for(int j = 0 ; j<2 ;j++){
            cin>> matris[i][j];
        }
    }
    cout << "2. matris degerlerinin girin 2x2"<<endl;
    for(int i=0; i<2; i++){
        for(int j = 0 ; j<2 ;j++){
            cin>> matris2[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j = 0 ; j<2 ;j++){
            toplam[i][j]=matris[i][j]+matris2[i][j];
        }
        cout << endl;
    }

    cout << "Toplam: "<<endl;

    for(int i=0; i<2; i++){
        for(int j = 0 ; j<2 ;j++){
            cout<< toplam[i][j]<<" ";
        }
        cout << endl;
    }



    return 0;
}
