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

NS_B_END