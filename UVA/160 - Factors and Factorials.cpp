#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	int n;
	int div[101][25];
	int last[101];
	int primos[25];
	primos[0] = 2;
	primos[1] = 3;
	primos[2] = 5;
	primos[3] = 7;
	primos[4] = 11;
	primos[5] = 13;
	primos[6] = 17;
	primos[7] = 19;
	primos[8] = 23;
	primos[9] = 29;
	primos[10] = 31;
	primos[11] = 37;
	primos[12] = 41;
	primos[13] = 43;
	primos[14] = 47;
	primos[15] = 53;
	primos[16] = 59;
	primos[17] = 61;
	primos[18] = 67;
	primos[19] = 71;
	primos[20] = 73;
	primos[21] = 79;
	primos[22] = 83;
	primos[23] = 89;
	primos[24] = 97;	
	
	int c;
	for (int i = 0; i < 25; i++) {
		div[1][i] = 0;
	}
	for (int i = 2; i <= 100; i++) {
		c = i;
		last[i] = 0;
		for (int p = 0; p < 25; p++) {
			div[i][p] = div[i-1][p];
			if (div[i-1][p] > 0) {
				last[i] = p;
			}
			while ((c % primos[p]) == 0) {
				div[i][p]++;
				c /= primos[p];
				last[i] = max(last[i], p);
			}
		}
	}
	while (true) {
		cin >> n;
		if (n == 0) break;
		
		printf("%3d! =", n);
		for (int i = 0; i <= last[n]; i++) {
			if (i == 15) {
				cout << endl << "      ";
			}
			printf("%3d", div[n][i]);
		}
		cout << endl;
	}
	
	return 0;
}
