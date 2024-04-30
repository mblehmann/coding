#include <iostream>

using namespace std;

int main() {

	int t, n, p;
	int *h, *y;
 
	int cd, g;
 
	cin >> t;
	for (int i = 0; i < t; i++) {
	 g = 0;
	 cin >> n;
	 y = new int[n+1];
	 for (int j = 1; j < n+1; j++) {
		 y[j] = 0;
	 }
	 cin >> p;
	 h = new int[p];
	 for (int j = 0; j < p; j++) {
		 cin >> h[j];
		 cd = 0;
		 while (cd <= n) {
			 cd += h[j];
			 y[cd] = 1;
		 }
	 }
	 
	 for (int j = 1; j < n+1; j++) {
		 if (y[j] == 1) {
			 if (j % 7 != 6 && j % 7 != 0) {
				 g++;
			 }
		 }
	 }
	 cout << g << endl;
 }
 return 0;
}
