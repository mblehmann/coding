#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main() {

				int n;
				int l, c;
				bool j[3005];
				bool ok, f;

				while (cin >> n) {
								for (int i = 0; i < 3004; i++) {
												j[i] = false;
								}
								f = true;
								ok = true;
								for (int i = 0; i < n; i++) {
												cin >> c;
												if (!f) {
																if (abs(l-c) >= n || abs(l-c) == 0) {
																				ok = false;
																} else {
																				if (j[abs(l-c)]) {
																							ok = false;
																				} else {
																							j[abs(l-c)] = true;
																				}
																}
												}
												l = c;
												if (f) {
																f = false;
												}
								}
								if (ok) {
												cout << "Jolly" << endl;
								} else {
												cout << "Not jolly" << endl;
								}
				}

				return 0;

}

