//
//  homePage.h
//  Client
//
//  Created by lh on 13-2-22.

#ifndef __Client__homePage__
#define __Client__homePage__

#include <iostream>
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include "CCScrollView.h"

//#include "MyMenu.h"
#include "..\..\extentionClass\MyMenu.h"
//#include "LayerLogin.h"
#include "..\..\loginregister\LayerLogin.h"
#include "zhuangtaiLoad.h"
#include "LodingLayer.h"
#include "ArenaWindow.h"

#include "popwindow.h"
#include "personalinfo.h"
//#include "newBuZhen.h"
#include "..\..\buzhen\newBuZhen.h"
//#include "CHecheng.h"
#include "..\..\hecheng\CHecheng.h"
#include "LevelMap.h"
#include "friendmain.h"
#include "MailWindow.h"

using namespace std;
using namespace cocos2d;
using namespace CocosDenshion;


class homePage:public cocos2d::CCLayer{
public:

    ~homePage();
    virtual void onExit();
    
    virtual bool init();
    
    
    void openNewBuZhen();
    void openArenaWindow(CCObject* det);
    
    zhuangtai *zhuangtai1;
    ArenaWindow* layerArena;    
    CHecheng *compound;
    friendmain *layerFriend;
    MailWindow *layerMail;
    CREATE_FUNC(homePage);
    
private:
    void recPersonal();
    void recEquips();
    
    void rec_4500(float det);
    
    

    //—ÃŒÌ ¥Û—„ Ãÿ–ß
//    void maintexiaoDY();
//    void maintexiaoYW();
//    void runtexiaoDY();
//    void runtexiaoYW();
//    void dyvisable();
//    void ywvisable();
    
    
    
    
    void zhuangtaiLoad();
    void initTitle();
    void downBtnLoading();
    void btnsLoading();
    
    
    void mainView(CCObject* det);
    void openPersonal(CCObject* det);
    void openHeCheng(CCObject* det);
    void employFriends(CCObject* det);
    void recharge(CCObject* det);
    void openMailWindow(CCObject* det);
    
    
    
    void removelayers();

    CCSize size;
    
    LevelMap * layerMainMap;
    personalinfo *layerPersonInfo;
    newBuZhen * layerNewBuZhen; 
    
    
    CCMenuItemImage *btnHeCheng;
    CCMenuItemImage *btnEmployFriends;
    CCMenuItemImage* btnArena;
    CCMenuItemImage* btnMail;
    CCMenuItemImage *homeLink;
    CCMenuItemImage *linkFecharge;
    CCMenu *menu;
    
    Loading * load;
    
    
   
};
#endif /* defined(__Client__homePage__) */
