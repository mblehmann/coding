#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n, l;
	char c [9];
	char d;
	int r;
	while (true) {
	  cin >> n;
	  if (n == 0) {
	    break;
	  }
      cin >> c;
      for (int j = 0; j < 5; j++) {
		  if (j %2 == 1) { r = n;} else { r = 1;}
		  for (int k = 0; k < r; k++) {
			  for (int i = 0; i < 9; i++) {
				  if (c[i] == '\0') {
					  break;
				  } else {
					  if (i > 0) {
						cout << " ";
					}
				}
				  
				  switch(j) {
					  case 0:
					   cout << " ";
					   d = '-';
					   if (c[i] == '1' || c[i] == '4') {
						   d = ' ';
					   }
						for (int m = 0; m < n; m++)
						cout << d;
					    cout << " ";
					break;  

					  case 1:
					  d = ' ';
					   if (c[i] == '4' || c[i] == '5' || c[i] == '6' || c[i] == '8' || c[i] == '9' || c[i] == '0')
						   d = '|';
						   cout << d;
						for (int m = 0; m < n; m++)
						cout << " ";
						
                      d = '|';

						if (c[i] == '5' || c[i] == '6')
						   d = ' ';
						   cout << d;
						
						break;
						
					  case 2:
					   cout << " ";
					   d = '-';
					   if (c[i] == '1' || c[i] == '7' || c[i] == '0') {
						   d = ' ';
					   }
						for (int m = 0; m < n; m++)
						cout << d;
					    cout << " ";
					break; 
					
					  case 3:
					  d = ' ';
					   if (c[i] == '2' || c[i] == '6' || c[i] == '8' || c[i] == '0')
						   d = '|';
						   cout << d;
						for (int m = 0; m < n; m++)
						cout << " ";
						
                      d = '|';

						if (c[i] == '2')
						   d = ' ';
						   cout << d;
						
						break;
					  
					  
					  
					  
					  
					  case 4:
					   cout << " ";
					   d = '-';
					   if (c[i] == '1' || c[i] == '4' || c[i] == '7') {
						   d = ' ';
					   }
						for (int m = 0; m < n; m++)
						cout << d;
					    cout << " ";
					break; 
				  
				  
				  }
			  }
			  cout << endl;
		  }
	  }
			  cout << endl;
  }
	
	return 0;
}
