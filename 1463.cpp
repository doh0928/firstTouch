#include <iostream>
#include <algorithm>
using namespace std;

int D[1000001];
int main()
{
	int N;
	cin >> N;
	D[1] = 0;
	D[2] = 1;
	D[3] = 1;

		for (int i = 4; i <= N; i++)
		{
			D[i] = D[i - 1] + 1;
			if (i % 2 == 0)
			{
				D[i] = min(D[i], D[i / 2] + 1);
			}
			if (i % 3 == 0)
			{
				D[i] = min(D[i], D[i / 3] + 1);
			}
		}
		cout << D[N] << endl;

	return 0;
}