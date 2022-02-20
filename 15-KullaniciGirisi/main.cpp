#include <iostream>

using namespace std;

int main()
{
    string eMail;
    string parola;

    string kontrolEmail = "admin@admin.com";
    string kontrolParola = "admin";

    cout << "Lutfen mailinizi ve sifre giriniz" << endl;

    cin >> eMail >> parola;

    if(kontrolEmail== eMail && kontrolParola==parola){
        cout << "Basarili giris yaptiniz" << endl;
    }
    else if (kontrolEmail== eMail || kontrolParola==parola) {
        if (kontrolEmail != eMail) {
            cout << "Mailinizi kontrol ediniz" << endl;
        }
        else {
            cout << "Sifrenizi kontrol ediniz" << endl;
        }
    }
    else {
        cout << "Lutfen bilgilerinizi kontrol ediniz" << endl;
    }
    // veya -> ||
    // ve -> &&
    return 0;
}
