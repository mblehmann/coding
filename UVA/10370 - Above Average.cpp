#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	int c, n;	
	int notas[1000];
	int soma, above;
	double media, perc;
	
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> n;
		soma = 0;
		above = 0;

		for (int j = 0; j < n; j++) {
			cin >> notas[j];
			soma += notas[j];
		}
		media = soma/n;
		for (int j = 0; j < n; j++) {
			if (notas[j] > media) {
				above++;
			}
		}
		perc = (((double) above)/n) * 100;
		
		printf("%.3f%%\n", perc);
	}
	
	return 0;
}
