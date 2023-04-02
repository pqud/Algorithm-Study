#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int i = 0;

	while (n > 0) 
	{
		i++;
		n -= i;
	}

	if (i % 2 == 1) 
	{
		cout << 1 - n << "/" << i + n << "\n";
	}
	else if (i % 2 == 0) 
	{
		cout << i + n << "/" << 1 - n << "\n";
	}
}
