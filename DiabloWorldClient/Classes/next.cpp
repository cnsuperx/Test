
#include "next.h"
#include "FireWork.h"
bool nextPtr::init(){
    if(!CCLayerColor::initWithColor(ccc4(0, 0, 0, 100))){
        return false;
    }
    setTouchEnabled(true);
    return true;
}
void  nextPtr::registerWithTouchDispatcher(){
    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this,(std::numeric_limits<int>::min)(), true);
    //CCLayer::registerWithTouchDispatcher();(std::numeric_limits<int>::min())
    CCLayer::registerWithTouchDispatcher();
}

bool nextPtr::ccTouchBegan(CCTouch* touch, CCEvent* event){
    return true;
}
void nextPtr::ccTouchMoved(CCTouch* touch, CCEvent* event){
    
}
void nextPtr::ccTouchEnded(CCTouch* touch, CCEvent* event){
    CCLog("sdfqwe");
    Fire * fir=(Fire *)this->getParent();
    fir->nextchat();
}