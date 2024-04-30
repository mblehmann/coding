#include <iostream>

using namespace std;

int main() {

 int matriz[26][26];
 int size[26];
 int pos[26];
 int n;

 char comando[6];
 char acao[6];
 int a, b;
 bool remove;
 int removed;
 int caixa;
 int num;

 for (int i = 0; i < 26; i++) {
  for (int j = 0; j < 26; j++) {
   matriz[i][j] = 0;
  }
 }

 for (int i = 0; i < 26; i++) {
  size[i] = 1;
  pos[i] = i;
  matriz[i][0] = i;
 }

 cin >> n;

 while (true) {
  cin >> comando;
  if (comando[0] == 'q') break;

  cin >> a >> acao >> b;
  if (pos[a] != pos[b]) {
   if (comando[0] == 'm' && acao[1] == 'n') {
    remove = false;
    removed = 0;
    caixa = pos[a];
    for (int i = 0; i < size[caixa]; i++) {
     if (remove) { 
      num = matriz[caixa][i];
      matriz[num][size[num]] = num;
      pos[num] = num;
      size[num]++;
      removed++;
     } else if (matriz[caixa][i] == a) {
      remove = true;
     }
    }
    size[caixa] -= removed;

    remove = false;
    removed = 0;
    caixa = pos[b];
    for (int i = 0; i < size[caixa]; i++) {
     if (remove) { 
      num = matriz[caixa][i];
      matriz[num][size[num]] = num;
      pos[num] = num;
      size[num]++;
      removed++;
     } else if (matriz[caixa][i] == b) {
      remove = true;
     }
    }
    size[caixa] -= removed;

    size[pos[a]]--;
    pos[a] = caixa;
    matriz[caixa][size[caixa]] = a;
    size[caixa]++;

   }
   if (comando[0] == 'm' && acao[1] == 'v') {
    remove = false;
    removed = 0;
    caixa = pos[a];
    for (int i = 0; i < size[caixa]; i++) {
     if (remove) { 
      num = matriz[caixa][i];
      matriz[num][size[num]] = num;
      pos[num] = num;
      size[num]++;
      removed++;
     } else if (matriz[caixa][i] == a) {
      remove = true;
     }
    }
    size[caixa] -= removed;

    caixa = pos[b];
    size[pos[a]]--;
    pos[a] = caixa;
    matriz[caixa][size[caixa]] = a;
    size[caixa]++;

   }
   if (comando[0] == 'p' && acao[1] == 'n') {
    remove = false;
    removed = 0;
    caixa = pos[b];
    for (int i = 0; i < size[caixa]; i++) {
     if (remove) { 
      num = matriz[caixa][i];
      matriz[num][size[num]] = num;
      pos[num] = num;
      size[num]++;
      removed++;
     } else if (matriz[caixa][i] == b) {
      remove = true;
     }
    }
    size[caixa] -= removed;


    remove = false;
    removed = 0;
    caixa = pos[a];
    for (int i = 0; i < size[caixa]; i++) {
     if (matriz[caixa][i] == a) {
      remove = true;
     }
     if (remove) { 
      num = matriz[caixa][i];
      matriz[pos[b]][size[pos[b]]] = num;
      pos[num] = pos[b];
      size[pos[b]]++;
      removed++;
     }
    }
    size[caixa] -= removed;  

   }
   if (comando[0] == 'p' && acao[1] == 'v') {
    remove = false;
    removed = 0;
    caixa = pos[a];
    for (int i = 0; i < size[caixa]; i++) {
     if (matriz[caixa][i] == a) {
      remove = true;
     }
     if (remove) { 
      num = matriz[caixa][i];
      matriz[pos[b]][size[pos[b]]] = num;
      pos[num] = pos[b];
      size[pos[b]]++;
      removed++;
     } 
    }
    size[caixa] -= removed;

   }


  }

 }
  for (int i = 0; i < n; i++) {
   cout << i << ":";
   if (size[i] > 0) {
   	cout << " ";
   }
   for (int j = 0; j < size[i]; j++) {
    cout << matriz[i][j];
    if (j != size[i]-1) {
     cout << " ";
    }
   }
   cout << endl;
  }

 return 0;

}
