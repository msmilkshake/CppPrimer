#include <iostream>

int main()
{
	int val{ 50 };
	int sum{ 0 };
	while (val <= 100)
	{
		sum += val;
		++val;
	}
	std::cout << "sum of numbers from 50 to 100 is: " << sum;
	return 0;
}