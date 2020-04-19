#include <iostream>

int main()
{
	int sum{ 0 };
	int val{ 1 };
	while (val <= 10)
	{
		sum += val;
		std::cout << "Sum = " << sum << '\n'
				<< "Val = " << val << '\n';
		++val;
	}
	std::cout << "Sum of numbers 1 through 10: " << sum << '\n';
}