
#ifndef __B__BCommon__
#define __B__BCommon__

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
using namespace std;

#define NS_B_BEGIN namespace abc {  
#define NS_B_END   }

#define CC_SAFE_RELEASE_NULL(p)        do { if(p) { (p)->release(); (p) = 0; } } while(0)

#include "BBase.h"



NS_B_BEGIN
#define StringArray std::vector<string> 
#define IntArray    std::vector<int> 



NS_B_END

#endif				 
