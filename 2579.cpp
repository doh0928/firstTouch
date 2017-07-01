#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int floor[301];
	int dp[301] = { 0 };
	int N = 0;

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> floor[i];
	}
	
	for (int i = 1; i <=3 && i<=N; i++)
	{
		if (i != 3)
		{
			dp[i] = dp[i-1]+floor[i];
		}
		else
		{
			dp[3] = max(floor[i - 1] + floor[i], floor[i-2] + floor[i]);
		}
	}
	
	for (int i = 4; i <= N; i++)
	{
		int a = 0;
		a = max(dp[i-3]+floor[i]+floor[i-1],dp[i-2]+floor[i]);
		dp[i] = a;
	}
	cout << dp[N] << endl;
	
	return 0;
}