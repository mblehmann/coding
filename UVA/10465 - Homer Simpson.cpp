#include <iostream>

using namespace std;

int main() {

	int m, n, t;
	int mmax, nmax;

  int c;
  int a, b, d;
  int f, g;

	int tmin, hmax;

	while (cin >> m >> n >> t) {

    tmin = t;
		hmax = 0;

    mmax = t/m;
		nmax = t/n;
    for (int i = 0; i <= mmax; i++) {
     a = m*i;
     b = (t-a)/n;
     c = a + b*n;
		 d = t - c;
//cout << i << " " << b << " " << d << endl; 
		 if (d < tmin) {
					tmin = d;
			    hmax = i + b;
      } else if (d == tmin && i+b > hmax) {
							hmax = i + b;
			}
		}
    for (int i = 0; i <= nmax; i++) {
     a = n*i;
     b = (t-a)/m;
     c = a + b*m;
		 d = t - c;
//cout << i << " " << b << " " << d << endl; 
		 if (d < tmin) {
					tmin = d;
			    hmax = i + b;
      } else if (d == tmin && i+b > hmax) {
							hmax = i + b;
			}
    }
    cout << hmax;
		if (tmin > 0) cout << " " << tmin ;
		cout << endl;
	}
  
	return 0;

}

