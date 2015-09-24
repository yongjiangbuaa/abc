#include "Logger.h"

NS_B_BEGIN

static void debug(string* a )
{
	 	cout << &a;
}

static void debug(const char* a )
{
	 	cout << &a;
}


static void debug(std::vector<int> a){
	foreach{

	}
}
NS_B_END