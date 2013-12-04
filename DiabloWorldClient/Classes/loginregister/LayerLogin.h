#ifndef Client_LayerLogin_h
#define Client_LayerLogin_h
#include"cocos2d.h"
#include"cocos-ext.h"
//#include "SocketClient.h"
#include "extentionClass\network\SocketClient.h"
#include "CData.h"
#include "LodingLayer.h"
#include "TeXiao.h"

USING_NS_CC;
USING_NS_CC_EXT;

using namespace std;

class LayerLogin:public CCLayer
{
    
public:
    
    CREATE_FUNC(LayerLogin);
    virtual bool init();
    virtual void onExit();
    ~LayerLogin();
    
    CCSprite * texiao;
    bool hasRole;
    Loading * load;

    CCSprite * logo;
    CCSize winSize;
    
    char * denglu1;
    
    void removeLoader();
   
    void receiveLoginData(float delta);
    void sendPersonalData(float delta);
    void receivePersonalData(float delta);
    
    void receiveCityData(float delta);
    
    
    void zhenping();
    char * sendData;

	void LayerLogin::firefly(CCObject* ted);
	void LayerLogin::jiumiaoshanyou(CCObject* ted);
	void callNull1(CCObject* ted);
	void callNull2(CCObject* ted);

private:
    
    void initUI();
    void loadRes();
    
    // bool init();
   
    void menuItemCallbackLogin(CCObject* pSender);
    void menuItemCallbackStart(CCObject* pSender);
    void menuItemCallbackSelector(CCObject* pSender);
    
    
    
    
    
    
    //CCLabelTTF *label1;
    //CCLabelTTF *label2;
    CCMenuItemImage *url1,*url2;
    CCSprite *pSpriteDialogLogin;
    CCEditBox* editBoxUsername;
    CCEditBox* editBoxPassword;
    
};
#endif
