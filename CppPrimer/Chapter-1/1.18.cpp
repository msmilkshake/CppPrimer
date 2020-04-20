#include <iostream>	

int main()
{
	int val{ 0 };
	int currVal{ 0 };
	if (std::cin >> currVal)
	{
		int count{ 1 };
		while (std::cin >> val)
		{
			if (val == currVal)
			{
				++count;
			}
			else
			{
				std::cout << currVal << " occours " << count << " times\n";
				currVal = val;
				count = 1;
			}
		}
		std::cout << currVal << " occours " << count << " times\n";
	}
}