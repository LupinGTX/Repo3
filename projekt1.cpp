#include <iostream>

using namespace std;

bool Pierwsza(int a) {
	if (a == 1) {
		return false;
	}

	if (a == 2) {
		return true;
	}

	if (a % 2 == 0) {
		return false;
	}

	for (int i = 3; i <= (a/2); i += 2) {
		if (a % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
    int a;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
	cout << "2. Liczba pierwsza" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;

	if (wyjscie == 2) {
		if (Pierwsza(a)) {
			cout << "Podana przez uzytkownika liczba jest pierwsza." << endl;
		}
		else {
			cout << "Podana przez uzytkownika liczba NIE jest pierwsza." << endl;
		}
	}

    } while(wyjscie != 0);
    return 0;
}
