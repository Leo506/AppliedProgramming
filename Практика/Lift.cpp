#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int M;  // Этажей в доме
	int N;  // Требуемый этаж
	int K;  // Лифт идет на каждые K этажей
	cin >> M >> N >> K;

	const int MAX_INT_VALUE = 2147483647;

	int cost = MAX_INT_VALUE;
	int x = 0;
	int liftFloor = x * K + 1;
	while (liftFloor <= M)
	{
		if (liftFloor == N)
		{
			cost = 0;
			break;
		}

		int costMoveUp = (N - liftFloor) * 200;
		int costMoveDown = (liftFloor - N) * 100;

		if (costMoveUp < cost && costMoveUp > 0)
		{
			cost = costMoveUp;
		}
		else if (costMoveDown < cost && costMoveDown > 0)
		{
			cost = costMoveDown;
		}

		x++;
		liftFloor = x * K + 1;

	}

	cout << cost << endl;

	return 0;
}