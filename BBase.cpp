
#include "BBase.h"
NS_B_BEGIN

BBase::BBase()
{

}

BBase::~BBase()
{

}

void BBase::retain()
{
	m_nReference++;
}

void BBase::release()
{
	m_nReference--;
	if(m_nReference <= 0)
	{
		delete this;
	}
}

NS_B_END