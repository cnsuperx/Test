#include "TeXiao.h"

static texiao * tx=NULL;

//bool texiao::init(){
//    if(!CCSprite::init()){
//        return  false;
//    }
//    this->texiaoCreate();
//    return true;
//}
texiao::texiao(){
    //����ͼƬ����
    
    CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile("result_attacked.plist");
    
}
texiao::~texiao(){
    
}
texiao * texiao::TX(){
    if (!tx) {
        tx= new texiao();
    }
    return tx;
}
CCSprite * texiao::lingqucg(){
    CCArray *lqcg=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("lq_lq_01.png");
    CCSprite *lq=CCSprite::createWithSpriteFrame(pFrame);
    for (int i=2;i<=8; i++)
    {
        
        char allnames[50]="";
        sprintf(allnames, "lq_lq_%02d.png",i);
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(allnames);
        //CCString::createWithFormat("zxj_%02d.png",i)->getCString()
        
        lqcg->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(lqcg,0.15f)));
    lq->runAction(Action);
    return lq;

}
CCSprite * texiao::duoqucg(){
    CCArray *dqsb=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("lq_cg_01.png");
    CCSprite *dq=CCSprite::createWithSpriteFrame(pFrame);
    for (int i=2;i<=9; i++)
    {
        
        char allnames[50]="";
        sprintf(allnames, "lq_cg_%02d.png",i);
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(allnames);
        //CCString::createWithFormat("zxj_%02d.png",i)->getCString()
        
        dqsb->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(dqsb,0.15f)));
    dq->runAction(Action);
    return dq;
}
CCSprite * texiao::duoqusb(){
    CCArray *dqcg=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("lq_sb_01.png");
    CCSprite *dq=CCSprite::createWithSpriteFrame(pFrame);
    for (int i=2;i<=9; i++)
    {
        
        char allnames[50]="";
        sprintf(allnames, "lq_sb_%02d.png",i);
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(allnames);
        //CCString::createWithFormat("zxj_%02d.png",i)->getCString()
        
        dqcg->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(dqcg,0.15f)));
    dq->runAction(Action);
    return dq;
}
CCSprite * texiao::yanwu(){
    CCArray *yanwu=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("ef_01.png");
    CCSprite *yw=CCSprite::createWithSpriteFrame(pFrame);
    for (int i=2;i<=22; i++)
    {
        
        char allnames[50]="";
        sprintf(allnames, "ef_%02d.png",i);
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(allnames);
        //CCString::createWithFormat("zxj_%02d.png",i)->getCString()
        
        yanwu->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(yanwu,0.083f)));
    yw->runAction(Action);
    return yw;

}
CCSprite * texiao::dayan(){
    CCArray *daya=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("dy_00016.png");
    CCSprite *yw=CCSprite::createWithSpriteFrame(pFrame);
    for (int i=16;i<=62; i++)
    {
        
        char allnames[50]="";
        sprintf(allnames, "dy_%05d.png",i);
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(allnames);
        daya->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(daya,0.0417f)));
    yw->runAction(Action);
    return yw;
}
CCSprite * texiao::texiaosCreate(const char *name, int num){
    char names[20]="";
    sprintf(names, "%s_01.png",name);
    CCArray *zuixingArr=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(names);//"zxj_01.png"
    CCSprite *zxjsp=CCSprite::createWithSpriteFrame(pFrame);
    for (int i=2;i<=num; i++)
    {
        
        char allnames[50]="";
        sprintf(allnames, "%s_%02d.png",name,i);
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(allnames);
        //CCString::createWithFormat("zxj_%02d.png",i)->getCString()
        
        zuixingArr->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(zuixingArr,0.125f)));
    zxjsp->runAction(Action);
    return zxjsp;
}
//������Ч
CCSprite * texiao:: texiaoCreate(){

    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("result_00001.png");
    CCSprite *tzsp=CCSprite::createWithSpriteFrame(pFrame);
    CCArray * kneif=CCArray::create();
  
            for (int i=2;i<=8; i++)
            {

                CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(CCString::createWithFormat("result_%05d.png",i)->getCString());
                
                kneif->addObject(spf);
                
            }


    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(kneif,0.2f)));
    tzsp->runAction(Action);
    return tzsp;

    
}
CCSprite * texiao::beginyanwu(){
    CCArray *touzhiArr=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("begin_yw_01.png");
    CCSprite *tzsp=CCSprite::createWithSpriteFrame(pFrame);
    //tzsp->setPosition(ccp(player->getPosition().x, player->getPosition().y));
    for (int i=2;i<=16; i++)
    {
        
        
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(CCString::createWithFormat("begin_yw_%02d.png",i)->getCString());
        
        touzhiArr->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(touzhiArr,0.125f)));
    tzsp->runAction(Action);
    return tzsp;
}
//Ͷ����Ч
CCSprite * texiao:: touzhiCreate(){

    CCArray *touzhiArr=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("tz-01.png");
    CCSprite *tzsp=CCSprite::createWithSpriteFrame(pFrame);
    //tzsp->setPosition(ccp(player->getPosition().x, player->getPosition().y));
    for (int i=2;i<=8; i++)
    {
        
        
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(CCString::createWithFormat("tz-%02d.png",i)->getCString());
        
        touzhiArr->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(touzhiArr,0.2f)));
    tzsp->runAction(Action);
    return tzsp;
}
//Ͷ��������Ч
CCSprite * texiao::mingzhongCreate(){
    CCArray *mingzhongArr=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("mz-01.png");
    CCSprite *mzsp=CCSprite::createWithSpriteFrame(pFrame);
    //tzsp->setPosition(ccp(player->getPosition().x, player->getPosition().y));
    for (int i=2;i<=7; i++)
    {
        
        
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(CCString::createWithFormat("mz-%02d.png",i)->getCString());
        
        mingzhongArr->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(mingzhongArr,0.2f)));
    mzsp->runAction(Action);
    return mzsp;

}
//��ͨ����
CCSprite * texiao::normalAttackCreate(){
    CCArray *mingzhongArr=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("n_attack_01.png");
    CCSprite *mzsp=CCSprite::createWithSpriteFrame(pFrame);
    //tzsp->setPosition(ccp(player->getPosition().x, player->getPosition().y));
    for (int i=2;i<=5; i++)
    {
        
        
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(CCString::createWithFormat("n_attack_%02d.png",i)->getCString());
        
        mingzhongArr->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(mingzhongArr,0.1f)));
    mzsp->runAction(Action);
    return mzsp;

}
//���Ѽ�
CCSprite * texiao::zuixingji(){
    CCArray *zuixingArr=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("zxj_01.png");
    CCSprite *zxjsp=CCSprite::createWithSpriteFrame(pFrame);
    for (int i=2;i<=10; i++)
    {
        
        
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(CCString::createWithFormat("zxj_%02d.png",i)->getCString());
        
        zuixingArr->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(zuixingArr,0.1f)));
    zxjsp->runAction(Action);
    return zxjsp;

}
//̫������
CCSprite * texiao::taijibagua(){
    CCArray *tjbgArr=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("tjbg_01.png");
    CCSprite *tjbgsp=CCSprite::createWithSpriteFrame(pFrame);
    for (int i=2;i<=12; i++)
    {
        
        
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(CCString::createWithFormat("tjbg_%02d.png",i)->getCString());
        
        tjbgArr->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(tjbgArr,0.1f)));
    tjbgsp->runAction(Action);
    return tjbgsp;
}
//�칫ŭ
CCSprite * texiao::tiangongnu(){
    CCArray *tgnArr=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("tgn_01.png");
    CCSprite *tgnsp=CCSprite::createWithSpriteFrame(pFrame);
    for (int i=2;i<=9; i++)
    {
        
        
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(CCString::createWithFormat("tgn_%02d.png",i)->getCString());
        
        tgnArr->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(tgnArr,0.1f)));
    tgnsp->runAction(Action);
    return tgnsp;
}
//��������
CCSprite * texiao::yushenzhushen(){
    CCArray *yszsArr=CCArray::create();
    CCSpriteFrame *pFrame=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("yszs_01.png");
    CCSprite *yszssp=CCSprite::createWithSpriteFrame(pFrame);
    for (int i=2;i<=9; i++)
    {
        
        
        CCSpriteFrame *spf=CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(CCString::createWithFormat("yszs_%02d.png",i)->getCString());
        
        yszsArr->addObject(spf);
        
    }
    
    CCActionInterval * Action=CCRepeatForever::create(CCAnimate::create(CCAnimation::createWithSpriteFrames(yszsArr,0.1f)));
    yszssp->runAction(Action);
    return yszssp;
}
//CCSprite * texiao::huangquezhen(){
//    
//}
//CCSprite * texiao::kunshouzhidou(){
//    
//}//����֮��
//CCSprite * texiao::luandaozhan(){
//    
//}//�ҵ�ն
//CCSprite * texiao::meirenji(){
//    
//}//���˼�
//CCSprite * texiao::pojunji(){
//    
//}//�ƾ���
//CCSprite * texiao::qubingji(){
//    
//}//������
//CCSprite * texiao::shengdongjixi_mz(){
//    
//}//��������-����
//CCSprite * texiao::shengdongjixi_tz(){
//    
//}//��������-Ͷ��
//CCSprite * texiao::shijizhou(){
//    
//}//ʨ�Ӻ�
//CCSprite * texiao::shuangfuzhishang_cz(){
//    
//}//˫��֮��-����
//CCSprite * texiao::shuangfuzhishang_mz(){
//    
//}//˫��֮��-����
//CCSprite * texiao::shuangjizhishang_cz(){
//    
//}//˫�֮��-����
//CCSprite * texiao::texiao::shuangjizhishang_mz(){
//    
//}//˫�֮��-����
//CCSprite * texiao::shuanglianzhishang_cz(){
//    
//}//˫��֮��-����
//CCSprite * texiao::shuanglianzhishang_mz(){
//    
//}//˫��֮��-����
//CCSprite * texiao::shuangqiangzhishang_cz(){
//    
//}//˫ǹ֮��-����
//CCSprite * texiao::shuangqiangzhishang_mz()
//{
//    
//}//˫ǹ֮��-����
//CCSprite * texiao::shuangrenzhishang_cz(){
//    
//}//˫��֮��-����
//CCSprite * texiao::shuangrenzhishang_mz(){
//    
//}//˫��֮��-����
//CCSprite * texiao::shuijisanqianli(){
//    
//}//ˮ����ǧ��
//CCSprite * texiao::touxi(){
//    
//}//͵Ϯ
//CCSprite * texiao::wanlibingfeng(){
//    
//}//�������
//CCSprite * texiao::xiefengzhen(){
//    
//}//а����
//CCSprite * texiao::yehuoliaoyuan(){
//    
//}//Ұ����ԭ
//�Ƴ�����
void texiao::removeSprite(CCNode *sender){
    this->removeFromParentAndCleanup(true);
}
