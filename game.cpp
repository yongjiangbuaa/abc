//game work

#ifndef __ABC__BGame__
#define __ABC__BGame__

#include "common.h"
#include "Role.h"
#include "GameWorld.h"
#include "Logger.h"



int main(int argn  , char** argv)
{
	cout << "hellp c++";

	if(argn > 0 ) abc::Logger::debug(argv[0]);

	while(argn > 0 ){
		if(BStringUtil::compare("exit",string(argv[0])) != 0 ){
			//初始化操作界面UIController;
			abc::GameWorld::shared()->uiController(argv[1]); //不断接受命令行参数，控制其他。目前唯一的控制界面
		}
	}
	//init user data  初始化用户数据，登录
	abc::GameWorld::shared()->InitializeGameWorld();// 用数据初始化各个模型Role，Ventory,PVE,PVP
	//abc::GameWorld::shared()->show(GameScene->getInstance());  //场景只管把模型揪出来组成故事。GameWorld初始化以后显示主场景 。
	//对于RPG则是角色  对于SLG则是城堡，主角是头像。 对于SLG。兵是英雄的血。
	
	abc::GameWorld::shared()->SerializeGameWorld();

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