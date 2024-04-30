#include <iostream>

using namespace std;

int main() {

	int n, t;
	int m;
	int curr;

	bool succ;

	while (true) {
					cin >> n;
					if (n == 0) break;

					m = 2;
					while (true) {
									t = n-1;
									curr = -1;
									succ = true;
									while (t > 1) {
										curr = (curr+m) % t;
										//cout << "attempt " << m << " " << curr << " " << t << endl;
										if (curr == 0) {
														succ = false;
														break;
										}
										t--;
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

