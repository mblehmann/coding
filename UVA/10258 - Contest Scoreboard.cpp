#include <iostream>

using namespace std;

struct z {
	int p;
	z *n;
};

int main() {

	int t, n, p;
	cin >> t;
	n = 9;
	p = 101;
 	
	int *acertos, *tempo;
	bool *ok;
	
	int tempop[p][n];
	int matriz[p][n];
	
	int par, pro, tem;
	char s;
	
	struct z v;
	struct z *c;
		
	char l[256];
	
	for (int i = 0; i < t; i++) {
		
	 v.p = -1;
	 acertos = new int[p];
	 tempo = new int[p];
	 ok = new bool[p];
	 for (int j = 1; j < p; j++) {
		 acertos[j] = 0;
		 tempo[j] = 0;
		 ok[j] = false;
	 }
	 
 	for (int j = 1; j < p; j++) {
		for (int k = 0; k < n; k++) {
			matriz[j][k] = 0;
			tempop[j][k] = 0;
		}
	} 

	 
	 //while (cin >> par >> pro >> tem >> s) {
		 
	 while (cin >> par >> pro >> tem >> s) {
	 switch (s) {
		 case 'C':
		    if (matriz[par][pro] == 0) {
				acertos[par]++;
				tempo[par] += (tem+tempop[par][pro]);
				ok[par] = true;
				matriz[par][pro] = 1;
			}
			break;
		 
		 case 'I':
		    if (matriz[par][pro] == 0) {
				tempop[par][pro] += 20;
				ok[par] = true;
			}
			break;
		 
		 case 'R':
		 case 'U':
		 case 'E':
			ok[par] = true;
			break;
		}
		cin.getline(l, 256);
		if (cin.peek() == 10 || cin.peek() == -1) {
			break;
		}
	}
		
		
	 int b, ba, bt;
	 for (int j = 1; j < p; j++) {
		 b = 0; ba = 0; bt = 0;
		 for (int k = 1; k < p; k++) {
			 if (ok[k]) {
				 if (b == 0) {
					 b = k;
					 ba = acertos[k];
					 bt = tempo[k];
				 } else {
					 if (acertos[k] > ba || (acertos[k] == ba && tempo[k] < bt)) {
						 b = k;
						 ba = acertos[k];
						 bt = tempo[k];
					 }
				 }
			 }
		 }
		 //if (b > 0 && ba > 0) {
		 if (b > 0) {
			cout << b << " " << ba << " " << bt << endl;
		 }
		 ok[b] = false;
		
	 }
	 
	 if (i < t-1) {
		cout << endl;
	}
		
 }
 return 0;
}


			 /*
			 if (v.p == -1) {
				 v.p =j;
			 } else {
				 c = &v;
				 while (true) {
					 if (acertos[j] > acertos[c->p]) {
						 z *x = new z();
						 x->p = acertos[c->p];
						 x->n = c->n->n;
						 
						 c->p = j;
						 c->n->n = x;
						 break;
					 } else if (acertos[j] == acertos[c->p]) {
						if (tempo[j] < tempo[c->p]) {
						 z *x = new z();
						 x->p = acertos[c->p];
						 x->n = c->n->n;
						 
						 c->p = j;
						 c->n->n = x;
						 break;
					    } else {							
						 if (c->n == NULL) {
							 z *x = new z();
						     x->p = j;
						     x->n = NULL;
						  
						     c->n->n = x;
						     break;
						 } else {
						     c = c->n;
						 }
					    } 
					 } else {							
						 if (c->n == NULL) {
							 z *x = new z();
						     x->p = j;
						     x->n = NULL;
						  
						     c->n->n = x;
						     break;
						 } else {
						     c = c->n;
						 }
					 }
				 }
			 }
			 */
			
//			 cout << j << " " << acertos[j] << " " << tempo[j] << endl;
