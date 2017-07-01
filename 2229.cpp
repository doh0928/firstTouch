#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N = 0;;
	int A[1000] = { 0 };
	int dp[1000] = { 0 };
	int dp2[1000] = { 0 };
	int max[2] = { 0 };
	cin >> N;
	dp[0] = 1;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = 1; i < N; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (A[i] > A[j] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	
	for (int i = N-1 ; i >= 0; i--)
	{
		dp2[i] = 1;
		for (int j = N - 1; j >= i; j--)
		{
			if (A[i] > A[j] && dp2[i] < dp2[j] + 1)
			{
				dp2[i] = dp2[j] + 1;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (max[0] < dp[i] + dp2[i])
		{
			
			max[0] = dp[i] + dp2[i];
		}
	}
	cout << max[0]-1;
	return 0;
}