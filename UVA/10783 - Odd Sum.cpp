#include <iostream>

using namespace std;

int main() {

	int t;
	int a, b;
	int s;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a;
		cin >> b;

		s = 0;

		if (a % 2 == 0) a++;
		if (b % 2 == 0) b--;

		for (int j = a; j <= b; j += 2) s += j;

   cout << "Case " << (i+1) << ": " << s << endl;


		}
  return 0;

}

