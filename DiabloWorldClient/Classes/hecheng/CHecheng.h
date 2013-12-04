
#ifndef __client1__CHecheng__
#define __client1__CHecheng__

#include <iostream>
#include "cocos2d.h"
#include "cocos-ext.h"
//#include "SocketClient.h"
#include "..\extentionClass\network\SocketClient.h"
//#include "message.h"
#include "..\extentionClass\network\message.h"
#include "CData.h"
//#include "LayerLogin.h"
#include "..\loginregister\LayerLogin.h"
//#include <fstream.h>
#include "LodingLayer.h"
#include "hcitemdata.h"

USING_NS_CC;
USING_NS_CC_EXT;
class Peifang:public CCObject
{
public:
    Peifang(){tempid =0;icon=0;id=0;name="";levelRequire=0;baseQuality=0;buyingRateCoin=0;help = "";hp=0;gj=0;fy=0;shb=0;bj=0;};
    int tempid;             //�䷽��ģ��id
    int icon;               //ͼ��
    int id;                 //�䷽��id
    string name;            //�䷽������
    int levelRequire;       //�ȼ�
    int baseQuality;        //Ʒ��
    int buyingRateCoin;     //�۸�
    string help;            //����
    int hp;                 //��Ѫ
    int gj;                 //����
    int fy;                 //����
    int shb;                //����
    int bj;                 //����
    bool isxz;
    
};
class hcpf:public CCObject{
public:
    hcpf(){
        jiage=0;
        name="";
        pz=0;
        icon=0;
        idenity=0;
        des="";
        isxz=false;
    }
    int jiage;
    string name;
    int pz;
    int icon;
    int idenity;
    string des;
    bool isxz;
};
class Hcdata:public CCObject
{
public:
    int coinrequired;		//�ϳ������Ǯ
    int itemA;              //��Ʒ1��ID
    int itemAcnt;			//��Ʒ1��ǰ������
    int itemAGoal;          //��Ʒ1�ܹ���Ҫ������
    int itemB;				//��Ʒ2��ID
    int itemBcnt;           //��Ʒ2��ǰ������
    int itemBGoal;          //��Ʒ2�ܹ���Ҫ������
    int itemBound;          //�ϳɵ���ƷID
};
class CHecheng:public CCLayer
{
    
    CCDictionary * pf_dic;
    //FadeInAndOut * fade;
    bool flag;
    int state;
    int num;        //ϸ������
    int leng;
    CCSize size;
    bool isxz;
    int tpy;
    CCDictionary* P_dictionary;
    CCTableView* tableView;
    bool isa;
    int m_index;
    bool isgx;
    CCMenu * m_CK;
    CCTableViewCell* m_cell;
    CCSprite * bac;
    hcpf * m_pf;//Peifang
    
    CCMenuItemImage *i1;
    CCMenuItemImage *i2;
    CCMenuItemImage *i3;
    CCMenuItemImage *i4;
    CCSprite* add1;
    CCSprite* add2;
    CCSprite* add3;
    CCSprite* add4;
    
    CCLabelTTF* gold;
    
    CCSprite * s1;
    CCSprite * s2;
    CCSprite * s3;
    CCSprite * s4;
    
    hcitemdata * tmpitemdata;
    CCMenuItemImage * m_hc;
public:
//    static CCScene* Scene();
    virtual bool init();
    virtual void onExit();
    ~CHecheng();
    void menuItemCallbackBuy(CCObject *pSender);
    void removeFadeIn();
//    void inittableview(char * nums);
    
    void fasonghecheng();
    void dongzuo();
    //����������ͷ�������
	void fasong(CCObject*);
	void getdata(float);
    void jsondata(char* data);
   // void jsondata(ifstream ifs);
    void jieximoban(Peifang * pf);//Peifang
    
	void openbag(CCObject*);
    void goBack();//����
	void recData(float);
    void sethcdata(hcitemdata* item);
    
    void addtupian(Hcdata* hc);
    void clearData();
    
    //���ͺϳ���Ʒ��Ϣ
    void  fasongHCID(hcpf* pf);//Peifang
    //�õ��ϳ�����Ҫ������
	void getHCdata(float);
    //�����õ��ĺϳ�����
    void  jasonHCdata(char * data);
    
    void  addchenggong();
    void  bfchenggong();
    void  addshibai();
    void  bfshibai();
    //���ͺϳ�����
    void  fsqq(int tempid);
    //�õ��õ��ϳɳɹ����Ľ��
	void getjieguo(float);
    //�������
    void  jsonjieguo(char* data);
    
    
    void getitempic(Hcdata* hc,int &tmpId);
    void getjsonpic(Hcdata* hc,int &tmpId,int  &temId2);
    void getjsonname(Hcdata* hc,std::string &str,std::string &str1);
    bool istouch;
    
    Loading * load;
    SocketClient * sclient;
    
    
    
    CREATE_FUNC(CHecheng);
    
};
#endif /* defined(__client1__CHecheng__) */
