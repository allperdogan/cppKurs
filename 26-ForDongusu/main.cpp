#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int j=5;
    for( /* int i=0*/; i<10 && j==5 ; i=i+3){
        cout << i << endl;
    }

    return 0;
}
