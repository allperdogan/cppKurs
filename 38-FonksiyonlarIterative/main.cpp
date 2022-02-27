#include <iostream>

using namespace std;

int iterativeFaktoriyel(int sayi){

    int carpim=1;

    for(int i=1;i<=sayi ;i++){

        carpim *= i;
    }
    return carpim;
}

int recursiveFaktoriyel(int sayi){

    if (sayi==0 || sayi==1){
        return 1;
    }
    else {
        return sayi * recursiveFaktoriyel(sayi-1);
    }


}

int main()
{
    int x = iterativeFaktoriyel(6);
    int y = recursiveFaktoriyel(5);

    cout << "Iterative: "<<x <<endl << "Recursive: "<< y << endl;

    return 0;
}
