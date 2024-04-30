#include <iostream>

using namespace std;

int main() {

	int t;
	int n;
	int last, current;
	int h, l;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
    last = -1; current = -1;
    h = 0; l = 0;
		for (int j = 0; j < n; j++) {
						cin >> current;
						if (last >= 0) {
										if (current > last) h++;
										if (current < last) l++;
            }
						last = current;
		}

   cout << "Case " << (i+1) << ": " << h << " " << l << endl;


		}
  return 0;

}

