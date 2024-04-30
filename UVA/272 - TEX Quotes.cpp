#include <iostream>

using namespace std;

int main() {

 char c;
 int status;
 status = false;

 while (cin.peek() >= 0) {
  cin.get(c);
  switch (c) {
   case 34:
    if (!status) { cout << "``"; status = true; }
    else { cout << "''"; status = false; }
    break;
   default:
    cout << c;
  }
 }

 return 0;

}
