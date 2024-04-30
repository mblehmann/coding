#include <iostream>
#include <stdlib.h>

using namespace std;

int compare (const void *a, const void *b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int n;
	int a[10000];
	int s;
	int median;
	
	s = 0;
	while (cin >> a[s]) {
		s++;
		qsort(a, s, sizeof(int), compare);
		if ((s%2) == 1) {
			cout << a[s/2] << endl;
		} else {
			cout << (a[s/2]+a[(s-1)/2])/2 << endl;
		}
	}
	
	return 0;
}
