#include <iostream>

using namespace std;

int main()
{

	int t;
	int n;
	int c;
	int s;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cin >> s;

		for (int j = 1; j < n; j++)
		{
			cin >> c;
			s = max(c, s);
		}
		cout << "Case " << (i+1) << ": " << s << endl;
	}
	return 0;

}

