//
//  MailWindow.h
//  wx
//
//  Created by guoyahui on 13-7-17.
//
//

#ifndef __wx__MailWindow__
#define __wx__MailWindow__

#include <iostream>

#include "cocos2d.h"
#include "cocos-ext.h"
#include "MailRenderer.h"
#include "LodingLayer.h"

USING_NS_CC;
USING_NS_CC_EXT;

class MailWindow:public CCLayer,public CCTableViewDelegate,public CCTableViewDataSource
{
public:
    CREATE_FUNC(MailWindow);
    
private:
    
    virtual bool init();
    
    
    virtual void scrollViewDidScroll(CCScrollView* view);
    
    virtual void scrollViewDidZoom(CCScrollView* view);
    
    //�������¼������Լ�����������һ������
    virtual void tableCellTouched(CCTableView* table, CCTableViewCell* cell);
    //ÿһ��Ŀ�Ⱥ͸߶�
    virtual CCSize cellSizeForTable(CCTableView *table);
    //�����б�ÿһ�������
    virtual CCTableViewCell* tableCellAtIndex(CCTableView *table, unsigned int idx);
    //һ��������
    virtual unsigned int numberOfCellsInTableView(CCTableView *table);

    
    
    
    virtual void  registerWithTouchDispatcher();
    virtual bool ccTouchBegan(CCTouch* touch, CCEvent* event);
    virtual void ccTouchMoved(CCTouch* touch, CCEvent* event);
    virtual void ccTouchEnded(CCTouch* touch, CCEvent* event);
    
    
	void rec_501(float det);
    
    void send_505();
	void rec_505(float det);
    
	void clk_btn_write(CCObject*);
    
    MailRenderer* tmpCell;
    int tmpid;
    
    Loading* load;
    CCTableView* tableView;
    
    CCSize size;
    CCArray* arr;
    
    bool istouch;

};

#endif /* defined(__wx__MailWindow__) */
