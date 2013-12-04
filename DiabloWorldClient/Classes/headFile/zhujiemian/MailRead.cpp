//
//  MailRead.cpp
//  wx
//
//  Created by guoyahui on 13-7-17.
//
//

#include "MailRead.h"
#include <limits>

static MailRead* pop = NULL;
bool MailRead::init(){
    if(!CCLayerColor::initWithColor(ccc4(0, 0, 0, 180))){
        return false;
    }
    
    this->setTouchEnabled(true);
    
    
    CCSize size=CCDirector::sharedDirector()->getWinSize();
    this->setContentSize(size);
    
    
    CCSprite *bkg = CCSprite::create("mail_read_bkg.png");
    bkg->setPosition(ccp(size.width/2, size.height/2));
    this->addChild(bkg);
    CCSize sz = bkg->getContentSize();
    
    ccColor3B black = ccc3(36, 24, 6);
    
//    CCLabelTTF* title = CCLabelTTF::create("��  ʾ", "Verdana-Bold", 30);
//    title->setColor(black);
//    title->setAnchorPoint(ccp(0.5, 1));
//    title->setPosition(ccp(sz.width/2, sz.height-1));
//    bkg->addChild(title);
    
    sender = CCLabelTTF::create("", "hycc.ttf", 24,CCSizeMake(400, 0),kCCTextAlignmentLeft);
    sender->setColor(black);
    sender->setAnchorPoint(ccp(0, 0.5));
    sender->setPosition(ccp(140, 240));
    bkg->addChild(sender);
    
    title = CCLabelTTF::create("", "hycc.ttf", 24,CCSizeMake(400, 0),kCCTextAlignmentLeft);
    title->setColor(black);
    title->setAnchorPoint(ccp(0, 0.5));
    title->setPosition(ccp(150, 186));
    bkg->addChild(title);
    
    desc = CCLabelTTF::create("", "hycc.ttf", 24,CCSizeMake(400, 0),kCCTextAlignmentLeft);
    desc->setColor(black);
    desc->setAnchorPoint(ccp(0, 1));
    desc->setPosition(ccp(115, 152));
    bkg->addChild(desc);
    
    
    CCMenuItemImage* bz = CCMenuItemImage::create("common_btn_ok_1.png", "common_btn_ok_2.png", this, menu_selector(MailRead::close));
    //    bz->setAnchorPoint(ccp(0,0));
    
    //    bz->setPosition(ccp(sz.width/2, 30));
    bz->setScale(1.3);
    
    btnsMenu = CCMenu::create(bz,NULL);
    btnsMenu->setPosition(ccp(sz.width/2,60));
    
    bkg->addChild(btnsMenu);
    
    
    return true;
}

void MailRead::show(MailInfo* info)
{
    if(pop == NULL)
    {
        pop = MailRead::create();
    }
    
    CCDirector::sharedDirector()->getRunningScene()->addChild(pop);
    pop->sender->setString(info->sender.c_str());
    pop->title->setString(info->title.c_str());
    pop->desc->setString(info->content.c_str());
}

void MailRead::close( CCObject* )
{
    CCDirector::sharedDirector()->getTouchDispatcher()->removeDelegate(this);
    pop->removeFromParentAndCleanup(true);
    pop=NULL;
    
}

MailRead::~MailRead()
{
    
    CCLog("MailRead destroy");
    
    
}

void MailRead::registerWithTouchDispatcher()
{
    
    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this,(std::numeric_limits<int>::min)(), true);
    CCLayer::registerWithTouchDispatcher();
}

bool MailRead::ccTouchBegan(cocos2d::CCTouch *touch, cocos2d::CCEvent *event)
{
    
    istouch=btnsMenu->ccTouchBegan(touch, event);
    
    // ��Ϊ�ص��������ˣ�����resumeд��������
    //   CCLog("loading layer");
    return true;
}

void MailRead::ccTouchMoved(cocos2d::CCTouch *touch, cocos2d::CCEvent *event)
{
    if(istouch){
        
        btnsMenu->ccTouchMoved(touch, event);
    }
}
void MailRead::ccTouchEnded(cocos2d::CCTouch *touch, cocos2d::CCEvent *event)
{
    
    if (istouch) {
        btnsMenu->ccTouchEnded(touch, event);
        
        istouch=false;
        
    }
}