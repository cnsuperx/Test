#ifndef __client1__TeXiao__
#define __client1__TeXiao__

#include <iostream>
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
using namespace cocos2d;
using namespace CocosDenshion;
class texiao:public cocos2d::CCSprite{
public:
    //virtual bool init();
    texiao();
    ~texiao();
   static texiao * TX();
    CCSpriteBatchNode * touzhi;
    CCSprite * texiaosCreate(const char * name,int num);
    CCSprite * texiaoCreate();
    CCSprite * yanwu();
    CCSprite * dayan();
    CCSprite * beginyanwu();
    CCSprite * touzhiCreate();
    CCSprite * lingqucg();
    CCSprite * duoqucg();
    CCSprite * duoqusb();
    CCSprite * mingzhongCreate();
    CCSprite * normalAttackCreate();
    CCSprite * taijibagua();//̫������
    CCSprite * tiangongnu();//�칫ŭ
    CCSprite * zuixingji();//���Ѽ�
    CCSprite * yushenzhushen();//��������
    CCSprite * huangquezhen();//��ȸ��
    CCSprite * kunshouzhidou();//����֮��
    CCSprite * luandaozhan();//�ҵ�ն
    CCSprite * meirenji();//���˼�
    CCSprite * pojunji();//�ƾ���
    CCSprite * qubingji();//������
    CCSprite * shengdongjixi_mz();//��������-����
    CCSprite * shengdongjixi_tz();//��������-Ͷ��
    CCSprite * shijizhou();//ʨ�Ӻ�
    CCSprite * shuangfuzhishang_cz();//˫��֮��-����
    CCSprite * shuangfuzhishang_mz();//˫��֮��-����
    CCSprite * shuangjizhishang_cz();//˫�֮��-����
    CCSprite * shuangjizhishang_mz();//˫�֮��-����
    CCSprite * shuanglianzhishang_cz();//˫��֮��-����
    CCSprite * shuanglianzhishang_mz();//˫��֮��-����
    CCSprite * shuangqiangzhishang_cz();//˫ǹ֮��-����
    CCSprite * shuangqiangzhishang_mz();//˫ǹ֮��-����
    CCSprite * shuangrenzhishang_cz();//˫��֮��-����
    CCSprite * shuangrenzhishang_mz();//˫��֮��-����
    CCSprite * shuijisanqianli();//ˮ����ǧ��
    CCSprite * touxi();//͵Ϯ
    CCSprite * wanlibingfeng();//�������
    CCSprite * xiefengzhen();//а����
    CCSprite * yehuoliaoyuan();//Ұ����ԭ
    void removeSprite(CCNode * sender);
    CREATE_FUNC(texiao);
};
#endif /* defined(__client1__TeXiao__) */
