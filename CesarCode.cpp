#include <iostream>
using namespace std;

int main()
{
	string prim;
	short key , lenght , choice ;
	cout << "Podaj wiadomość do zaszyfrowania" << endl;
	char message[50], meslen;
	cin >> message; // Wiadomość do szyfrowania
	//cout << message;
	prim = message;
	cout << "Podaj Klucz do szyfrowania" << endl;
	cin >> key; // ilość liter do przeskoczenia do szyfru
	lenght = strlen(message); // wiadomość  >> liczba znaków 
	cout << "1.Szyfrowanie"<< endl;
	cin >> choice;
	if (choice == 1)
		for (short i = 0; message[i] != '0'; i++)
		{
			meslen = message[i];
			//cout << message[i];
			if ( meslen <= 'z' && meslen >= 'a')
			{
				meslen = meslen + key;
				if (meslen > 'z')
				{
					meslen = meslen - 'z' + 'a' - 1;
				}
				message[i] = meslen;
				
			}

		}
		

	cout << "Po zaszyfrowaniu: " << message << endl;
	cout << "Po odszyfrowaniu: " << prim;
}
