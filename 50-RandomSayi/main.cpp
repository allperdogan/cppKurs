#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int x;
    srand(time(NULL));

    x = rand() % 10;

    cout << x;

    return 0;
}
