#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int arr[11] = { 0 };
	int count = 0;
	int line[11] = { 0 };
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int num;
		cin >> num;
		for (int j = 1; j <= N; j++)
		{
			if (arr[j] == 0)
			{
				count++;
				if (count == num + 1)
				{
					arr[j] = i;
				}
			}

		}
		count = 0;
	}

	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << " ";
	}

	return 0; 
}