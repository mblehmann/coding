#include <iostream>

using namespace std;

int main()
{
	int h, u, d, f;
	int c;
	float p, r;
	float s;

	bool a;

	while (true)
	{
		cin >> h >> u >> d >> f;

		if (h == 0) break;

		s = 0;
		c = 1;
		r = u * (f / 100.0);
		p = u;

		do
		{
			if (p > 0)
			{
				s += p;
			}
			
			if (s > h) 
			{
				a = true;
				break;
			}

			s -= d;
			if (s < 0)
			{
				a = false;
				break;
			}

			p -= r;
			c++;

		} while (true);

		if (a) cout << "success";
		else cout << "failure";
		cout << " on day " << c << endl;
	}

	return 0;
}

