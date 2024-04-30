#include <iostream>

using namespace std;

int n, m;
int g[30][3];
int q[30];
bool v[30][30];

int arv[30];

int mv;

int addEdge(int c, int s) {

				if (s > mv) {
								mv = s;
				}

				arv[s] = c;
				int next;

				for (int i = 0; i < q[c]; i++) {
								next = g[c][i];
								if (!v[c][next]) {

									v[c][next] = true;
									v[next][c] = true;

									addEdge(next, s+1);

									v[c][next] = false;
									v[next][c] = false;
								}
				}

				return s;
}

int main() {

	int s, t;
	int next;

	while (true) {
					cin >> n >> m;
					if (n == 0 && m == 0) break;

					for (int i = 0; i < n; i++) {
									for (int j = 0; j < 3; j++) {
													g[i][j] = 0;
													g[j][i] = 0;
									}
					}
					for (int i = 0; i < n; i++) {
									q[i] = 0;
									for (int j = 0; j < n; j++) {
													v[i][j] = false;
													v[j][i] = false;
									}
					}

					for (int i = 0; i < m; i++) {
									cin >> s >> t;
									g[s][q[s]] = t;
									g[t][q[t]] = s;

									q[s]++;
									q[t]++;
					}

					mv = 0;
					for (int i = 0; i < n; i++) {
									addEdge(i, 0);
					}
					cout << mv << endl;

	}
	
	return 0;

}

