#include <iostream>

using namespace std;

int main () {
	long long int n, k;
	long long int c;
	int r;
	
	while (cin >> n >> k) {
		c = 0;
		r = 0;
		while (n > 0) {
			c += n;
			r += n%k;
			n = n/k + r/k;
			r -= ((r/k)*k);			
		}
		cout << c << endl;
	}
	
	return 0;
}
