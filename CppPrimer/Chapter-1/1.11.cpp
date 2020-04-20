#include <iostream>

int main()
{
	std::cout << "Ente two numbers:\n";
	int first{ };
	int last{ };
	std::cin >> first >> last;
	while (first <= last)
	{
		std::cout << first++ << '\n';
	}
	return 0;
}