#include <iostream>

int main(void)
{

	//const char* ptr = nullptr;
	const char* ptr = "Hello";

	if (ptr)
		std::cout << ptr << std::endl;
	else if (ptr == "Hello") // ֻ��ifΪ�ٲŻ�����Ƚ�else if
		std::cout << "Pointer is Hello" << std::endl;
	else
		std::cout << "Pointer is null!" << std::endl;

	/**
	                       else
	                      {
	  else if()  ��ͬ��        if()
	
	                      }

	
	**/


	return 0;
}