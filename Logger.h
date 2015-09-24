
#ifndef __ABC__BLogger__
#define __ABC__BLogger__

#include "common.h"

NS_B_BEGIN
class Logger
{
	
	public:
	 static void debug(string* a );
	 static void debug( char const * a );
 	 static void debug(std::vector<int>  a );
};

NS_B_END

#endif