#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

#include"define.h"
USING_NS_CC;
class HelloWorld : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();
	// implement the "static create()" method manually
	CREATE_FUNC(HelloWorld);

	
};

#endif // __HELLOWORLD_SCENE_H__
