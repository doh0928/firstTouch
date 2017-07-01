#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N; 
	int A[1000] = { 0 };
	int dp[1000] = { 0 };
	int max = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	dp[0] = 1;
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
		if (max < dp[i])
		{
			max = dp[i];
		}
	}
	cout << max << endl;
	return 0;
}