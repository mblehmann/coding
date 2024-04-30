#include <iostream>

using namespace std;

struct nodo {
				int n;
				nodo *l, *r, *p;
};

int preorder(nodo* c, char res[], int s, int ms) {

 if (c->n > 0) {
				res[s] = c->n;
			 	s++;
 }

 if (c->l != NULL) {
  s = preorder(c->l, res, s, ms);
 }
 if (c->r != NULL) {
  s = preorder(c->r, res, s, ms);
 }

 return s;
}

int inorder(nodo *c, char res[], int s, int ms) {

 if (c->l != NULL) {
  s = inorder(c->l, res, s, ms);
 }
 
 if (c->n > 0) {
				 res[s] = c->n;
				 s++;
 }
 
 if (c->r != NULL) {
  s = inorder(c->r, res, s, ms);
 }

 return s;
}

int posorder(nodo *c, char res[], int s, int ms) {

 if (c->l != NULL) {
  s = posorder(c->l, res, s, ms);
 }
 
 if (c->r != NULL) {
  s = posorder(c->r, res, s, ms);
 }

 if (c->n > 0) {
				 res[s] = c->n;
				 s++;
 }

 return s;
}

int main() {

  char pre[30];
  char in[30];
		
  nodo root;
	nodo *next, *z;
  int as;	
  char curr;

	bool read[30];
	int pn;
	int nn;
	bool f;

	int cp, cn;
	bool used[30];
	char res[30];
	int s;

	while (cin >> curr) {
					for (int i = 0; i < 26; i++) read[i] = false;

					pn = 0; nn = 0;
					f = true;

					read[curr-65] = true;
					pre[pn] = curr;
          pn++;

					while (pn != nn) {
									cin >> curr;
									if (f && read[curr-65]) {
													f = false;
									}
									if (f) {
													read[curr-65] = true;
													pre[pn] = curr;
													pn++;
									} else {
													in[nn] = curr;
													nn++;
									}
					}

					as = 0;
					cp = cn = 0;
					for (int i = 0; i < 26; i++) used[i] = false;

					root.n = pre[cp];
					root.l = NULL;
					root.r = NULL;
					root.p = NULL;
					next = &root;

					used[pre[cp]-65] = true;

					while (cp < pn) {
									if (pre[cp] == in[cn]) {
													cp++;
													if (cp == pn) break;
													cn++;
													while (used[in[cn]-65]) {
																	next = next->p;
																	while (next->n != in[cn]) {
																					next = next->p;
																	}
																	cn++;
													}
													z = new nodo;
													z->n = pre[cp];
													z->l = NULL;
													z->r = NULL;
													z->p = next;
													next->r = z;
													next = z;
													used[pre[cp]-65] = true;
									} else {
													cp++;
													if (cp == pn) break;
													z = new nodo;					
													z->n = pre[cp];
													z->l = NULL;
													z->r = NULL;
													z->p = next;
													next->l = z;
													next = z;
													used[pre[cp]-65] = true;
									}
					}

					s = 0;
					posorder(&root, res, s, nn);
					for (int i = 0; i < nn; i++) {
													cout << res[i];
					}
					cout << endl;
			

	}
	
	return 0;

}

