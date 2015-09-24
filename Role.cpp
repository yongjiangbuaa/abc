#include "Role.h"
#include "Logger.h"

Role::Role()
:
		power(0),
		hp(0),
		mp(0),
		armor(0),
		attack(0)
	{
	//initaliise
	}
	//战斗
bool Role::fight(Role* enymy){
    	//回合攻击，结算数值
//    	copy = copyPlayer;
    	bool gameover = false;
    	bool result = 1;//1 胜 0败
    	int lossHp = 0;
    	int enymyLossHp = 0;

    	//战斗逻辑，可以在后台瞬间算完。也可以在客户端回合展现以及回放
    	while(!gameover){
    		//sleep(3);//3秒一回合
	    	if(lossHp < this->hp){
	    		lossHp -= enymy->attack;
	    	}else{
	    		gameover = true;
	    		result = 1;
	    		continue;
	    	}

	    	if(enymyLossHp < enymy->hp){
	    		enymyLossHp -= this->attack;
	    	}else{
	    		gameover = true;
	    		result = 0;
	    		continue;
	    	}
    	}


    	//后台系统出战斗结果，
    	//包括战胜此敌人的掉落
    	//其他   
    	int itemId = gameServer->fightResult(this,enymy);
    	this->inventory.push_back(itemId);
    	this->updateUI();
    	return result;
    }

	//挂机隔段时间打一次给定敌人涨数值
bool Role::autoFight(){
    	this->fight( this);
    }

bool Role::equip(int item){
	this->items.push_back(item); //挂上
	//效果变化
	gameServer->equipResult();
	this->updateUI();
}


void Role::updateUI(){
	//更新界面数值
	Logger.debug("power = " + this->power);
	Logger.debug("hp = " + this->hp);
	Logger.debug("mp = " + this->mp);
	Logger.debug("armor = " + this->armor);
	Logger.debug("attack = " + this->attack);
	Logger.debug("power = " + this->power);
	Logger.debug(this->items);
	Logger.debug(this->inventory);		
}




