#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int d, n;
int boxes[30][11];
int a;
bool t;

bool fits[30][30];

int sol[30];
int cur[30];
int s;

int compare(const void *a, const void *b) {
 return ( *(int*)a - *(int*)b );
}

int fit(int *a, int *b, int s) {
 for (int i = 0; i < s; i++) {
  if (a[i] >= b[i]) return false;
 }
 return true;
}

int back(int index, int size) {
 int c[30];
 int num = 0;
 for (int i = index-1; i >= 0; i--) {
  if (fits[i][index]) {
   c[num] = i;
   num++;
  }
 }
 
 if (num == 0) {
  if (size > s) {
   for (int i = 0; i < size; i++) {
    sol[i] = cur[i];
   }
   s = size;
  }
 } else {
  for (int i = 0; i < num; i++) {
   cur[size] = boxes[c[i]][d];
   back(c[i], size+1);
  }
 } 

}

int main() {

 while (cin >> n >> d) {
  for (int i = 0; i < n; i++) {
   for (int j = 0; j < d; j++) {
    cin >> boxes[i][j];
   }
   boxes[i][d] = i+1;
  }

  for (int i = 0; i < n; i++) {
   qsort(boxes[i], d, sizeof(int), compare);
  }

  for (int i = 0; i < n; i++) {
   for (int j = 0; j < n-i-1; j++) {
    t = false;
    for (int k = 0; k < d; k++) {
     if (boxes[j][k] < boxes[j+1][k]) break;
     if (boxes[j][k] > boxes[j+1][k]) { t = true; break; }
    }
    if (t) {
     for (int k = 0; k <= d; k++) {
      a = boxes[j][k];
      boxes[j][k] = boxes[j+1][k];
      boxes[j+1][k] = a;
     }
    }
   }
  }
 
  s = 0;

  for (int i = 0; i < n; i++) {
   for (int j = 0; j < n; j++) {
    fits[i][j] = fit(boxes[i], boxes[j], d);
   }
  }

  for (int i = n-1; i >= 0; i--) {
   cur[0] = boxes[i][d];
   back(i, 1);
  }

  cout << s << endl;
  for (int i = s-1; i >= 0; i--) {
   cout << sol[i];
   if (i > 0) {
    cout << " ";
   }
  }
  cout << endl;

 }

 return 0;

}
