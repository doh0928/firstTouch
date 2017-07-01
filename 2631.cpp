#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[201] = { 0 };
	int dp[201] = { 0 };
	int N=0;
	int max = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	dp[0] = 1;
	for (int i = 1; i < N; i++)
	{
		dp[i] = 1;
		for (int j = 0; j<i; j++)
		{
			if (arr[i]>arr[j] && dp[j] + 1>dp[i])
			{
				dp[i] = dp[j] + 1;
			}
		}
		if (max < dp[i]) 
		{ max = dp[i]; }
	}	
	cout << N-max;

	return 0;
}