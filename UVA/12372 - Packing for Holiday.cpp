#include <iostream>

using namespace std;

int main()
{

	int t;
	int l, w, h;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> l >> w >> h;

		cout << "Case " << (i+1) << ": ";
		if (l <= 20 && w <= 20 && h <= 20) cout << "good";
		else cout << "bad";
		cout << endl;
	}

	return 0;

}

