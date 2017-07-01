#include <iostream>

using namespace std;

int main()
{
	int T;
	int A[100];
	long long int pa[101] = { 0 };
	pa[1] = 1;
	pa[2] = 1;
	pa[3] = 1;
	pa[4] = 2;
	pa[5] = 2;
	cin >> T;
	for (int i = 6; i <= 100; i++)
	{
		pa[i] = pa[i - 3] + pa[i - 2];
	}
	for (int i = 0; i < T; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < T; i++)
	{
		cout << pa[A[i]] << endl;
	}
	return 0;
}