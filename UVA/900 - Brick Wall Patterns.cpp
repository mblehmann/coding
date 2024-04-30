#include <iostream>

using namespace std;

int main() {

 int fib[51];
 fib[1] = 1;
 fib[2] = 2;
 fib[3] = 3;
 for (int i = 4; i <= 51; i++) {
	fib[i] = fib[i-1] + fib[i-2];
 }

 int n;
 while (true) {
  cin >> n;
	if (n == 0) break;
	cout << fib[n] << endl;
 }
 
 return 0;
 
}
