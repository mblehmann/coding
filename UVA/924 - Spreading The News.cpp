#include <iostream>

using namespace std;

int main() {

				int e;
				int n;
				int t;

				int f[2500][15];
				int fc[2500];

				int s;
				int c;
				int d;
				int b;
				int l[2500];
				int lsize;
				int lcurr;

				bool v[2500];
				int days[2500];
        int md;
				int mb;

				cin >> e;
				for (int i = 0; i < e; i++) {
								cin >> n;
								fc[i] = n;
								for (int j = 0; j < n; j++) {
												cin >> f[i][j];
								}
				}

				cin >> t;


				for (int i = 0; i < t; i++) {

								cin >> s;
								if (fc[s] == 0) cout << 0 << endl;
								else {
                    for (int i = 0; i < e; i++) {
														v[i] = false;
										}

										md = 0;
										mb = 0;

										d = 1;
										b = 0;
										lsize = 0;
										lcurr = 0;
										
										l[lsize] = s;
										lsize++;
										days[s] = 1;
										v[s] = true;

										while (lcurr < lsize) {
														c = l[lcurr];
//														cout << "curr: " << c << endl;
														if (days[c] != d) {
																if (b > mb) { mb = b; md = d; }
																b = 0;
														}
														d = days[c];

														for (int i = 0; i < fc[c]; i++) {
//																		cout << c << " -> " << f[c][i] << " " << v[f[c][i]] << endl;
																		if (!v[f[c][i]]) {
//																						cout << "added: " << d << " " << f[c][i] << endl;
																						l[lsize] = f[c][i];
																						lsize++;
																						v[f[c][i]] = true;
																						days[f[c][i]] = d+1;
																						b++;
																		}
														}
														lcurr++;
										}
										cout << mb << " " << md << endl;
								}
				}

				return 0;

}

