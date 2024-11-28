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

	for (int i = 1; i <= (a/2); i += 2) {
		if (a % i == 0) {
			return true;
		}

	return false;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
