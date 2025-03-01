#include <iostream>

#define LOG(x) std::cout << x << std::endl

// 按地址传递
void Increment_Address(int* value)
{
	(*value)++;
}

// 按引用传递
void Increment_Reference(int& value)
{
	value++;
}

int main06(void)
{
	int a = 5;

	int& ref = a;
	ref = 2;

	LOG(a);

	std::cin.get();

	return 0;
}