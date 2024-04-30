#include <iostream>

using namespace std;

int f91(int n) {
				if (n <= 100) {
								return f91(f91(n+11));
				} else {
								return n-10;
				}
}

int main() {

				int n;

				while (cin >> n) {
								if (n == 0) break;
								if (n <= 100) {
												cout << "f91(" << n << ") = 91" << endl;
								} else {
												cout << "f91(" << n << ") = " << (n-10) << endl;
								}
				}

				return 0;
}
