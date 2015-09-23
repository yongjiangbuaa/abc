class MainRole {

	MainRole(
		power =0 ;
		hp =0;
		mp =0;
		armor =0;
		attack =0;
		)
	{
	//initaliise
	}
	//战斗
     fight(enymy){
    	//回合攻击，结算数值
    	copy = copyPlayer;
    	boolean gameover = false;
    	boolean result = 1;//1 胜 0败

    	while(!gameover){
	    	if(lossHp < copy.hp){
	    		lossHp - =enymy.attack;
	    	}else{
	    		gameover = true;
	    		result = 1;
	    		continue;
	    	}

	    	if(enymyLossHp < enymy.hp){
	    		enymyLossHp -= copyPlayer.attack;
	    	}else{
	    		gameover = true;
	    		result = 0;
	    		continue;
	    	}
    	}


    	//战斗结果，计算战胜此敌人的掉落
    	calculateLoot(enymy);
    	return result;
    }

	//挂机隔段时间打一次给定敌人涨数值
  autoFight{
    	fight( a enymy choose by System);
    }

}