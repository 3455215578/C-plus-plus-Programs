#include <iostream>
using namespace std;

class Entity
{
private:
	int m_X, m_Y;
	mutable int var;

public:
	int GetX() const
	{
		//m_X = 2;
		//var = 2;
		return m_X;
	}

	void SetX(int x)
	{
		m_X = x;
	}

};

void PrintEntity(const Entity& entity)
{
	cout << entity.GetX() << endl;
}

int main(void)
{
	const int MAX_AGE = 90;

	// 一.变量
	//// 指针常量
	//const int* const a = new int;

	//*a = 2; // 不能修改指针指向的内容
	//a = (int*)&MAX_AGE; // 可修改指针指向的内存地址

	// 2.类


	return 0;
}