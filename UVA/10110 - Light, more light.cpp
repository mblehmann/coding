#include <iostream>
#include <cmath>

using namespace std;

int main() {
				unsigned long int n;

				while (true) {
								cin >> n;
								if (n == 0) break;

								if (((unsigned long int) pow((unsigned long int) sqrt(n), 2)) == n) cout << "yes" << endl;
								else cout << "no" << endl;
				}

				return 0;
}
