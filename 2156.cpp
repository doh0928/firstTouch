#include <iostream>
#include <algorithm>

using namespace std;
int podo[10001];	
int DP[10001];
int main()
{
	int N = 0;
	int a = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> podo[i];
	}
	for (int i = 1; i < 3 && i <= N; i++)
	{
		if (i == 1)
		{
			DP[i] = podo[i];
		}
		else
		{
			DP[i] = podo[i] + podo[i - 1];
		}
	}
	for (int i = 3; i <= N; i++)
	{
		a = max(max(DP[i - 1], podo[i] + DP[i - 2]), podo[i] + podo[i - 1] + DP[i - 3]);
		DP[i] = a;
	}
	cout << DP[N] << endl;
	return 0;
}