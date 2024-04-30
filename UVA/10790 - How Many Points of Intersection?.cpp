#include <iostream>

using namespace std;

int main() {

 long long int mat[20010];
 int fat;
 int m, n;
 int c;

 fat = 0;
 for (int i = 0; i <= 20000; i++) {
  mat[i] = fat;
  fat += i;
 }

 c = 1;
 while (true) {
  cin >> m >> n;
  if (m == 0 && n == 0) break;
  cout << "Case " << c << ": " << (mat[m] * mat[n]) << endl;
  c++;
 }

 return 0;

}
