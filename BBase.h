#ifndef __B__BBase__
#define __B__BBase__


#include "common.h"
NS_B_BEGIN
class BBase
{
public:
	BBase();
	~BBase();

	virtual void retain();
	virtual void release();
private:
//count of reference
	int m_nReference;

};

NS_B_END
#endif