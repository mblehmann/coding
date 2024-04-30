#include <iostream>

using namespace std;

bool prime[1000000];

bool is_prime(int n) {
	if (prime[n]) {
		return true;
	}
	int metade = n/2;
	for (int i = 3; i < metade; i += 2) {
		if ((n % i) == 0) {
			return false;
		}
	}
	prime[n] = true;
	return true;
}

int main() {
	int n;
	int metade;
	int a, b;
	for (int i = 0; i < 1000000; i++) {
		prime[i] = false;
	}
	
	while (true) {
		cin >> n;
		if (n == 0) break;
		
		metade = n/2;
		a = 0; b = 0;
		for (int i = 3; i <= metade; i += 2) {
			if (is_prime(i) && is_prime(n-i)) {
				a = i;
				b = n-i;
				break;
			}
		}
		if (a == 0 && b == 0) {
			cout << "Goldbach's conjecture is wrong." << endl;
		} else {
			cout << n << " = " << a << " + " << b << endl;
		}
	}
	
	return 0;
}

