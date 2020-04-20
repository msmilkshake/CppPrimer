#include <iostream>

int main()
{
	int sum{ 0 };
	int val{ 0 };
	while (std::cin >> val)
	{
		sum += val;
	}
	std::cout << "THe sum of the entered numbers is: " << sum << '\n';
	return 0;
}