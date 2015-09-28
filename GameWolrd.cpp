#include "GameWorld.h"

NS_B_BEGIN

static GameWorld* s_sharedGameWorld = NULL;
static Role* s_sharedRole = NULL;
static Map* s_sharedMap = NULL;
static Ventroy s_sharedVentory = NULL;
GameWorld::~GameWorld(){
	delete s_sharedGameWorld;
}

GameWorld::GameWorld(){
		string = GameWorld::shared()->loadUserData("user1001.json");
}

GameWorld* GameWorld::shared(){
	if(!s_sharedGameWorld){
		s_sharedGameWorld = new GameWorld();
	}	
	return s_sharedGameWorld();
}



void GameWorld::InitializeGameWorld(string a ){
	// 用数据初始化各个模型Role，Ventory,PVE,PVP
	s_sharedRole = new Role(a);
	s_sharedVentory = new Ventory(a);
	s_sharedMap = new Map(a);




	//几个游戏交互界面  角色，背包，地图


 	//打第一个PVE
	s_shareRole.fight(s_sharedMap->getPVE(1));


}


void GameWorld::show(Scene* scene){
	
}


NS_B_END
