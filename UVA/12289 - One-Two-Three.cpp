#include <iostream>

using namespace std;

bool isone(string w)
{
	if (w == "one") return true;

	for (int i = 0; i < w.length(); i++)
	{
		string o = w;
		switch (i)
		{
			case 0:
				o[i] = 'o';
				break;
			case 1:
				o[i] = 'n';
				break;
			case 2:
				o[i] = 'e';
				break;
		}
		if (o == "one") return true;
	}
	return false;
}

int main()
{

	int n;
	string w;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> w;

		if (w.length() == 5) cout << "3" << endl;
		else
		{
			if (isone(w)) cout << "1" << endl;
			else cout << "2" << endl;
		}

	}
	return 0;

}

