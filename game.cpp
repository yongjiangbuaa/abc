//game work

#ifndef __ABC__BGame__
#define __ABC__BGame__

#include "common.h"
#include "Role.h"



int main(int , char**)
{
//	cout << "hellp c++";

	//init user data  初始化用户数据，登录
	string = loadUserData("user1001.json");
	InitializeGameWorld(string);

	abc::Role* mainRole = new abc::Role();
	abc::Role* enymy = new abc::Role();
	mainRole->fight(enymy); 

	string str=SerializeGameWorld();
	setDataToFile(str,"user1001.json");//保存一个战斗回合的数据

	
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