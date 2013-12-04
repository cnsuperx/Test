#include "homePage.h"
#include "CCScrollView.h"
//#include "zhuangtaiLoad.h"
#include "..\..\headFile\zhujiemian\zhuangtaiLoad.h"
//#include "json.h"
#include "..\..\json\include\json\json.h"
//#include "LayerLogin.h"
#include "..\..\loginregister\LayerLogin.h"
//#include "SocketManager.h"
#include "..\..\extentionClass\network\SocketManager.h"
//#include "CustomPop.h"
#include "..\..\headFile\zhujiemian\CustomPop.h"


void homePage::onExit()
{
    CCLayer::onExit();
}

homePage::~homePage()
{
    CCTextureCache::sharedTextureCache()->removeUnusedTextures();
}

bool homePage::init()
{
	if(!CCLayer::init()){
		return false;
	}

	CCSpriteFrameCache::sharedSpriteFrameCache()->removeSpriteFrames();
	CCTextureCache::sharedTextureCache()->removeAllTextures();

	load=Loading::create();
	this->addChild(load,9999);

	int characterId=CData::getCData()->getCharactorId();

	Json::FastWriter writer;
	Json::Value sendMessage;
	sendMessage["characterId"]=characterId;
	sendMessage["index"]=0;
	std::string json_file_jianghu=writer.write(sendMessage);
	SocketManager::getInstance()->sendMessage(json_file_jianghu.c_str(), 4500);
	this->schedule(schedule_selector(homePage::rec_4500));

	size = CCDirector::sharedDirector()->getWinSize();
	return true;
}
void homePage::initTitle()
{
}

//�����в���ͼ
void homePage::btnsLoading()
{
	layerMainMap= LevelMap::create();//  Btns::create();
	layerMainMap->setAnchorPoint(ccp(0, 0));
	this->addChild(layerMainMap,0);
}

void homePage::zhuangtaiLoad()
{
	zhuangtai1 = zhuangtai::create();
	zhuangtai1->setVisible(true);
	zhuangtai1->setPosition(ccp(0, size.height-100));
	this->addChild(zhuangtai1,1);
}

void homePage::openPersonal(CCObject* det)
{
    this->removelayers();
    btnEmployFriends->setVisible(false);
    btnHeCheng->setVisible(false);
    layerPersonInfo = personalinfo::create();
    this->addChild(layerPersonInfo);
}

void homePage::removelayers()
{
    this->removeChild(layerMainMap, true);
    this->removeChild(layerPersonInfo);
    this->removeChild(layerNewBuZhen);
    this->removeChild(compound);
    this->removeChild(layerFriend);
}

void homePage::openArenaWindow(CCObject* det)
{
    //CustomPop::show("�����ڴ�");
    this->removelayers();
    btnEmployFriends->setVisible(false);
    btnHeCheng->setVisible(false);
    layerArena = ArenaWindow::create();
    this->addChild(layerArena);
}

void homePage::openMailWindow(CCObject* det)
{
    this->removelayers();
    btnEmployFriends->setVisible(false);
    btnHeCheng->setVisible(false);
    layerMail = MailWindow::create();
    this->addChild(layerMail);

    //CustomPop::show("�����ڴ�");
}

void homePage::employFriends(CCObject* det)
{
    this->removelayers();
    btnEmployFriends->setVisible(false);
    btnHeCheng->setVisible(false);
    layerFriend = friendmain::create();
    this->addChild(layerFriend);
    //CustomPop::show("�����ڴ�");
  
}

void homePage::recharge(CCObject* det)
{
    //CustomPop::show("��δ��ͨ");
	CustomPop::show("Has not yet opened");
}

//�²����ܰ�ť
void homePage::downBtnLoading(){
    btnHeCheng = CCMenuItemImage::create("zjm_hc_1.png", "zjm_hc_2.png", this, menu_selector(homePage::openHeCheng));
    btnHeCheng->setPosition(ccp(70, size.height-165));
    
    btnEmployFriends = CCMenuItemImage::create("zjm_employfriends_1.png", "zjm_employfriends_2.png", this, menu_selector(homePage::employFriends));
    btnEmployFriends->setPosition(ccp(size.width-60, size.height-165));
    
    CCMenuItemImage *btnPersonal = CCMenuItemImage::create("zjm_personal_1.png", "zjm_personal_1.png", this, menu_selector(homePage::openPersonal));
    btnPersonal->setAnchorPoint(ccp(0.5, 0.5));
    btnPersonal->setPosition(ccp(size.width/2, 733));

    linkFecharge = CCMenuItemImage::create("zjm_linkrecharge_1.png", "zjm_linkrecharge_2.png", this, menu_selector(homePage::recharge));
    linkFecharge->setAnchorPoint(ccp(0, 0));
    linkFecharge->setPosition(ccp(50, 25));
    
    btnMail = CCMenuItemImage::create("zjm_mail_1.png", "zjm_mail_2.png", this, menu_selector(homePage::openMailWindow));
    btnMail->setAnchorPoint(ccp(0, 0));
    btnMail->setPosition(ccp(150, 25));
    
    btnArena = CCMenuItemImage::create("zjm_arena_1.png", "zjm_arena_2.png", this, menu_selector(homePage::openArenaWindow));
    btnArena->setAnchorPoint(ccp(0, 0));
    btnArena->setPosition(ccp(240, 25));
    
    
    homeLink = CCMenuItemImage::create("zjm_linkhome_1.png", "zjm_linkhome_2.png", this, menu_selector(homePage::mainView));
    homeLink->setAnchorPoint(ccp(1, 0));
    homeLink->setPosition(ccp(size.width-45,25));
    
    
    menu=CCMenu::create(btnHeCheng,btnEmployFriends,btnPersonal,linkFecharge,homeLink,btnMail,btnArena,NULL);
    menu->setAnchorPoint(ccp(0, 0));
    menu->setPosition(ccp(0, 0));

    this->addChild(menu,6,1878);
}
void homePage::mainView(CCObject* det){
	this->removelayers();
	btnEmployFriends->setVisible(true);
	btnHeCheng->setVisible(true);
	layerMainMap= LevelMap::create();//  Btns::create();
	layerMainMap->setAnchorPoint(ccp(0, 0));
	this->addChild(layerMainMap,0);

	CData::getCData()->setyinxiao();
	zhuangtai1->upData(NULL);
}

void homePage::openNewBuZhen()
{
	this->removelayers();
	btnEmployFriends->setVisible(false);
	btnHeCheng->setVisible(false);
	layerNewBuZhen = newBuZhen::create();
	this->addChild(layerNewBuZhen);
}

void homePage::openHeCheng(CCObject*){
	//CustomPop::show("�����ڴ�");
	this->removelayers();
	btnEmployFriends->setVisible(false);
	btnHeCheng->setVisible(false);
	compound=CHecheng::create();
	this->addChild(compound);
}

void homePage::rec_4500(float det)
{
	Message *revMsg=(Message *)CData::getCData()->m_dictionary->objectForKey(4500);
	CData::getCData()->m_dictionary->removeObjectForKey(4500);

	if(revMsg)
	{
		this->unschedule(schedule_selector(homePage::rec_4500));//ɾ��ˢ��
		CData::getCData()->cityData = revMsg->data;
		load->removeFromParent();

		this->initTitle();//���ر���
		this->btnsLoading();//�����в���ť
		this->zhuangtaiLoad();//����״̬��
		this->downBtnLoading();//���صײ���ť

		zhuangtai1->upData(NULL);

		if (CData::getCData()->isArenaFire) 
		{
			this->openArenaWindow(NULL);
		}
	}
}


