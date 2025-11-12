#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>

int main()
{

	std::array<int, 12> arr = {4, 1, 4, 4, 2, 3, 5, 6, 7, 8, 9, 10};

	std::sort(arr.begin(), arr.end());

	for (auto i : arr)
	{
		std::cout << i << " ";
	}
	return 0;
}