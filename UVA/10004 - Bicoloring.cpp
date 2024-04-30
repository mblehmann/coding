#include <iostream>

using namespace std;

int main() {
	
	int n, l;
	int s, t;
	bool bi;
	bool graph[200][200];
	int color[200];
	int fila[200];
	int c, size;
	int nodo;
	
	while (true) {
		cin >> n;
		if (n == 0) break;
		
		size = 0;
		c = 0;
		bi = true;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				graph[i][j] = false;
				graph[j][i] = false;
				color[i] = 0;
			}
		}
		
		cin >> l;
		for (int i = 0; i < l; i++) {
			cin >> s >> t;
			graph[s][t] = true;
		}
		
		fila[size] = 0;
		color[size] = 1;
		s++;
		while (c < n && bi) {
			nodo = fila[c];
			for (int i = 0; i < n; i++) {
				if (graph[c][i]) {
					if (color[i] == 0) {
						color[i] = (color[c]+1) % 2;
						fila[size] = i;
						size++;
					} else if (color[i] == color[c]) {
						bi = false;
						break;
					}
				}
			}
			c++;
		}
		
		if (bi) {
			cout << "BICOLORABLE." << endl;
		} else {
			cout << "NOT BICOLORABLE." << endl;
		}

	}	
	
	return 0;
}
