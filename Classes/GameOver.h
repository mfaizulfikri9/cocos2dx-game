#ifndef __GAME_OVER_H__
#define __GAME_OVER_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "SimpleAudioEngine.h"
#include "HelloWorldScene.h"

using namespace cocos2d::ui;
using namespace cocos2d;
using namespace CocosDenshion;

USING_NS_CC;

class GameOver : public Scene
{
private:
	void replayClick();
public:
	
	static Scene* scene();
	virtual bool init();
	CREATE_FUNC(GameOver);
};

#endif // !__GAME_OVER_H__