#ifndef __client1__GameOver__
#define __client1__GameOver__

#include <iostream>
#include "cocos2d.h"
#include "SimpleAudioEngine.h"

//#include "zhuangtaiLoad.h"
#include "headFile\zhujiemian\zhuangtaiLoad.h"
//#include "message.h"
#include "extentionClass\network\message.h"
//#include "SocketClient.h"
#include "extentionClass\network\SocketClient.h"
//#include "LayerLogin.h"
#include "loginregister\LayerLogin.h"
#include "CData.h"
#include "LodingLayer.h"
//#include "scrollViewTest.h"
//#include "homePage.h"
#include "headFile\zhujiemian\homePage.h"

using namespace cocos2d;
using namespace CocosDenshion;
using namespace std;

class GameOver:public cocos2d::CCLayer{
public:
    
    //    GameOver();
    ~GameOver();
    //    static GameOver * gameover();
    virtual bool init();
	void goBackToHome(CCObject* ted);//����������
    void win();//ʤ��
    void faild();//ʧ��
    void shake();//����
    void star1();//1X
    void star2();//2X
    void star3();//3X
    void gasRun();//�������ٶ���
    void zhaomuwujiang();
    void checkoutkapai();
    int coin;//����
    int exp;//����ֵ
    int star;//�Ǽ�
    int _power;//����
    CCSize size;
    CCSprite * qs;
    int kpcount;
    int icon;
    Loading * load;
    CCSprite * huoli;
    int itemcount;
    int huoli1;
    CCSprite * faguang;
    CCSprite * gm;
    CCSprite * gm2;
    void guangmang(char * kapainame);
	void receiveGoHomeBack(float det);
    void zhenping();
    void  repateFire(CCNode * sender);
    CREATE_FUNC(GameOver);
};
#endif /* defined(__client1__GameOver__) */
