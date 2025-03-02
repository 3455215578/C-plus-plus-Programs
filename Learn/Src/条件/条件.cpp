#include <iostream>

int main(void)
{

	//const char* ptr = nullptr;
	const char* ptr = "Hello";

	if (ptr)
		std::cout << ptr << std::endl;
	else if (ptr == "Hello") // 只有if为假才会继续比较else if
		std::cout << "Pointer is Hello" << std::endl;
	else
		std::cout << "Pointer is null!" << std::endl;

	/**
	                       else
	                      {
	  else if()  等同于        if()
	
	                      }

	
	**/


	return 0;
}