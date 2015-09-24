
#ifndef __ABC__BGameClient__
#define __ABC__BGameClient__

#include "common.h"
#include "Role.h"
NS_B_BEGIN
class GameClient{
public:
	static GameClient* sInstance;
	void fightResult(Role* a,Role* b);
	void equipResult();
	static GameClient* getInstance();
private:
	GameClient();
	~GameClient();

};
NS_B_END
#endif