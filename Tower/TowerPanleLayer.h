#pragma once
#include "cocos2d.h"
#include "Circle.h"
#include "KRTerrain.h"
#include "../Tower/BaseBuildIcon.h"

USING_NS_CC;

class TowerPanleLayer : public Sprite
{
public:
	virtual bool init() override;
	CREATE_FUNC(TowerPanleLayer);
	// ���ش����ص�����
	bool onTouchBegan(Touch *touch, Event *event);
	void onTouchEnded(Touch* touch, Event* event);
	CC_SYNTHESIZE(KRTerrain*, terrain, MyTerrain);
	void addTower(int type);
	void inAnimation();
private:
	void addIcons();
	void addTempTower(int type);
	BaseBuildIcon* archerIcon;
	BaseBuildIcon* artilleryIcon;
	BaseBuildIcon* barracksIcon;
	BaseBuildIcon* magicIcon;
	Sprite* planesprite;
	Circle* circle;
	Sprite *tempTower;
	bool isBuilt;
};