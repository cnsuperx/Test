#ifndef __client1__UserData__
#define __client1__UserData__

#include <iostream>
#include "cocos2d.h"

using namespace std;
USING_NS_CC;

class UserData
{
public:
    static UserData* getInstance();
    int test();
    int characterId;
    string rolename;
    int level;
    int exp;
    int maxexp;
    int gold;
    int coin;
    int tili;
    int tilimax;
    int huoli;
    int huolimax;
    int viplevel;
    
//    characterId	int		��ɫID
//    rolename		str     ��ɫ������
//    level			int		��ɫ�ĵȼ�
//    exp			int		��ɫ�ĵ�ǰ����ֵ
//    maxexp			int		��ɫ�������ֵ
//    gold			int		�ƽ������
//    coin			int		���ӵ�����
//    tili			int		��ǰ����ֵ
//    tilimax		int		�������ֵ
//    huoli			int		��ǰ����ֵ
//    maxhuoli		int		������ֵ
//    viplevel		int		vip�ȼ�
    
    
    
    
private:
    UserData();
    static UserData *instance;
    
    
    
    
};



#endif /* defined(__client1__UserData__) */
