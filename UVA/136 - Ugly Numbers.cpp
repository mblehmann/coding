#include <iostream>

using namespace std;

int main() {
	int n = 0;
	int c = 0;
	int i;
	while (n < 1500) {
		c++;
		i = c;
		while ((i % 2) == 0) {
			i /= 2;
		}
		while ((i % 3) == 0) {
			i /= 3;
		}
		while ((i % 5) == 0) {
			i /= 5;
		}
		
		if (i == 1) {
			n++;
			if (n < 12) cout << n << ": " << c << endl;
		}
	}
	
	cout << "The 1500'th ugly number is " << c << "." << endl;	
	
	return 0;
}
