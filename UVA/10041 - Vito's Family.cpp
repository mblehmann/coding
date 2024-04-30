#include <iostream>
#include <stdlib.h>

using namespace std;

int compare (const void *a, const void *b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int t, r;
	int s[500];
	int pos;
	int dist;
	
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> r;
		for (int j = 0; j < r; j++) {
			cin >> s[j];
		}
		
		qsort(s, r, sizeof(int), compare);
		pos = s[(r-1)/2];
		
		dist = 0;
		for (int j = 0; j < r; j++) {
			dist += (max(pos, s[j]) - min(pos, s[j]));
		}
		
		cout << dist << endl;
	}
	
	return 0;
}
