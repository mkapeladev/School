#include <iostream>
#include <chrono>
using namespace std;
void zwrooccos(short klucz, char tab[])
{
    short dl = strlen(tab);
    if (!(klucz >= -26 and klucz <= 26))
    {
        cout << "Zły klucz" << endl;
        return;
    }
    if (klucz >= 0)
    {
        for (int i = 0; i < dl; i++)
        {
            if (tab[i] + klucz <= 'z')
            {
                tab[i] += klucz;
            }
            else
            {
                tab[i] += klucz - 26;
            }
        }
    }
    else
    {
        for (int i = 0; i < dl; i++)
        {
            if (tab[i] + klucz >= 'a')
            {
                tab[i] += klucz;
            }
            else
            {
                tab[i] += klucz + 26;
            }
        }
    }
}
int main()
{
    auto pocz = chrono::high_resolution_clock::now();
    short klucz;
    char tab[300];


    cout << "Podaj wyraz do zaszyfrowania: " << endl;
    cin >> tab;
    cout << "P0daj Klucz: " << endl;
    cin >> klucz;
    zwrooccos(klucz, tab);
    cout << "Wyraz po zaszyfrowaniu to:" << tab << endl;
    auto koniec = chrono::high_resolution_clock::now();
    chrono::duration<double> trwanie = koniec - pocz;
    cout << "\n Czas wykonania program to : " << trwanie.count() << " s\n";
}
