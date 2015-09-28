#include "Ventory.h"

NS_B_BEGIN

static Ventory* s_sharedVentory = NULL;
Ventory::Ventory()
{

}

Ventory::Ventory(string a )
{
	
}

Ventory* Ventory::shared()
{
	if(!s_sharedVentory)
	{
		s_sharedVentory = new Ventory();
	}
	return s_sharedVentory;
}

Ventory::~Ventory()
{

}

NS_B_END