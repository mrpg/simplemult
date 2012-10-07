#include <iostream>
#include <gmpxx.h>

// link with -lgmpxx -lgmp

using namespace std;

int main() {
	mpz_class a = 1, b;

	while (cin >> b) {
		a *= b;
	}

	cout << a << endl;
}
