#include <iostream>

using namespace std;

int distance(int a, int b)
{
	if (a > b) return b-a+40;
	return b-a;
}

int main()
{
	int p[4];
	int a;

	while (true)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> p[i];
		}

		if (p[0] == 0 && p[1] == 0 && p[2] == 0 && p[3] == 0) break;

		a = 1080;

		for (int i = 0; i < 3; i++)
		{
			if (i % 2 == 0)
			{
				a += (distance(p[i+1], p[i]) * 9);
			}
			else
			{
				a += (distance(p[i], p[i+1]) * 9);
			}
		}

		cout << a << endl;

	}

	return 0;
}

