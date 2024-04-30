#include <iostream>

using namespace std;

int main() {
	int n;
	long long int soma;
	
	while (true) {
		cin >> n;
		if (n < 0) break;
		
		soma = 1;
		for (int i = 0; i < n; i++) {
			soma += (i+1);
		}
		cout << soma << endl;
	}
	
	
	return 0;
}
