

#include "friendemploylog.h"
//#include "json.h"
#include "..\json\include\json\json.h"
#include "CData.h"
//#include "SocketManager.h"
#include "..\extentionClass\network\SocketManager.h"
#include <limits>

bool friendemploylog::init()
{
    if(!CCLayer::init())
    {
        return false;
    }
    
    this->setTouchEnabled(true);
    
    size = CCDirector::sharedDirector()->getWinSize();
    
    CCSprite *elbkg=CCSprite::create("zjm_bkg.png");
    elbkg->setPosition(ccp(size.width/2, size.height/2));
    this->addChild(elbkg);
    
    CCSprite* bkg = CCSprite::create("employedfriend.png");
    bkg->setPosition(ccp(size.width/2, size.height/2-5));
    this->addChild(bkg);
    
    
//    int w = 420;
//    int h = 430;
//    _scrollView = CCScrollView::create();
//    _scrollView->setBounceable(true);
//    _scrollView->setViewSize(CCSizeMake(w, h));
//    
//    _scrollView->setContentSize(CCSizeMake(w, 10*145));
//    
//    _scrollView->setDirection(kCCScrollViewDirectionVertical);
//    _scrollView->setPosition(ccp((size.width-w)/2, (size.height-h)/2-30));
//    this->addChild(_scrollView);
//    
//    for (int i=0; i<10; i++) {
//        
//        CCScale9Sprite* sp = CCScale9Sprite::create("employfriend_item_bkg.png");
//        sp->setContentSize(CCSizeMake(w, 140));
//        
//        CCSize spsz = sp->getContentSize();
//        sp->setPosition(ccp(w/2, i*(spsz.height + 5) + spsz.height/2));
//        _scrollView->getContainer()->addChild(sp);
//        
//        CCLabelTTF* label = CCLabelTTF::create("�ܹ���\n \n���ð���           ����ֵ", "Verdana", 23);
//        label->setHorizontalAlignment(kCCTextAlignmentLeft);
//        label->setContentSize(CCSizeMake(spsz.width-40, spsz.height-30));
//        label->setPosition(ccp(spsz.width/2, spsz.height/2));
//        sp->addChild(label);
//        
//        
//        ccColor3B color = ccc3(249, 237, 13);
//        
//        CCLabelTTF* time = CCLabelTTF::create("2013/12/12   10:38", "Verdana", 23);
//        time->setHorizontalAlignment(kCCTextAlignmentCenter);
//        time->setColor(color);
//        time->setAnchorPoint(ccp(0, 1));
//        time->setPosition(ccp(20, spsz.height-10));
//        sp->addChild(time);
//        
//        
//        CCLabelTTF* name = CCLabelTTF::create("���ѵ�����", "Verdana", 23);
//        name->setHorizontalAlignment(kCCTextAlignmentLeft);
//        name->setColor(color);
//        name->setAnchorPoint(ccp(0, 0));
//        name->setPosition(ccp(100, 75));
//        sp->addChild(name);
//        
//        
//        CCLabelTTF* city = CCLabelTTF::create("������", "Verdana", 23);
//        city->setHorizontalAlignment(kCCTextAlignmentLeft);
//        city->setColor(color);
//        city->setAnchorPoint(ccp(0, 0));
//        city->setPosition(ccp(120, 45));
//        sp->addChild(city);
//        
//        
//        
//        
//        CCLabelTTF* rslt = CCLabelTTF::create("ʤ��ͨ��", "Verdana", 23);
//        rslt->setHorizontalAlignment(kCCTextAlignmentLeft);
//        rslt->setColor(color);
//        rslt->setAnchorPoint(ccp(0, 0));
//        rslt->setPosition(ccp(20, 45));
//        sp->addChild(rslt);
//        
//        
//        
//        
//        CCLabelTTF* money = CCLabelTTF::create("1000", "Verdana", 23);
//        money->setHorizontalAlignment(kCCTextAlignmentLeft);
//        money->setColor(color);
//        money->setAnchorPoint(ccp(0, 0));
//        money->setPosition(ccp(140, 15));
//        sp->addChild(money);
//        
//        
//        
//        
//        
//        CCLabelTTF* hl = CCLabelTTF::create("100", "Verdana", 23);
//        hl->setHorizontalAlignment(kCCTextAlignmentLeft);
//        hl->setColor(color);
//        hl->setAnchorPoint(ccp(0, 0));
//        hl->setPosition(ccp(300, 15));
//        sp->addChild(hl);
//        
//        
//    }
//
//    _scrollView->setContentOffset(ccp(0, -10*145+h));
    
    
//    return true;
    
    Json::FastWriter writer;
    Json::Value root;
    
    root["characterId"]=CData::getCData()->getCharactorId();
    
    
    string json_file=writer.write(root);
    SocketManager::getInstance()->sendMessage(json_file.c_str(), 2309);
    this->schedule(schedule_selector(friendemploylog::rec_2309));

    return true;
}

