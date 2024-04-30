#include <iostream>
#include <stdlib.h>

using namespace std;

struct tupla {
				int c, n;
};

int compare(const void * a, const void * b) {
				if ((*(tupla*)b).n != (*(tupla*)a).n) return ( (*(tupla*)b).n - (*(tupla*)a).n );
				else return ( (*(tupla*)a).c - (*(tupla*)b).c );
}

int main() {

				tupla freq[26];

				int n;
				char c;
				cin >> n;
				for (int i = 0; i < 26; i++) {
								freq[i].c = i;
								freq[i].n = 0;
				}

				while (cin >> c) {
								if (c >= 'A' && c <= 'Z') {
												freq[c-65].n++;
								}
								else if (c >= 'a' && c <= 'z') {
												freq[c-97].n++;
								}
				}

				qsort(freq, 26, sizeof(tupla), compare);

				for (int i = 0; i < 26; i++) {
								if (freq[i].n > 0)
								cout << ((char) (freq[i].c+65)) << " " << freq[i].n << endl;
				}

				return 0;
}


