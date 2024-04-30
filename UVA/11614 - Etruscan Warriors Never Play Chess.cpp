#include <iostream>
#include <math.h>

using namespace std;

int main() {

				int t;
  unsigned long long int n, r;
					cin >> t;
					for (int i = 0; i < t; i++) {
	        cin >> n;
									 r = long(floor((sqrt(8*n+1)-1)/2));
					cout << r << endl;
	}
    



				
				
				return 0;

}

