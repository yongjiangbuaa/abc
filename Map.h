#ifndef __B__MAP__
#define __B__MAP__

#include "common.h"

NS_B_BEGIN
class Map : BBase {
	public:
		~Map();
		static	Map* shared();
				Map(string a);

	private:
		Map();
};

NS_B_END

#endif