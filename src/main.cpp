#include <iostream>
#include <cmath>

void fallen(int height, int seconds)
{

	double gravityConstant{9.8};

	double distanceFallen{gravityConstant * (seconds * seconds) / 2};

	double result = height - distanceFallen;

	if (result < 0.0)
	{
		std::cout << "At "<< seconds << " seconds the ball is on the ground\n";
	}
	else
	{

		std::cout << "At " << seconds << " the ball it at height: " << height - distanceFallen << " " << height << " Meters\n";
	}
}

int main()
{

	std::cout << "Enter the height of the tower in meters: ";

	int height;
	std::cin >> height;

	fallen(height, 0);
	fallen(height, 1);
	fallen(height, 2);
	fallen(height, 3);
	fallen(height, 4);
 	fallen(height, 5);

	return 0;
}