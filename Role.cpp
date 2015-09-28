#include "Role.h"
#include "Logger.h"
#include "GameClient.h"

NS_B_BEGIN
Role::Role():
		power(0),
		hp(0),
		mp(0),
		armor(0),
		attack(0)
	{
	//initaliise
	}

Role::Role(string a )
{

}

Role::~Role()
{

}	
	//战斗
bool Role::fight(Role* enymy)
{
    	//回合攻击，结算数值
//    	copy = copyPlayer;
    	bool gameover = false;
    	bool result = 1;//1 胜 0败
    	int lossHp = 0;
    	int enymyLossHp = 0;

    	//战斗逻辑，可以在后台瞬间算完。也可以在客户端回合展现以及回放
    	while(!gameover)
    	{
    		//sleep(3);//3秒一回合
	    	if(lossHp < this->hp)
	    	{
	    		lossHp -= enymy->attack;
	    	}else
	    	{
	    		gameover = true;
	    		result = 1;
	    		continue;
	    	}

	    	if(enymyLossHp < enymy->hp)
	    	{
	    		enymyLossHp -= this->attack;
	    	}else
	    	{
	    		gameover = true;
	    		result = 0;
	    		continue;
	    	}
    	}


    	//后台系统出战斗结果，
    	//包括战胜此敌人的掉落
    	//其他   
    	GameClient::getInstance()->fightResult(this,enymy);
    	this->updateUI();
    	return result;
    }

	//挂机隔段时间打一次给定敌人涨数值
bool Role::autoFight()
{
    	this->fight( this);
    	return true;
}

bool Role::equip(int item)
{
	this->items.push_back(item); //挂上
	//效果变化
	GameClient::getInstance()->equipResult();
	this->updateUI();
	return true;
}

//mingw 下to_string bug.只好自己定义一个
/**
string to_string(int a)
{
	return string("abc");
}
**/

void Role::updateUI()
{
//	std::string s = to_string(this->power);
//	char const *pchar = s.c_str();  //use char const* as target type
	//更新界面数值
	Logger::debug(string("power = ").append(to_string(this->power)).c_str());
	Logger::debug(string("hp = " ).append(to_string(this->hp)).c_str());
	Logger::debug(string("mp = ").append(to_string(this->mp)).c_str());
	Logger::debug(string("armor = ").append(to_string(this->armor)).c_str());
	Logger::debug(string("attack = ").append(to_string(this->attack)).c_str());
//	Logger::debug(this->items);
//	Logger::debug(this->inventory);		
}




NS_B_END