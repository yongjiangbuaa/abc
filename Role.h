#include "common.h"

class Role {

public:
	std::vector<int> items;//
	int power;//总战力	
	int hp;//血
	int mp;//魔法值
	int armor;//防御    
	int attack;//攻击
	std::vector<int> inventory;

bool fight(Role* enymy);
bool autoFight();
bool equip(int item);
bool showStatusOnUI();
void updateUI();

Role();
virtual ~Role();
private:

};