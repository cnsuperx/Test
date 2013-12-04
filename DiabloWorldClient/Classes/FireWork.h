#ifndef __Client__FireWork__
#define __Client__FireWork__

#include <iostream>
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
//#include "json.h"
#include "json\include\json\json.h"
#include "skillList.h"
//#include <istream.h>
#include "cocos-ext.h"
#include "next.h"
#include "LodingLayer.h"
USING_NS_CC;
using namespace std;
using namespace CocosDenshion;
using namespace extension;
class fireinfo:public CCObject{
public:
    fireinfo(){
        personId=0;
        *buff=0;
    }
    int personId;
    int buff[5];
};
class skill:public CCObject{
public:
    int releaseEffect;
    int bearEffect;
    int throwEffectId;
    
};
class chatdialogue:public CCObject{
public:
    string msg;
    string name;
    int icon;
    chatdialogue(){
        msg="";
        name="";
        icon=0;
    }
};
class Fire:public cocos2d::CCLayer{
    
public:
    CREATE_FUNC(Fire);

	static Fire *getInstance();
	void recv_4501(float det);
    virtual void onExit();
    void initFireData();
    
    int audionum;
    Loading *load;
    CCLabelTTF * label1;
    CCLabelTTF * label2;
    CCLabelTTF * label3;
    CCDictionary * ene_dic;
    CCDictionary * player_dic;
    CCSprite * chatbg;
    CCLabelTTF * print;
    double percent1;
    void moreattactnext();
    CCDictionary * chat_dic;
    skillList * sk;
    CCSprite * tz;
    skill * skk;
    skill * returnskills(int skillId);
    // CCLabelTTF * reduB;
    CCLabelAtlas * reduB;
    CCLabelAtlas * reduB1;
    
    int ea;
    int chaIdd;
    int chaBattleId;
    bool chengzhan;
    CCSprite * buff1;
    CCSprite * buff2;
    CCSprite * buff3;
    CCSprite *explosion;
    virtual bool init();
//    Fire();
    ~Fire();
    void enegrySprite(CCSprite * node,int star);
    void removeit();
    int getaudionum();
    void throwtwice();
    void whethertwice();
    void buffbegin(int bufftype);
    void buffend();
    void zhenping(CCNode * sender);
    int roundss;
    CCSprite * enemyIcon;
    CCDictionary * jn_dic;
    CCLabelTTF * enemyName1;
    CCLabelTTF * playerName1;
    CCSprite * playerIcon;
    static  Fire * fire();
    // virtual bool init();
    CCSprite *eneB1;
    CCSprite * normalAttack;
    int _chaCurrentPower;
    int _eneCurrentPower;
    int skillnumbers1[20];
    static  CCScene * scene();
    int direction;
    int  result();//����ս�����
    int rounds;//�غ���
    int pos;//����˫���佫���ھŹ���λ��
    int kaishi;//���
    int battleresult;//ս�۽��
    int changeHp;//�ı��Ѫ��
    int currHp;//��ǰѪ��
    int eneBID;//����ID
    int totalHp;//Ѫ������
    int _actionId;//����ID
    int _star;//�Ǽ�
    int _skillId;//����ID;
    CCSprite *tx;//������Ч
    CCSprite * texiao;//������Ч
    CCSprite * mz;//������Ч
    
    CCSprite *label;//CCLabelTTF
    Json::Value stepData;
    CCSprite * enemy;
    CCSprite * player;
    CCScale9Sprite * m_pNextBG;
    CCLabelTTF *  chatBounder;
    
    bool first;
    int _eneBattId[9];//��
    int _eneChaid[9]; //��
    int _eneChanHp[9];//��
    int _eneCurrHp[9];//��
    int _eneTotHp[9]; //��
    int _eneActId[9]; //��
    int _chaBattleId;
    int _chaId;
    int _length;
    Json::Value  _json;
    int j;
    int t;
    void setJson(Json::Value  json);
    Json::Value  getJson();
    void debuff(int eneBid,int enechaid,int changeHp1,int eneCurrHp,int eneTotalHp);
    void repate();
    void runBegin();
    void changeBlood();//�ı�Ѫ��
    void MutileChangeBlood();
    void fangzhao();//������������
    void setBlood(float curB,float nowB,int i,int dir);//����˫������Ѫ��
    void enemiesLoad();//�з��佫��ʼ��
    void playerLoad();//�ҷ��佫��ʼ��
    void jsonData(char * json);//����json
    void getJsonData(char * json);
    void actionAttack(int eneBattleId,int eneChaID,int eneChangeHp,int eneCurrentHp,int eneTotalHp,int actionID,int chaBattleID,int chaId,int skillId);//�����߹�������
    void whetherChat(int index);
    void chatPlay();
    void moreActionAttack(int * eneBattId, int * eneChaid,int * eneChanHp,int * eneCurrHp,int  * eneTotHp,int  * eneActId,int chaBattleId,int chaId,int length,int skillId);//���ع���
    void removeSprite(CCNode * sender);
    void moreAttacked();
    void moreAttackTitle();//��������
    void SimpleAttack();//ѭ����һ����
    void MoreAttack();//ѭ�����ع���
    void attackData(char *json);
    void attack(float changeHP);
    void checkOut();
    void attacked();//����������
    void removeAction();
    void moreAttackName();
    void AttackName();
    void doChat();
    void removeChat();
    void nextchat();
    
    CCSprite * jiantou;
	void MeasureEneDead();//�жϵ����Ƿ�����
    void MutileMeasureEneDead(CCNode * sender);
    CCSprite * moveup();
    CCSprite * updown;
    //    virtual void  registerWithTouchDispatcher();
    //    virtual bool ccTouchBegan(CCSet* touch, CCEvent* event);
    //    virtual void ccTouchMoved(CCSet* touch, CCEvent* event);
    //    virtual void ccTouchEnded(CCSet* touch, CCEvent* event);
	void updatalabel(float det);
    int e;
    // CCSprite *ene1;
    int max;
    int getStar();
    int enemytag;
    const   char *namee;
    CCSize size;
};

#endif /* defined(__Client__FireWork__) */
