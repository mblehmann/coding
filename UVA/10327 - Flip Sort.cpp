#include <iostream>

using namespace std;

int main() {

				int a[1001];
				int n;

				int f;
				int tmp;
				bool c;

				while (cin >> n) {
								for (int i = 0; i < n; i++) {
												cin >> a[i];
								}

								f = 0;
								c = true;

								for (int i = 0; i < n-1 && c; i++) {
												c = false;
												for (int j = 0; j < n-1-i; j++) {
															 if (a[j] > a[j+1]) {
																			 tmp = a[j];
																			 a[j] = a[j+1];
																			 a[j+1] = tmp;
																			 f++;
																			 c = true;
															 }
												}
								}

								cout << "Minimum exchange operations : " << f << endl;

				}

				return 0;

}

