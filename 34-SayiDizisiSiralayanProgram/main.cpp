#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dizi[] = {-23,12 ,1,32,4,-6,34,13213,5,0,2,8,-29};
    int n = sizeof(dizi)/sizeof(int);

    sort(dizi,dizi+n);

    for(int i=0; i<n; i++){
        cout << dizi[i] << " ";
    }

    return 0;
}
