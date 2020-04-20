#include <iostream>

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum;
	return 0;
}

/*
- What does the following for loop do?
	The loop sums all values in the inclusive range of -100 and 100.

- What is the final value of sum?
	The final value of the sum is 0.
*/