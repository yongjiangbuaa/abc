
#ifndef __ABC__BRole__
#define __ABC__BRole__

#include "common.h"

NS_B_BEGIN
class Role : BBase 
{

public:
	IntArray items;//
	int power;//总战力	
	int hp;//血
	int mp;//魔法值
	int armor;//防御    
	int attack;//攻击
	IntArray inventory;

bool fight(Role* enymy);
bool autoFight();
bool equip(int item);
bool showStatusOnUI();
void updateUI();

Role();
Role(string a );
virtual ~Role();
private:

};
NS_B_END
#endif