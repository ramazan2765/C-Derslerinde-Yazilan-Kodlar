#include <iostream>

int main()
{
	int x{ 1 }, y{ };

	const int &r1 = x > 0 ? x : y++;
	const int &r2 = x > 0 ? x : ++y;
	x = 5;
	std::cout << r1 << r2;
}
