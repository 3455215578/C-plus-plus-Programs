#include <iostream>

int main05(void)
{
	// stack
	//int val = 8;
	//int* ptr = &val;
	//*ptr = 10;

	// heap
	char* buffer = new char[8];
	memset(buffer, 0, sizeof(buffer));

	char** ptr = &buffer;

	delete[] buffer;

	std::cin.get();

	return 0;
}