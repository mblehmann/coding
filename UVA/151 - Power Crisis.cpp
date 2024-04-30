#include <iostream>

using namespace std;

int main() {

 int n;
 bool regioes[100];
 int toff, next, j;
 bool ready;
 int resposta;

 while (true) {

  cin >> n;

  if (n == 0) break;

//  cout << "Testando " << n << endl;

  ready = false;
  int i = 1;
  while (!ready) {
//  for (int i = 1; i < n && !ready; i++) {
   for (int k = 0; k < n; k++) {
     regioes[k] = false;
   }

//   cout << "Marcando " << i << endl;

   regioes[0] = true;
//   cout << "1 ";
   toff = 1;
   next = 0;
   while (toff < n) {
    j = i;
    while (j > 0) {
     next = (next+1)%n;
     if (!regioes[next]) {
      j--;
     }
    }
    regioes[next] = true;
//    cout << next << " ";
    toff++;

    if (next == 12) {
     if (toff == n) { ready = true; resposta = i; }
     break;
    }
     
   }
//   cout << endl;
   i++;

  }

  cout << resposta << endl;

 }

 return 0;

}
