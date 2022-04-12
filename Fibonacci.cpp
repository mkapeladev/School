#include <iostream>
using namespace std;
#include <chrono>

int main()
{
	auto pocz = chrono::high_resolution_clock::now();
	short  f0 = 0, f1 = 1, len;
	cout << "Podaj ile liczb fibonaciego wypisac: ";
	cin >> len;
	for (short i = 0; i < len; i++)
	{
		if (f0 > f1)
		{
			f1 = f0 + f1;
			cout << f1;
		}
		else
		{
			f0 = f0 + f1;
			cout << f0;
		}
	
		cout << endl;
	}
	auto koniec = chrono::high_resolution_clock::now();
	chrono::duration<double> trwanie = koniec - pocz;
	cout << "Czas wykonania program to : " << trwanie.count() << " s\n";
}

