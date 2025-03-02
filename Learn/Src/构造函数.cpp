#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
	}

	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}

	void Print(void)
	{
		std::cout << X << ',' << Y << std::endl;
	}
};

int main(void)
{
	//Entity e;
	Entity e(2, 5);
	e.Print();

	return 0;
}