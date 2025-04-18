#include <iostream>
#include <stdlib.h>
using namespace std;
using namespace std::string_literals; // 提供一些字符串函数

int main(void)
{

	//const char* name = "Che\0rno";

	// utf-8
	char* name = (char*)u8"Cherno";

	// 其他字符串类型
	// 1.宽字符：所占内存空间由编译器决定，通常为2/4字节
	const wchar_t* name2 = L"Cherno";
	//cout << sizeof(wchar_t) << endl;

	// char16_t：占两个字节（utf-16）
	const char16_t* name3 = u"Cherno";

	// char32_t：占四个字节（utf-32）
	const char32_t* name4 = U"Cherno";

	// 遇到终止符就认为是字符串的结尾
	//cout << strlen(name) << endl;

	// 字符串拼接
	string name0 = "Cherno"s + " Hello!";
	cout << name0 << endl;

	// 在C++中，R"( ... )" 是一种特殊的字符串字面量语法，称为 原始字符串字面量（Raw String Literal）。
	// 它的作用是允许字符串中包含换行符、引号、反斜杠等特殊字符，而不会被解释为转义字符。
	const char* example = R"(Line1
Line2
Line3)";
	cout << example << endl;

	return 0;
}