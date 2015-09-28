#ifndef __B__VENTORY__
#define __B__VENTORY__
#include "common.h"
NS_B_BEGIN


class Ventory : BBase
{

public:
	static Ventory* shared();
	virtual ~Ventory();
	Ventory(string a);

private:
		Ventory();

};

NS_B_END

#endif