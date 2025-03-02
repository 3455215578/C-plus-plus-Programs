#include <iostream>

class Log
{
	// 共有变量
public:

	enum Level
	{
		LevelError = 0, LevelWarn, LevelInfo
	};

	// 私有变量
private:

	Level m_level = LevelInfo;

	// 共有方法
public:

	// 设置日志等级
	void Set_Level(Level level)
	{
		m_level = level;
	}


	// 输出所有日志
	void Info(const char* message)
	{
		if (m_level >= LevelInfo)
		std::cout << "[Info]: " << message << std::endl;
	}

	// 只输出警告和错误日志
	void Warn(const char* message)
	{
		if (m_level >= LevelWarn)
			std::cout << "[Warning]: " << message << std::endl;
	}

	// 只输出错误日志
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