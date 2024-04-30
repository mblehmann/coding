#include <iostream>

using namespace std;

int main() {

 int m, n;
 int cost;
 int p;

 int cb[51][51];
 int vb[51][51];
 bool b[51][51];

 int x, y;
 int total, current;

 int d, l;

 cin >> m >> n;
 cin >> cost;
 cin >> p;

 for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++) {
   b[i][j] = false;
   cb[i][j] = 0;
   vb[i][j] = 0;
  }
 }

 for (int i = 0; i < p; i++) {
  cin >> x >> y;
  cin >> vb[x][y] >> cb[x][y];
  b[x][y] = true;
 }

 total = 0;
 while (cin >> x) {
  cin >> y >> d >> l;

  current = 0;

  while (l > 0) {
   l--;

   switch(d) {

    case 0: x++;
            if (x == m) {
             x--;
             d = 3;
             l -= cost;
            } else {
             if (b[x][y]) {
              l -= cb[x][y];
              d = 3;
              if (l > 0) current += vb[x][y];
              x--;
             }
            }
            break;

    case 1: y++;
            if (y == n) {
             y--;
             d = 0;
             l -= cost;
            } else {
             if (b[x][y]) {
              l -= cb[x][y];
              d = 0;
              if (l > 0) current += vb[x][y];
              y--;
             }
            }
            break;

    case 2: x--;
            if (x == 0) {
             x++;
             d = 1;
             l -= cost;
            } else {
             if (b[x][y]) {
              l -= cb[x][y];
              d = 1;
              if (l > 0) current += vb[x][y];
              x++;
             }
            }
            break;

    case 3: y--;
            if (y == 0) {
             y++;
             d = 2;
             l -= cost;
            } else {
             if (b[x][y]) {
              l -= cb[x][y];
              d = 2;
              if (l > 0) current += vb[x][y];
              y++;
             }
            }
            break;

   }

  }

  cout << current << endl;
  total += current;
 }

 cout << total << endl;

 return 0;

}
