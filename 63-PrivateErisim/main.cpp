#include <iostream>

using namespace std;

// class -> sýnýf

class Insan{
    public:
    string isim;
    private:
    string gozRengi;
};

int main()
{
    Insan insan1;
    Insan insan2;
    insan1.isim = "Kaan";
    insan1.gozRengi = "Ela";
    insan2.isim = "Ali";
    insan2.gozRengi = "Yesil";

    cout << insan1.isim << " " << insan1.gozRengi << endl;
    cout << insan2.isim << " " << insan2.gozRengi << endl;

    return 0;
}
