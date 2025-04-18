#include <iostream>
#include <string>
using namespace std;


class Printable
{
public:

	virtual string GetClassName(void) = 0;
};



class Entity : public Printable
{
public:

	virtual string GetName(void) { return "Entity"; }

	string GetClassName(void) override { return "Entity"; };
};



class Player : public Entity
{
private:
	string m_Name;

public:
	Player(const string& name) : m_Name(name)
	{

	}

	string GetName(void) override { return m_Name; }

	string GetClassName(void) override { return "Player"; };
};



void PrintName(Entity* entity)
{
	cout << entity->GetName() << endl;
}

// void Print(? ? ? obj) // "? ? ?"指的是能够提供GetClassName()函数的类型/接口
void Print(Printable* obj)
{
	cout << obj->GetClassName() << endl;
}

int main(void)
{
	Entity* e = new Entity();
	Print(e);

	Player* p = new Player("Cherno");
	Print(p);

}