#include "GameClient.h"
#include "Logger.h"
NS_B_BEGIN


GameClient* GameClient::getInstance()
{
	if (sInstance == NULL)
	{
		sInstance = new GameClient();
	}
	return sInstance;
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