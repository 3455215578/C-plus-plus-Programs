#include <iostream>
#include <string>
using namespace std;

class Entity
{
public:

	virtual string GetName(void)
	{
		return "Entity";
	}
};

class Player : public Entity 
{
private:
	string m_Name;

public:
	Player(const string& name) : m_Name(name)
	{

	}

	string GetName(void) override
	{
		return m_Name;
	}
};


void PrintName(Entity* entity)
{
	cout << entity->GetName() << endl;
}

int main(void)
{
	Entity* e = new Entity();
	PrintName(e);

	Player* p = new Player("Cherno");
	PrintName(p);

}