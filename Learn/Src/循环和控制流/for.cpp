#include <iostream>

int main(void)
{
	// for循环包含三部分（初始化、条件和迭代） 条件部分为一个布尔语句,会返回true或false, true则继续循环

	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << "Hello World" << std::endl;
	//}


	//int i = 0;
	//bool compare_result = true;

	//for (; compare_result ;)
	//{
	//	std::cout << "Hello World" << std::endl;
	//	i++;

	//	if (i >= 5)
	//	{
	//		compare_result = false;
	//	}
	//}

	// 死循环
	//for (; true;)
	//{
	//	std::cout << "Hello World" << std::endl;
	//}

	//for (;true;)
	//{
	//	std::cout << "Hello World" << std::endl;
	//}


	// 控制流
	// continue
	//for (int i = 0; i < 5; i++)
	//{
	//	if (i > 2)
	//		continue;

	//	std::cout << "Hello World" << std::endl;
	//}

	// break
	//for (int i = 0; i < 5; i++)
	//{
	//	if (i > 2)
	//		break;

	//	std::cout << "Hello World" << std::endl;
	//}

	// return
	for (int i = 0; i < 5; i++)
	{
		if (i > 2)
			return 0;

		std::cout << "Hello World" << std::endl;
	}

	return 0;
}