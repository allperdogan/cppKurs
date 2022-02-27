#include <iostream>

using namespace std;

int fibonacci(int indisDegeri){
    if(indisDegeri == 0 || indisDegeri == 1){
        return 1;
    }
    else {
        return fibonacci(indisDegeri-1)+fibonacci(indisDegeri-2);
    }
}

int fibonacciToplam(int sayi){

    int toplam=0;

    for ( int i=0; i<=5 ; i++){
        toplam += fibonacci(i);
    }
    return toplam;
}


int main()
{

    cout << fibonacci(0) << " " << fibonacci(1) << " " << fibonacci(2) << " " << fibonacci(3) << " " << fibonacci(4) << " " << fibonacci(5) << endl;

    cout << fibonacciToplam(5) << endl;
    return 0;
}
