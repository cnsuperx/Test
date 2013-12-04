
#ifndef client1_myobject_h
#define client1_myobject_h

#include <iostream>
#include"cocos2d.h"
using namespace cocos2d;
using namespace std;

class MapItem:public CCObject{
public:
    MapItem(){
        
        nickname = "";
        desc = "";
        bid = 0;
        mapId = 0;
        itemId = 0;
        enemy = "";
        enemydesc = "";
    }
    CCPoint pos;
    string nickname;
    string desc;
    string zj;
    string zjdesc;
    string enemy;
    string enemydesc;
    
    int bid;
    int mapId;
    int img;
    int exp;
    int coin;
    int itemId;
    
//    "x": 320,
//    "y": 580,
//    "id":1005,
//    "mapid":2,
//    "name": "����6",
//    "desc": "123",
//    "enemy":"������",
//    "enemydesc":"������ʳ�ı���",
//    "zj":"�ؾ���",
//    "zjdesc":"���������ط�����ѹ�ƽ���ľ����ӣ������ڼ���",
//    "img":1,
//    "exp":100,
//    "coin":1000
    
};


#endif
