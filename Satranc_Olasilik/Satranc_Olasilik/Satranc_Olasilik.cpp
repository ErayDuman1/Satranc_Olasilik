#include <iostream>
#include <cstring>

using namespace std;

int sayac = 0;

void hesapla(int beyaz, int siyah, string str, int len)
{
    if (len == str.length())
    {
        cout << str << "  " << endl;
        sayac++;
        return;
    }

    hesapla(beyaz + 1, siyah, str + "B", len);

    if (beyaz > siyah && str.back() == 'B')
    {
        hesapla(beyaz, siyah + 1, str + "S", len);
    }
}

int main()
{
    string str = "";
    hesapla(0, 0, str, 8);
    cout << endl;
    cout << "1 satirdaki olasilik sayisi:" << sayac << endl;
    cout << "8 satirdaki olasilik sayisi:" << sayac * 8 << endl << endl;
    system("pause");
    return 0;
}