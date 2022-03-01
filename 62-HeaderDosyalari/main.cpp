#include <iostream>
#include "Hayvan.h"

using namespace std;

int main()
{
    Hayvan hayvan1;

    hayvan1.isim = "Josi";
    hayvan1.sinif = "Kopek";
    hayvan1.tur = "Sosis";
    hayvan1.yas = 4;

    hayvan1.ozellikleriniSoyle();

    return 0;
}
