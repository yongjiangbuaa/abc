//game work

#ifndef __ABC__BGame__
#define __ABC__BGame__

#include "common.h"
#include "Role.h"


NS_B_BEGIN

int main(){
	Role* mainRole = new Role();
	Role* enymy = new Role();
	mainRole->fight(enymy);  
}






//物品  可分为 道具，装备，坐骑
class Item{
public:

};


//背包
class inventory{
public:
         std::vector<Item> Items;

};

NS_B_END
#endif