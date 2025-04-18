#include <iostream>
using namespace std;

class Entity
{
private:
	string m_Name;
	int m_Score;

public:

	// 构造函数
	//Entity()
	//{
	//	m_Name = "Unknown";
	//}

	//Entity(const string& Name)
	//{
	//	m_Name = Name;
	//}

	// 初始化列表(必须按成员变量定义的顺序赋值)
	Entity()
		: m_Name("Unknown"), m_Score(10)
	{
	}

	Entity(const string& Name)
		: m_Name("Cherno"), m_Score(10)
	{

	}

	void GetName(void)
	{
		cout << "" << m_Name << endl;

	}

};

int main(void)
{
	Entity e0;
	Entity e1("Cherno");

	e0.GetName();
	e1.GetName();


	return 0;
}