#include "GameClient.h"
#include "Logger.h"
NS_B_BEGIN

static GameClient* s_sharedBGameClient = NULL;

GameClient::GameClient()
{

}

GameClient::~GameClient()
{
	CC_SAFE_RELEASE_NULL(s_sharedBGameClient);
}

GameClient* GameClient::getInstance()
{
	if (!s_sharedBGameClient )
	{
		s_sharedBGameClient = new GameClient();
	}
	return s_sharedBGameClient;
}

void GameClient::fightResult(Role* a,Role* b)
{
	Logger::debug("fightResult below:...................");
}

void GameClient::equipResult()
{
	Logger::debug("equip success");
}

//几个游戏交互界面————————————————————————————
//背包
void GameClient::showVentory(){
	Logger::debug("ventory info: item 1,item2,item3,。。。。。。");
	Logger::debug("list operation in  ventory :");
	Logger::debug("1.tap item by input item id");
	Logger::debug("2.sell item");
	Logger::debug("3.select all item");

}

//角色
void GameClient::showRole(){
		Logger::debug("role info:image........");
		Logger::debug("data info:power,hp,mp,attack,armor........");
		Logger::debug("items of My Hero:........");
		Logger::debug("item1");

}


//地图
void GameClient::showMap(){
		Logger::debug("map info:........");
		Logger::debug("battle entry list:........");
}

//————————————————————————————————————————————————



NS_B_END