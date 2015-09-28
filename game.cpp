//game work

#ifndef __ABC__BGame__
#define __ABC__BGame__

#include "common.h"
#include "Role.h"



int main(int , char**)
{
	cout << "hellp c++";
	cout << &char*;
	//init user data  初始化用户数据，登录
	GameWorld::shared()->InitializeGameWorld(string);// 用数据初始化各个模型Role，Ventory,PVE,PVP
	GameWorld::shared()->show(GameScene->getInstance());  //场景只管把模型揪出来组成故事。GameWorld初始化以后显示主场景 。
	//对于RPG则是角色  对于SLG则是城堡，主角是头像。 对于SLG。兵是英雄的血。
	

	//TODO  初始化操作界面UIController;
	uiController(int,char**);//不断接受命令行参数，控制其他。目前唯一的控制界面
	
	abc::Role* mainRole = new abc::Role();
	abc::Role* enymy = new abc::Role();
	mainRole->fight(enymy); 

	string str=SerializeGameWorld();
	GameWorld->getInstance->setDataToFile(str,"user1001.json");//保存一个战斗回合的数据



	delete mainRole;
	delete enymy;
	return 0;
 
}


void uiController(int,char**){

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