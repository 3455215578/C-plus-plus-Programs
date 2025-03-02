#include <iostream>

// Entity：实体
class Entity
{
private:
	int m_value;

public:
	float X, Y;
	
	void Move(int xa, int ya)
	{
		X += xa;
		Y += ya;
	}
};


// Player(玩家)也是一个Entity(实体)，也拥有Entity类中的属性
// 因此我们可以拓展Entity类来创建一个叫Player的类，并且它还可以存储新的数据，提供新的功能
class Player : public Entity  // Player同时是Player类型和Entity类型
{
public:
	const char* Name; // 在64位系统中所有类型的指针都是8个字节

	void PrintName(void)
	{
		std::cout << Name << std::endl;
	}
};

int main(void)
{
	Player player;
	player.X = 5; // 对于Player类，在Entity类中任何不是私有(private)的成员，Player类都可以访问到

	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;


	return 0;
}

