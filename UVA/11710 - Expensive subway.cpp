#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

 int s, c;

 char d[400][10];
 int z[400][400];
 string o;
 string t;

 int minc[400];
 int proc[400];
 bool visited[400];
 bool added[400];
 int psize = 0;
 int pcurr = 0;
 int psource, pini;
 string pcity;
 int next;
 int nextcusto;

 int soma;
 bool possible;

 int x;

 int inf = 2147483647;
 map <string, int> cidade;
 map<string,int>::iterator it;

 while (true) {
				 cin >> s >> c;
				 if (s == 0 && c == 0) break;

         cidade.clear();
				 for (int i = 0; i < s; i++) {
								 cin >> d[i];
								 cidade[d[i]] = i;
				 }


		for (int i = 0; i < s; i++) {
		  for (int j	= 0; j < s; j++) {
        z[i][j] = inf;
		  }
		}
		
		for (int i = 0; i < c; i++) {
		  cin >> o;
			cin >> t;
			cin >> z[cidade[o]][cidade[t]];
			z[cidade[t]][cidade[o]] = z[cidade[o]][cidade[t]];
		}		

    cin >> pcity;
		psource = cidade[pcity];

		pcurr = s-1;
		minc[psource] = 0;
		visited[psource] = true;
		for (int i = 0; i < s; i++) {
						if (i != psource) {
										minc[i] = z[psource][i];
										visited[i] = false;
										proc[i] = minc[i];
						}
		}

		//for (int i = 0; i < s; i++) { cout << minc[i] << " "; } cout << endl; 
    bool done;
		done = false;
		while (!done) {
						next = -1;
						nextcusto = inf;
						for (int i = 0; i < s; i++) {
										if (!visited[i] && proc[i] < nextcusto) {
														next = i;
														nextcusto = proc[i];
										}
						}

						if (next == -1) break;

						for (int i = 0; i < s; i++) {
										if (i != next) {
														if (!visited[i] && z[next][i] < minc[i]) {
																		minc[i] = z[next][i];
																		proc[i] = minc[i];
														}
										}
						}
						visited[next] = true;
    //cout << "eval: " << next << endl;
		//for (int i = 0; i < s; i++) { cout << minc[i] << " "; } cout << endl; 
		        done = true;
            for (int i = 0; i < s; i++) {
										if (!visited[i]) {
														done = false;
										}
						}

		}

 	   soma = 0;
     possible = true;
     for (int i = 0; i < s; i++) {
				soma += minc[i];
				//cout << i << " " <<  minc[i] << endl;
        if (minc[i] == inf) { possible = false; break; }
     }
  
  if (possible) {
   cout << soma << endl;
  } else {
   cout << "Impossible" << endl; 
  } 

 }

 return 0;

}

