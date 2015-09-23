#include "common.h"

class Role {

public:
	std::vector<int> Items;//
	int power;//总战力	
	int hp;//血
	int mp;//魔法值
	int armor;//防御    
	int attack;//攻击

bool fight(Role* enymy);
bool autoFight();


Role();
virtual ~Role();
private:

};