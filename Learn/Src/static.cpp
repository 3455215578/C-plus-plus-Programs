#include <iostream>

//struct Entity
//{
//	int x, y;
//
//	void Print(void)
//	{
//		std::cout << x << ',' << y << std::endl;
//	}
//};

struct Entity
{
	
	//static int x, y;
	int x, y;

	static void Print(void)
	{
		//std::cout << x << ',' << y << std::endl;
	}
};

// 定义为static变量后需要定义
//int Entity::x;
//int Entity::y;

int main(void)
{
	Entity e;
	e.x = 2;
	e.y = 5;
	//Entity::x = 2;
	//Entity::y = 5;

	Entity e1;
	e1.x = 3;
	e1.y = 8;

	Entity::Print();
	Entity::Print();

	return 0;
}