#include <iostream>

using namespace std;

#define nl "\n"

int main()
{
	int n, h, fh, sum = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++)
	{
		cin >> fh;
		if (fh <= h)
		{
			sum++;
		}
		else
		{
			sum += 2;
		}
	}
	cout << sum << nl;

	return 0;
}
