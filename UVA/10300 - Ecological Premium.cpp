#include <iostream>

using namespace std;

int main() {

				int n;
				int f;
				unsigned long long int d, a, p;
				unsigned long long int soma = 0;

				cin >> n;
				for (int i = 0; i < n; i++) {
								cin >> f;
								soma = 0;
								for (int j = 0; j < f; j++) {
												cin >> d >> a >> p;
												soma += (d*p);
								}
								cout << soma << endl;
				}

				return 0;
}
