#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int n;
	int soma;
	string status;

	cout << "PERFECTION OUTPUT" << endl;
	while (true) {
		cin >> n;
		if (n == 0) break;
		
		soma = 0;
		for (int i = 1; i <= n/2; i++) {
			if ((n % i) == 0) {
				soma += i;
			}
		}
		
		printf("%5d", n);
		if (soma < n) {
			status = "  DEFICIENT";
		} else if (soma > n) {
			status = "  ABUNDANT";
		} else {
			status = "  PERFECT";
		}
		
		cout << status << endl;
		
	}
	cout << "END OF OUTPUT" << endl;
	
	return 0;
}
