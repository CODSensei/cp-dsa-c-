#include <bits/stdc++.h>
using namespace std;

void nTriangle(int n);

void nTriangle(int n)
{
	// Write your code here
	if (n >= 1 || n <= 20)
	{
		for (int i = n; i > 0; i--)
		{
			for (int j = n - i - 1; j >= 0; j--)
			{
				cout << " ";
			}
			for (int j = 2 * i - 1; j > 0; j--)
			{
				cout << "*";
			}
			for (int j = n - i - 1; j >= 0; j--)
			{
				cout << " ";
			}
			cout << endl;
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