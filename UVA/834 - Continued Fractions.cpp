#include <iostream>

using namespace std;

int main() {

 int n, m;
 int r[1000];
 int c;

 int a;

 while (cin >> n >> m) {
  c = 0;

	while (m != 1) {
	 r[c] = n/m;
	 a = m;
	 m = n-(r[c]*m);
	 n = a;

	 c++;
	}
	r[c] = n;
  cout << "[" << r[0] << ";";
	for (int i = 1; i <= c; i++) {
	 cout << r[i];
	 if (i != c) {
					 cout << ",";
	 }
	}
  cout << "]" << endl;
 }

 return 0;
}
