
#ifndef __client1__popwindow__
#define __client1__popwindow__

#include <iostream>
#include"cocos2d.h"
#include "myobject.h"
#include "LodingLayer.h"
//#include "newBuZhen.h"
#include "..\..\buzhen\newBuZhen.h"

USING_NS_CC;
using namespace std;



class buildingpop:public CCLayerColor{
public:
    
    
    virtual bool init();
//    virtual void onExit();
    ~buildingpop();
    
    virtual void  registerWithTouchDispatcher();
    virtual bool ccTouchBegan(CCTouch* touch, CCEvent* event);
    virtual void ccTouchMoved(CCTouch* touch, CCEvent* event);
    virtual void ccTouchEnded(CCTouch* touch, CCEvent* event);
    bool istouch;
    
    void receiveFireData(float dt);
    void show(MapItem *item);
    void hide();
    
    void close(CCObject* pSender);
    void fight(CCObject* pSender);
    void buzhen(CCObject* pSender);
    
    
    
    
    
    
MapItem *item;
CCMenu * btnsMenu;
    CCMenuItemImage * ft;
    CCMenuItemImage * cl;
    CCMenuItemImage * bz;
    Loading * load;
    bool lock;
    
    CCLabelTTF *name;
    CCLabelTTF *namedesc;
    CCLabelTTF *name1;;
    CCLabelTTF *namedesc1;
    CCLabelTTF *name2;
    
    CCLabelTTF* goldlabel;
    CCLabelTTF* weilabel;
    CCLabelTTF* wulabel;
    
    CREATE_FUNC(buildingpop);
};


#endif /* defined(__client1__popwindow__) */
