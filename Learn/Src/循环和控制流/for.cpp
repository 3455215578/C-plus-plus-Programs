#include <iostream>

int main(void)
{
	// forѭ�����������֣���ʼ���������͵����� ��������Ϊһ���������,�᷵��true��false, true�����ѭ��

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

	// ��ѭ��
	//for (; true;)
	//{
	//	std::cout << "Hello World" << std::endl;
	//}

	//for (;true;)
	//{
	//	std::cout << "Hello World" << std::endl;
	//}


	// ������
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