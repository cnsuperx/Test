
#ifndef __wx__ArenaWindow__
#define __wx__ArenaWindow__

#include <iostream>

#include "cocos2d.h"


#include "LodingLayer.h"

USING_NS_CC;

class ArenaWindow:public CCLayer
{
public:
    CREATE_FUNC(ArenaWindow);
    
private:
    
    virtual bool init();
    void send_3700();
	void recv_3700(float det);
	void recv_3704(float det);
    
    void clk_battle(CCNode* sender);
	void clk_battle(CCObject* sender);
    
    
    Loading* load;
    CCSize size;
    
};

#endif /* defined(__wx__ArenaWindow__) */
