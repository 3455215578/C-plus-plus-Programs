#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}


	void Print(void)
	{
		std::cout << X << ',' << Y << std::endl;
	}
};

void Function(void)
{
	// Entity�����������Function��������Function���������������ͻᱻɾ����ͬʱ������������
	Entity e;
	e.Print();
}

int main(void)
{
	Function();

	return 0;
}