#include <iostream>

// Entity��ʵ��
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


// Player(���)Ҳ��һ��Entity(ʵ��)��Ҳӵ��Entity���е�����
// ������ǿ�����չEntity��������һ����Player���࣬�����������Դ洢�µ����ݣ��ṩ�µĹ���
class Player : public Entity  // Playerͬʱ��Player���ͺ�Entity����
{
public:
	const char* Name; // ��64λϵͳ���������͵�ָ�붼��8���ֽ�

	void PrintName(void)
	{
		std::cout << Name << std::endl;
	}
};

int main(void)
{
	Player player;
	player.X = 5; // ����Player�࣬��Entity�����κβ���˽��(private)�ĳ�Ա��Player�඼���Է��ʵ�

	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;


	return 0;
}

