#include <iostream>

using namespace std;

int main() {

    //char c[10], d[10];
    unsigned long long int a, b;
    int n1, n2;
    int c, res;
    bool carry[10];

    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        res = 0;
        for (int i = 0; i < 10; i++) {
            n1 = a%10;
            a = (a-n1)/10;
            //c[i] = n+48;
            
            n2 = b%10;
            b = (b-n2)/10;
            //d[i] = n+48;

            c = 0;
            if (i == 0) {
                c = 0;
            } else if (carry[i-1]) {
                c = 1;
            }
            
            if (n1 + n2 + c >= 10) {
                carry[i] = true;
                res++;
            } else {
                carry[i] = false;
            }

        }
        if (res == 0) {
            cout << "No carry operation." << endl;
        } else if (res == 1) {
            cout << "1 carry operation." << endl;
        } else {
            cout << res << " carry operations." << endl;
        }
                                    
    }

    return 0;
}
