#include <iostream>

using namespace std;

int main() {
	
	int n;
	int s, d;
	int a, b;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> s >> d;
		
		if (s < d) {
			cout << "impossible" << endl;
		} else {
			b = (s-d)/2;
			a = (s+d)/2;
			
			if (a+b == s && a-b == d) {
				cout << a << " " << b << endl;
			} else {
				cout << "impossible" << endl;
			}
		}
	}
		
	return 0;
}
