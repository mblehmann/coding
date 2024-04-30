#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int n;
	bool h1[13];
	bool h2[13];

	char op1[4];
	char op2[4];
	int os1, os2;

  char b;

	int n1, n2;
	int x;

	bool trans[16][4];
	trans[0][0] = false;
	trans[0][1] = false;
	trans[0][2] = false;
	trans[0][3] = false;

	trans[1][0] = false;
	trans[1][1] = false;
	trans[1][2] = false;
	trans[1][3] = true;
	
	trans[2][0] = false;
	trans[2][1] = false;
	trans[2][2] = true;
	trans[2][3] = false;

	trans[3][0] = false;
	trans[3][1] = false;
	trans[3][2] = true;
	trans[3][3] = true;

	trans[4][0] = false;
	trans[4][1] = true;
	trans[4][2] = false;
	trans[4][3] = false;

	trans[5][0] = false;
	trans[5][1] = true;
	trans[5][2] = false;
	trans[5][3] = true;

	trans[6][0] = false;
	trans[6][1] = true;
	trans[6][2] = true;
	trans[6][3] = false;

	trans[7][0] = false;
	trans[7][1] = true;
	trans[7][2] = true;
	trans[7][3] = true;

	trans[8][0] = true;
	trans[8][1] = false;
	trans[8][2] = false;
	trans[8][3] = false;

	trans[9][0] = true;
	trans[9][1] = false;
	trans[9][2] = false;
	trans[9][3] = true;

	trans[10][0] = true;
	trans[10][1] = false;
	trans[10][2] = true;
	trans[10][3] = false;

	trans[11][0] = true;
	trans[11][1] = false;
	trans[11][2] = true;
	trans[11][3] = true;

	trans[12][0] = true;
	trans[12][1] = true;
	trans[12][2] = false;
	trans[12][3] = false;

	trans[13][0] = true;
	trans[13][1] = true;
	trans[13][2] = false;
	trans[13][3] = true;

	trans[14][0] = true;
	trans[14][1] = true;
	trans[14][2] = true;
	trans[14][3] = false;

	trans[15][0] = true;
	trans[15][1] = true;
	trans[15][2] = true;
	trans[15][3] = true;
	
	h1[0] = false;
	h2[0] = false;
	
	cin >> n;
	for (int i = 0; i < n; i++) {

					cin >> op1;
					cin >> b;
					cin >> op2;
					for (int i = 0; i < 4 && op1[i] != '\0'; i++) {
						os1 = i+1;
					}
					for (int i = 0; i < 4 && op2[i] != '\0'; i++) {
						os2 = i+1;
					}
					for (int i = 0; i < 13; i++) {
									h1[i] = false;
									h2[i] = false;
					}

					for (int i = 0; i < 4 && op1[i] != '\0'; i++) {
									switch (op1[i]) {
										case '0': x = 0; break;
										case '1': x = 1; break;
										case '2': x = 2; break;
										case '3': x = 3; break;
										case '4': x = 4; break;
										case '5': x = 5; break;
										case '6': x = 6; break;
										case '7': x = 7; break;
										case '8': x = 8; break;
										case '9': x = 9; break;
										case 'A': x = 10; break;
										case 'B': x = 11; break;
										case 'C': x = 12; break;
										case 'D': x = 13; break;
										case 'E': x = 14; break;
										case 'F': x = 15; break;
									}
									for (int j = 0; j < 4; j++) {
										h1[12-(os1*4)+1+j] = trans[x][j];
									}
									os1--;
					}
					for (int i = 0; i < 4 && op2[i] != '\0'; i++) {
									switch (op2[i]) {
										case '0': x = 0; break;
										case '1': x = 1; break;
										case '2': x = 2; break;
										case '3': x = 3; break;
										case '4': x = 4; break;
										case '5': x = 5; break;
										case '6': x = 6; break;
										case '7': x = 7; break;
										case '8': x = 8; break;
										case '9': x = 9; break;
										case 'A': x = 10; break;
										case 'B': x = 11; break;
										case 'C': x = 12; break;
										case 'D': x = 13; break;
										case 'E': x = 14; break;
										case 'F': x = 15; break;
									}
									for (int j = 0; j < 4; j++) {
										h2[12-(os2*4)+1+j] = trans[x][j];
									}
									os2--;
					}
					n1 = 0;
					for (int i = 0; i < 13; i++) {
									if (h1[i]) {
													cout << "1";
													n1 += pow(2, 12-i);
									} else {
													cout << "0";
									}
					}
					cout << " " << b << " ";
					n2 = 0;
					for (int i = 0; i < 13; i++) {
									if (h2[i]) {
													cout << "1";
													n2 += pow(2, 12-i);
									} else {
													cout << "0";
									}
					}
					cout << " = ";
					if (b == '+') {
									cout << n1+n2 << endl;
					} else {
									cout << n1-n2 << endl;
					}
	}

	return 0;

}


