#include <iostream>
using namespace std;

int main(void)
{
	// 在栈上创建的数组，离开作用域后被销毁
	int example[5];
	// 数组就是指针
	int* ptr = example;

	for (int i = 0; i < 5; i++) // i <= 4 会额外进行一次等于的比较，且不直观
	{
		example[i] = 2;
	}

	//*(ptr + 2) = 6;

	// 在堆上创建的数组
	int* another = new int[5];
	// 删除
	//delete[] another;

	for (int i = 0; i < 5; i++)
	{
		another[i] = 2;
	}

	cout << sizeof(example) / sizeof(example[0]) << endl;
	cout << sizeof(another) / sizeof(another[0]) << endl;

	cin.get();
}