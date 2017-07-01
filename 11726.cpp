#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int count;
	cin >> count;

	int* arr = new int[count + 1];
	int* dp = new int[count + 1];

	for (int i = 1; i <= count; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = dp[1] + arr[2];
	dp[3] = max(dp[2], max(arr[1] + arr[3], arr[2] + arr[3]));

	for (int i = 4; i <= count; i++) {
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 1]);
	}

	if (count == 3) {
		dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);
	}
	else if (count > 3) {
		dp[count] = dp[count - 2] + arr[count];
	}

	cout << dp[count] << endl;

	return 0;
}
