#include "Logger.h"

NS_B_BEGIN

void Logger::debug(string* a )
{
	 	cout << a << "\n";
}

void Logger::debug(char const* a )
{
	 	cout << a << "\n";
}


 void Logger::debug(IntArray a)
 {
	for( int key : a)
	{
		cout << key << "\n";
	}
}
NS_B_END