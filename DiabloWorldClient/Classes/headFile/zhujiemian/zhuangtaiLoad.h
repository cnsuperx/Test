
#ifndef __client1__zhuangtaiLoad__
#define __client1__zhuangtaiLoad__

#include <iostream>
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
//#include "SocketClient.h"
#include "..\..\extentionClass\network\SocketClient.h"
//#include "message.h"
#include "..\..\extentionClass\network\message.h"
#include "LodingLayer.h"
//������Ҫ����json���ݣ���ȡ����������ʽ�������
using namespace cocos2d;
using namespace CocosDenshion;
using namespace std;

class zhuangtai:public cocos2d::CCLayerColor{
public:
    virtual bool init();
    virtual void onExit();
    ~zhuangtai();
    
    void send_103();
    void rec_103(float det);
    
    
    
    Loading * load;
    SocketClient * sclient;
    CCLabelTTF *levelLabel;
    void sendZGBagInfo();
    void receiveZGBagInfo(float det);
    CCMenu *backGrounds;
//   static zhuangtai * creat();
    void removeZGBag();
    void setGid(int gid);
    int getGid();
    int _gid;

    int _goldNum;
    int _agNum;
    int _tiNum;
    int _qiNum;
    int _expNum;
    CCLabelTTF *_goldLabel;
    CCLabelTTF *_ag;
    CCLabelTTF *_ti;
    CCLabelTTF *_qi;
    CCLabelTTF * nameLabel;
    int coin;
    int level;
    int vipNum;
    int Exp;
    int maxExp;
    int gas;
    int power;
    int gold;
    int __coin;
    
    std::string rolename;
    std::stringstream icoin;
    std::stringstream igold;
    std::stringstream ilevel;
   const  char * _gold;
   const  char * _coin;
   const  char * _level;
    const  char * _rollName;
    void setCoin(int coin);
    int getExp();
    int getGas();
    int getPower();
    int getMaxExp();
    int getGold();
    void openZGBag();
    int getcoin();
    void reload();
    void receiveUpdata(float det);
    void  zhuangtaiInit();
    
    void clkLinkRecharge();
    void clkHomeLink();
    
    void initData();
    
    CCSprite * _exp;
    CCSprite *backGround;
//    CCMenuItemImage *homeLink;
//    CCMenuItemImage *linkFecharge;
    void removeB();
    void upData(CCObject* det);
    
    CCSize size;
    CREATE_FUNC(zhuangtai);
};
#endif /* defined(__client1__zhuangtaiLoad__) */