void friendemploylog::registerWithTouchDispatcher()
{
    
    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this,(std::numeric_limits<int>::min)(), true);
    CCLayer::registerWithTouchDispatcher();
}

bool friendemploylog::ccTouchBegan(cocos2d::CCTouch *touch, cocos2d::CCEvent *event)
{
    
    istouch=_scrollView->ccTouchBegan(touch, event);
    
    if(istouch)
    {
        return true;
    }
    else
    {
        return false;
    }
    // ��Ϊ�ص��������ˣ�����resumeд��������
    //   CCLog("loading layer");
    return true;
}

void friendemploylog::ccTouchMoved(cocos2d::CCTouch *touch, cocos2d::CCEvent *event)
{
    if(istouch){
        
        _scrollView->ccTouchMoved(touch, event);
    }
}
void friendemploylog::ccTouchEnded(cocos2d::CCTouch *touch, cocos2d::CCEvent *event)
{
    
    if (istouch) {
        _scrollView->ccTouchEnded(touch, event);
        
        istouch=false;
        
    }
}



void friendemploylog::rec_2309( float )
{
    Message *revMsg=(Message *)CData::getCData()->m_dictionary->objectForKey(2309);
    CData::getCData()->m_dictionary->removeObjectForKey(2309);
    
    
    if(revMsg)
    {
        
        this->unschedule(schedule_selector(friendemploylog::rec_2309));
        char* data=revMsg->data;
        CCLog("%s",data);
        Json::Reader read;
        Json::Value root;
        Json::Value jsonData;
        Json::Value petlist;
        
        
        if(read.parse(data, root)){
            jsonData=root["data"];
            petlist=jsonData["recordlist"];
            
            int len = petlist.size();
            
            int w = 420;
            int h = 490;
            _scrollView = CCScrollView::create();
            _scrollView->setBounceable(true);
            _scrollView->setViewSize(CCSizeMake(w, h+5));//w, h-15
            
            _scrollView->setContentSize(CCSizeMake(w, len*145));
            
            _scrollView->setDirection(kCCScrollViewDirectionVertical);
            _scrollView->setPosition(ccp((size.width-w)/2, (size.height-h)/2-15));
            this->addChild(_scrollView);
            
            for (int i=0; i<len; i++) {
                
                CCScale9Sprite* sp = CCScale9Sprite::create("employedfriend_item_bkg.png");
                sp->setContentSize(CCSizeMake(w-5, 140));
                
                CCSize spsz = sp->getContentSize();
                sp->setPosition(ccp(w/2, i*(spsz.height + 5) + spsz.height/2));
                _scrollView->getContainer()->addChild(sp);
                
                CCLabelTTF* label = CCLabelTTF::create("���Ӷ\n \n���ð���           ����ֵ", "hycc.ttf", 23);
                label->setHorizontalAlignment(kCCTextAlignmentLeft);
                label->setContentSize(CCSizeMake(spsz.width-40, spsz.height-30));
                label->setPosition(ccp(spsz.width/2, spsz.height/2));
                sp->addChild(label);
                
                
                ccColor3B color = ccc3(249, 237, 13);
                
                CCLabelTTF* time = CCLabelTTF::create(petlist[i]["datestr"].asCString(), "hycc.ttf", 23);
                time->setHorizontalAlignment(kCCTextAlignmentCenter);
                time->setColor(color);
                time->setAnchorPoint(ccp(0, 1));
                time->setPosition(ccp(20, spsz.height-10));
                sp->addChild(time);
                
                
                CCLabelTTF* name = CCLabelTTF::create(petlist[i]["rolename"].asCString(), "hycc.ttf", 23);
                name->setHorizontalAlignment(kCCTextAlignmentLeft);
                name->setColor(color);
                name->setAnchorPoint(ccp(0, 0));
                name->setPosition(ccp(100, 75));
                sp->addChild(name);
                
                
                CCLabelTTF* city = CCLabelTTF::create(petlist[i]["zyname"].asCString(), "hycc.ttf", 23);
                city->setHorizontalAlignment(kCCTextAlignmentLeft);
                city->setColor(color);
                city->setAnchorPoint(ccp(0, 0));
                city->setPosition(ccp(120, 45));
                sp->addChild(city);
                
                
                
                
                CCLabelTTF* rslt;
                rslt =CCLabelTTF::create(petlist[i]["bresult"].asInt() == 1 ?"ʤ��ͨ��":"ͨ��ʧ��", "Verdana", 23);
                rslt->setHorizontalAlignment(kCCTextAlignmentLeft);
                rslt->setColor(color);
                rslt->setAnchorPoint(ccp(0, 0));
                rslt->setPosition(ccp(20, 45));
                sp->addChild(rslt);
                
                
                char tmp[15] = "";
                sprintf(tmp, "%d",petlist[i]["coin"].asInt());
                CCLabelTTF* money = CCLabelTTF::create(tmp, "hycc.ttf", 23);
                money->setHorizontalAlignment(kCCTextAlignmentLeft);
                money->setColor(color);
                money->setAnchorPoint(ccp(0, 0));
                money->setPosition(ccp(140, 15));
                sp->addChild(money);
                
                
                
//                char tmp[15] = "";
                sprintf(tmp, "%d",petlist[i]["huoli"].asInt());
                CCLabelTTF* hl = CCLabelTTF::create(tmp, "hycc.ttf", 23);
                hl->setHorizontalAlignment(kCCTextAlignmentLeft);
                hl->setColor(color);
                hl->setAnchorPoint(ccp(0, 0));
                hl->setPosition(ccp(300, 15));
                sp->addChild(hl);
                
                
            }
            
            _scrollView->setContentOffset(ccp(0, -len*145+h));
            
            
            
            
            
            
            
            
            
//            int w = 600;
//            _scrollView = CCScrollView::create();
////            _scrollView->setDelegate(this);
//            _scrollView->setBounceable(false);
//            _scrollView->setAnchorPoint(ccp(0, 0));
//            _scrollView->setViewSize(CCSizeMake(w, 800));
//            
//            _scrollView->setContentSize(CCSizeMake(w, petlist.size()*800));
//            
//            _scrollView->setDirection(kCCScrollViewDirectionVertical);
//            _scrollView->setPosition(ccp(size.width/2, size.height/2));
//            this->addChild(_scrollView);
//            
//            for (int i=0; i<petlist.size(); i++) {
//                
//                CCScale9Sprite* sp = CCScale9Sprite::create("employfriend_item_bkg.png");
//                sp->setContentSize(CCSizeMake(400, 140));
//                
////                CCSprite* sp = CCSprite::create("friend_employitem-bkg.png");
//                sp->setPosition(ccp(w/2, i*(sp->getContentSize().height)));
//                _scrollView->getContainer()->addChild(sp);
//                
//            }
        
//                heroItemData* tmpdata = new heroItemData();
//                
//                //               tmpdata->sz =petlist[i]["sz"].asBool();
//                //              tmpdata->m_mane =petlist[i]["name"].asString().c_str();
//                //              tmpdata->level =petlist[i]["level"].asInt();
//                //              tmpdata->pinzhi =petlist[i]["pinzhi"].asInt();
//                //              tmpdata->tpid =petlist[i]["tpid"].asInt();
//                //              tmpdata->sj =petlist[i]["sj"].asInt();
//                //              tmpdata->petId =petlist[i]["petId"].asInt();
//                //                tmpdata->icons = petlist[i]["icon"].asInt();
//                
//                
//                tmpdata->petId =petlist[i]["chaid"].asInt();
//                //                tmpdata->icons = petlist[i]["icon"].asInt();
//                tmpdata->tpid = petlist[i]["chatype"].asInt();
//                tmpdata->tempid = petlist[i]["tempid"].asInt();
//                
//                ((heroItem*)dic->objectForKey(i+10))->setData(tmpdata);
                
                
            }

    }

}