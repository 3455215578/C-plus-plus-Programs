#include <iostream>
using namespace std;

class Entity
{
private:
	string m_Name;
	mutable int m_DebugCount = 0;

public:
	const string& GetName() const
	{
		m_DebugCount ++;
		return m_Name;
	}

};


int main(void)
{
	const Entity entity;
	entity.GetName();

	return 0;
}