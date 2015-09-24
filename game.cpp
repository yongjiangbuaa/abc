//game work

#ifndef __ABC__BGame__
#define __ABC__BGame__

#include "common.h"
#include "Role.h"



int main(int , char**)
{
//	cout << "hellp c++";

	abc::Role* mainRole = new abc::Role();
	abc::Role* enymy = new abc::Role();
	mainRole->fight(enymy); 

	delete mainRole;
	delete enymy;
	return 0;
 
}


/**



//物品  可分为 道具，装备，坐骑
class Item
{

public:

};


//背包
class inventory
{
public:
         std::vector<Item> Items;

};
**/
#endif