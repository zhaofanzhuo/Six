//
//  MySprite.h
//  Box2DDemo
//
//  Created by yangxin on 16-2-22.
//
//

#ifndef __Box2DDemo__MySprite__
#define __Box2DDemo__MySprite__

#include <iostream>
using namespace std;
#include "cocos2d.h"
using namespace cocos2d;
class MySprite : public Sprite
{
public:
    //CREATE_FUNC(MySprite);
    static MySprite *create();
    bool init();
    void setHp(int h);
    int getHp();
private:
    int _hp;
};

#endif 


/* defined(__Box2DDemo__MySprite__) */
