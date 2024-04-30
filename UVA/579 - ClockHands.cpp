#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	int h, m;
	char c;
	double ah, am, rang;
	
	while (true) {
		cin >> h >> c >> m;
		if (h == 0 && m == 0) break;
		
		am = m * 6;
		ah = 30 * h + 0.5 * m;

		rang = max(am, ah) - min(am, ah);
		if (rang > 180) {
			rang = 360 - rang;
		}
		
		printf("%.3f\n", rang);
	}
	
	return 0;
}
