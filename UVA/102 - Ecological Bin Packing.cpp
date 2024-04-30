#include <iostream>

using namespace std;

int main() {

 int lixos[3][3];
 int n[9];

 int sol[6];
 int max;
 int total;
 // Brown Green Clear

 while (cin >> n[0]) {
  total = 0;
  for (int i = 1; i < 9; i++) {
   cin >> n[i];
  }
  for (int i = 0; i < 3; i++) {
   for (int j = 0; j < 3; j++) {
    lixos[i][j] = n[i*3+j];
    total += n[i*3+j];
   }
  }

  max = 0;

  sol[0] = lixos[0][0] + lixos[1][2] + lixos[2][1];
  sol[1] = lixos[0][0] + lixos[1][1] + lixos[2][2];
  sol[2] = lixos[0][2] + lixos[1][0] + lixos[2][1];
  sol[3] = lixos[0][2] + lixos[1][1] + lixos[2][0];
  sol[4] = lixos[0][1] + lixos[1][0] + lixos[2][2];
  sol[5] = lixos[0][1] + lixos[1][2] + lixos[2][0];

  for (int i = 0; i < 6; i++) {
   if (sol[i] > max) {
    max = sol[i];
   }
  }

  for (int i = 0; i < 6; i++) {
   if (sol[i] == max) {
    switch(i) {
     case 0: cout << "BCG "; break;
     case 1: cout << "BGC "; break;
     case 2: cout << "CBG "; break;
     case 3: cout << "CGB "; break;
     case 4: cout << "GBC "; break;
     case 5: cout << "GCB "; break;
    }
    cout << (total - max) << endl;
    break;
   }
  }

 }

 return 0;

}
