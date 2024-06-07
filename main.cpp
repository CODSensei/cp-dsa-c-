#include <bits/stdc++.h>
using namespace std;

void nTriangle(int n);

void nTriangle(int n)
{
	// Write your code here
	if (n >= 1 || n <= 25)
	{
		int c = 1;
		for (int i = 0; i <= n; i++)
		{
			for (int j = n; j > i; j--)
			{
				cout << c << " ";
				c++;
			}
			cout << "\n";
			c = 1;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	nTriangle(n);
	return 0;
}