#include <iostream>

using namespace std;

int main() {

	int k, n;
	int m;
	int curr;

	bool succ;

	while (true) {
					cin >> k;
					if (k == 0) break;

					//n = k*2;
					m = k+1;
					while (true) {
									n = k*2;
									curr = -1;
									succ = true;
									while (n > k) {
										curr = (curr+m) % n;
										if (curr < k) {
														succ = false;
														break;
										}
										n--;
										curr--;
									}
									if (succ) { 
													break;
									}
									m++;
					}
					cout << m << endl;

	}
  return 0;

}

