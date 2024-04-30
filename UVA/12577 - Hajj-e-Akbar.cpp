#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int i = 0;
	string w;
	map<string, string> m;

	m["Hajj"] = "Hajj-e-Akbar";
	m["Umrah"] = "Hajj-e-Asghar";

	while (true)
	{
		cin >> w;
		if (w == "*") break;

		cout << "Case " << (++i) << ": ";
		cout << m[w] << endl;
	}

	return 0;

}

