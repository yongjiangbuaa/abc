#include "Logger.h"

NS_B_BEGIN

void Logger::debug(string* a )
{
	 	cout << &a;
}

void Logger::debug(char const* a )
{
	 	cout << &a;
}


 void Logger::debug(std::vector<int> a)
 {
	for( int key : a)
	{
		cout << key;
	}
}
NS_B_END