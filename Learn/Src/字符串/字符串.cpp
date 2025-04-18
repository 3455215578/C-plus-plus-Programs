#include <iostream>
#include <string>
using namespace std;

void PrintString(const string& string)
{
	cout << string << endl;
}

int main(void)
{
	char name[] = "Cherno";
	name[2] = 'a';
	cout << name << endl;
	////char name1[] = { 'C', 'h', 'e', 'r', 'n', 'o'};
	//char name1[] = { 'C', 'h', 'e', 'r', 'n', 'o', '\0' };

	//// string
	//string name = "Cherno";

	//PrintString(name);

	//// ×Ö·û´®×·¼Ó
	//name += " Hello!";

	//PrintString(name);

	return 0;
}