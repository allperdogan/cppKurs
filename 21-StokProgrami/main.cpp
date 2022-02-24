#include <iostream>

using namespace std;

int main()
{
    int stokAdeti,islemYapilacakUrunler;
    char islem;

    cout << "Lutfen depodaki stok miktarini giriniz" << endl;
    cin >> stokAdeti;

    cout << "Depodan urun cikarmak icin - yaziniz, urun eklemek icin + yaziniz" << endl;
    cin >> islem;

    switch(islem){
    case '+':
            cout << "Kac adet urun ekleyeceksiniz" << endl;
            cin >> islemYapilacakUrunler;
            stokAdeti += islemYapilacakUrunler;
            break;
    case '-':
            cout << "Kac adet urun cikaracaksiniz" << endl;
            cin >> islemYapilacakUrunler;
            stokAdeti -= islemYapilacakUrunler;
            break;
    default:
        cout << "Sadece ekleme veya cikarma yapilabilir " << endl;
    }

    cout << "Urun adeti: " <<stokAdeti;

    return 0;
}
