#include <iostream>
#include <locale.h>             // T�rk�e karakter i�in

using namespace std;            // namespace tan�mlanmasayd� std::cout
                                // std::endl �eklinde fonksiyonlar yaz�lmal�yd�

int main()
{
    setlocale(LC_ALL,"Turkish"); // T�rk�e karakter i�in
    cout << "Hello World! T�rk�e" << endl;
    return 0;
}
