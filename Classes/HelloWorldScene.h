#ifndef __HELLO_WORLD_SCENE_H__
#define __HELLO_WORLD_SCENE_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "SimpleAudioEngine.h"
#include "GameOver.h"


using namespace cocos2d::ui;
using namespace cocos2d;
using namespace CocosDenshion;

USING_NS_CC;

class HelloWorldScene : public Scene
{
private:
	Vector<Sprite*> meteor;
	Vector<Sprite*> peluru;

	Label* label_score;
	Label* label_nyawa;

	Sprite* meriam;

	int score = 0;
	int nyawa = 5;

	float AddX = 0;
	float AddY = 0;

	void MeteorPass(Sprite* komet);
public:
	virtual void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);
	bool onTouchBegan(Touch* touch, Event* event);

	void AddMeteor(float dt);
	void update(float dt);

	static Scene* scene();
	virtual bool init();
	CREATE_FUNC(HelloWorldScene);
};

#endif // !__HELLO_WORLD_SCENE_H__