#include "GameOver.h"

Scene*  GameOver::scene()
{
	return  GameOver::create();
}

bool  GameOver::init()
{
	if (!Scene::init())
	{
		return false;
	}

	Size visibleSize = Director::getInstance()->getVisibleSize();

	Sprite* background = Sprite::create("background.png");
	background->setPosition(Vec2(visibleSize.width / 2, visibleSize.height / 2)); //atur posisi background di tengah layar
	this->addChild(background);

	Sprite* gameover = Sprite::create("gameover.png");
	gameover->setPosition(Vec2(384, 900));
	this->addChild(gameover);

	Button* replay = Button::create("b_replay.png", "b_replay1.png", "b_replay.png");
	replay->setPosition(Vec2(768 / 2, 1366 / 2));
	replay->addClickEventListener(CC_CALLBACK_0(GameOver::replayClick, this));
	this->addChild(replay);

	return true;
}

void GameOver::replayClick()
{
	Director::getInstance()->replaceScene(HelloWorldScene::scene());
}