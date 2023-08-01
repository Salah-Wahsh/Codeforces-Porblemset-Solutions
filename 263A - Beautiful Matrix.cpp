
#include <iostream>
using namespace std;
int main() {

	int ctr = 0;
    int matrix[5][5];
	int currentX, currentY;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int	targetX = 2;
	int targetY = 2;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (matrix[i][j] == 1)
			{
				currentX = i;
				currentY = j;
			}
		}
	}
	while (currentX != targetX) {
		if (currentX < targetX) {
			currentX++ ;
			ctr++;
			
		}
		else {
			currentX--;
			ctr++;
		}
	}

	while (currentY != targetY) {
		if (currentY < targetY) {
			currentY++;
			ctr++;
		}
		else {
			currentY--;
			ctr++;
		}
	}

	cout << ctr;
		return 0;
	}


