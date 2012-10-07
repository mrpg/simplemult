#include <iostream>
#include <gmpxx.h>

// compile command:
// clang mul.cpp -lgmpxx -lgmp -O3 -o mul
// -- or --
// g++ mul.cpp -lgmpxx -lgmp -O3 -o mul

using namespace std;

int main() {
	mpz_class a = 1, b;

	while (cin >> b) {
		a *= b;
	}

	cout << a << endl;
}
