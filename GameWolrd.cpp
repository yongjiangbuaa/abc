#include "GameWorld.h"
#include "Role.h"
#include "Map.h"
#include "Ventory.h"
#include "Logger.h"
NS_B_BEGIN

static GameWorld* s_sharedGameWorld = NULL;
static Role* s_sharedRole = NULL;
static Map* s_sharedMap = NULL;
static Ventory* s_sharedVentory = NULL;
static StringArray mainOpList;

GameWorld::~GameWorld()
{
	delete s_sharedGameWorld;
}

GameWorld::GameWorld()
{
		string str= GameWorld::shared()->loadUserData("user1001.json");
		this->InitializeGameWorld(str);
		mainOpList.push_back("Role");
		mainOpList.push_back("Ventory");
		mainOpList.push_back("Map");
}

GameWorld* GameWorld::shared()
{
	if(!s_sharedGameWorld)
	{
		s_sharedGameWorld = new GameWorld();
	}	
	return s_sharedGameWorld;
}



void GameWorld::InitializeGameWorld(string a)
{
	// 用数据初始化各个模型Role，Ventory,PVE,PVP
	s_sharedRole = new Role(a);
	s_sharedVentory = new Ventory(a);
	s_sharedMap = new Map(a);


	this->currentUI = "Role";
	this->opList.push_back("fight");
	this->opList.push_back("equip");
	//几个游戏交互界面  角色，背包，地图


 	//打第一个PVE
	s_sharedRole->fight(s_sharedMap->getPVE(1));


}

void GameWorld::SerializeGameWorld()
{
		abc::GameWorld::shared()->setDataToFile(gamedata,"user1001.json");//保存一个战斗回合的数据

}

void GameWorld::uiController(string op)
{
	//this->currentUI = "Role";
	//this->opList = array<string>("fight","equip");
	//GameWorld::shared()->mainOpList = array<string>("Role","Ventory","Map");


	if(BArrayUtil.in_array(op,this->opList )) 
	{
		s_sharedRole->op();

	}
	else if (BArrayUtil.in_array(op,mainOpList))
	{
		this->switchUI(op);
	}
	else 
	{
		Logger::debug(op
			.append("  ?!  wrong operation.You should input ")
			.append(this->opList.toString())
			.append(" or " )
			.append(mainOpList.toString()));

	}
}

NS_B_END
