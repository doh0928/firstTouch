#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N = 0;
	int num = 0;
	int ipNum[10001] = { 0 };
	int dp[10001] = { 0 };
	int MMMAX;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> ipNum[i];
	}
	dp[1] = ipNum[1];
	for (int i = 2; i <= N; i++)
	{
		for (int j = 1; j <= i-1; j++)
		{
			dp[i] = max(dp[i], dp[j] + ipNum[i -j]);
		}
	}

	cout << dp[N] << endl;
	return 0;
}