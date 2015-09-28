#include "BBase.h"



class GameWorld : BBase{

public:
		~GameWorld();
		GameWorld* shared();
		bool InitializeGameWorld();
		bool show(Scene* scene);
private:	
	GameWorld();
}