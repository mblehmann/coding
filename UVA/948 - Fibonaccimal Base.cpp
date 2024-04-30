#include <iostream>

using namespace std;

int main() {

 int fib[41];
 fib[0] = 0;
 fib[1] = 1;
 for (int i = 2; i < 41; i++) {
	fib[i] = fib[i-1] + fib[i-2];
 }

 int n;
 int f;
 int t;
 int c;
 int m[41];
 cin >> n;

 for (int i = 0; i < n; i++) {
  cin >> f;
  t = f;
	for (int i = 0; i < 40; i++) {
   m[i] = 0;
  }
  c = 1;
  while (t > 0) {
			 		for (int j = 40; j > 1; j--) {
    if (t >= fib[j]) {
	   if (c == 1) { c = j; }
	   m[j] = 1;
	   t -= fib[j];
		 j--;
	  }
   }
  }
  
  cout << f << " = ";
  for (int i = c; i > 1; i--) {
   cout << m[i];
  }
  cout << " (fib)" << endl;
 } 
 
 return 0;
 
}
