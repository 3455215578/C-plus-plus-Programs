#include <iostream>

class Log
{
	// ���б���
public:

	enum Level
	{
		LevelError = 0, LevelWarn, LevelInfo
	};

	// ˽�б���
private:

	Level m_level = LevelInfo;

	// ���з���
public:

	// ������־�ȼ�
	void Set_Level(Level level)
	{
		m_level = level;
	}


	// ���������־
	void Info(const char* message)
	{
		if (m_level >= LevelInfo)
		std::cout << "[Info]: " << message << std::endl;
	}

	// ֻ�������ʹ�����־
	void Warn(const char* message)
	{
		if (m_level >= LevelWarn)
			std::cout << "[Warning]: " << message << std::endl;
	}

	// ֻ���������־
	void Error(const char* message)
	{
		if (m_level >= LevelError)
			std::cout << "[Error]: " << message << std::endl;
	}
};

int main08(void)
{
	Log log;

	log.Set_Level(log.LevelInfo);
	log.Error("Hello");
	log.Warn("Hello");
	log.Info("Hello");

	return 0;
}