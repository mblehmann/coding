#include <iostream>

using namespace std;

int main() {

				int stacks[50];
				int soma;
				int n;
				int b;
				int media;
				int set;
				set = 1;

				while (true) {
								cin >> n;
								if (n == 0) break;

								soma = 0;
								b = 0;
								for (int i = 0; i < n; i++) {
												cin >> stacks[i];
												soma += stacks[i];
								}
								media = soma/n;
								for (int i = 0; i < n; i++) {
												if (stacks[i] > media) {
																b += (stacks[i]-media);
												}
								}
								cout << "Set #" << set << endl;
								cout << "The minimum number of moves is " << b << "." << endl;
								cout << endl;

								set++;
				}

				return 0;
}
