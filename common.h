
#ifndef __ABC__BCommon__
#define __ABC__BCommon__

#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define NS_B_BEGIN namespace abc {  
#define NS_B_END   }

#define CC_SAFE_RELEASE_NULL(p)        do { if(p) { (p)->release(); (p) = 0; } } while(0)

#include "BBase.h"
NS_B_BEGIN



NS_B_END

#endif				 
