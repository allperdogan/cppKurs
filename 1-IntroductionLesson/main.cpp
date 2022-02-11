#include <iostream>
#include <locale.h>             // Türkçe karakter için

using namespace std;            // namespace tanýmlanmasaydý std::cout
                                // std::endl þeklinde fonksiyonlar yazýlmalýydý

int main()
{
    setlocale(LC_ALL,"Turkish"); // Türkçe karakter için
    cout << "Hello World! Türkçe" << endl;
    return 0;
}
