#include <iostream>

using namespace std;

int main() {

 int n;
 int in;
 int g[100][100];

 int linha[100];
 int coluna[100];

 int linhasImpares;
 int colunasImpares;

 int line;
 int column;

 while (true) {
  cin >> n;
  if (n == 0) break;

  for (int i = 0; i < n; i++) {
   linha[i] = 0;
   coluna[i] = 0;
  }

  for (int i = 0; i < n; i++) {
   for (int j = 0; j < n; j++) {
    cin >> g[i][j];
    if (g[i][j] == 1) {
     linha[i]++;
     coluna[j]++;
    }
   }
  }
 
  linhasImpares = 0;
  colunasImpares = 0;

  line = -1;
  column = -1;

  for (int i = 0; i < n; i++) {
   if (linha[i] % 2 == 1) {
    linhasImpares++;
    if (linhasImpares == 1) {
     line = i+1;
    }
   }
   if (coluna[i] % 2 == 1) {
    colunasImpares++;
    if (colunasImpares == 1) {
     column = i+1;
    }
   }
  }

  if (linhasImpares == 0 && colunasImpares == 0) {
   cout << "OK" << endl;
  } else if (linhasImpares == 1 && colunasImpares == 1) {
   cout << "Change bit (" << line << "," << column << ")" << endl;
  } else {
   cout << "Corrupt" << endl;
  }

 }

 return 0;

}
