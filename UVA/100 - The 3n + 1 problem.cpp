#include <iostream>

using namespace std;

int calculateCycleLength(unsigned int n)
{
    int cycleLength = 1;

    while (n != 1)
    {
        if (n % 2 == 1) n = n*3 + 1;
        else            n = n/2;

        cycleLength++;
    }

    return cycleLength;
}

int main()
{
	unsigned int i;
    unsigned int j;
	while (cin >> i >> j)
    {
        cout << i << " " << j << " ";
		int maximumCycleLength = 0;

		for (int n = min(i, j); n <= max(i, j); n++)
        {
            int cycleLength = calculateCycleLength(n);
            maximumCycleLength = max(maximumCycleLength, cycleLength);
		}
		
		cout << maximumCycleLength << endl;
	}
	
	return 0;
}
