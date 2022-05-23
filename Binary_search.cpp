#include<iostream>
using namespace std;
int main()
{
    short i, numer, prawa, lewa, sr;
    short arr[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    cout << "Podaj numer:" << endl;
   cin >> numer;
    prawa = 0;
    lewa = 15;
    sr = (prawa + lewa) / 2;
    while (prawa <= lewa)
    {
        if (arr[sr] < numer)
            prawa = sr + 1;
        else if (arr[sr] == numer)
        {
            cout << "Numer: " << numer << " jest na pozycji: " << sr + 1 << " \nW liscie ma indeks: " << sr;
            break;
        }
        else
            lewa = sr - 1;
        sr = (prawa + lewa) / 2;
    }
    if (prawa > lewa)
        cout << "\n Numerka:  " << numer << "Nie ma na liście";
    return 0;
}