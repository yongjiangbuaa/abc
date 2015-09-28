
#ifndef __B__BLogger__
#define __B__BLogger__

#include "common.h"

NS_B_BEGIN
class Logger
{
	
	public:
	 static void debug(string* a );
	 static void debug( char const * a );
 	 static void debug(IntArray  a );
};

NS_B_END

#endif