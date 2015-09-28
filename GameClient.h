
#ifndef __B__BGameClient__
#define __B__BGameClient__

#include "common.h"
#include "Role.h"
NS_B_BEGIN
class GameClient :  BBase
{
public:
	static GameClient* getInstance();
	void fightResult(Role* a,Role* b);
	void equipResult();
	void showVentory();
	void showRole();
	void showMap();
private:
	GameClient();
	virtual ~GameClient();

};
NS_B_END
#endif