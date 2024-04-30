#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int t;
	int n;
	int l;
	vector<int> s;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		s.clear();
		for (int j = 0; j < n; j++)
		{
			cin >> l;
			s.push_back(l);
		}
		sort(s.begin(), s.end());
		cout << ((s[s.size()-1]-s[0])*2) << endl;
	}

	return 0;

}

