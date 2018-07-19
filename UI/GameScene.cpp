#include "GameScene.h"
#include "terrain.h"

USING_NS_CC;

GameScene::GameScene()
{};

GameScene::~GameScene() {};

bool GameScene::initWithDifficulty(int difficulty)
{
	if (!GameScene::init())
	{
		return false;
	}
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("sprite_level1_2-hd.plist");
	setLevel(1);
	initMap();

	std::vector<Point> points;
	//road 0��ʾ
	points.push_back(Point(980, 40));
	//road 1 ��ʾ
	points.push_back(Point(40, 270));
	return true;
}

GameScene* GameScene::createGame(int difficulty)
{
	auto layer = new GameScene();
	if (layer && layer->initWithDifficulty(difficulty)) {
		layer->autorelease();
		return layer;
	}
	CC_SAFE_DELETE(layer);

	return NULL;
}

void GameScene::onExit()
{
	SpriteFrameCache::getInstance()->removeSpriteFrameByName("sprite_level1_2-hd.plist");
}

void GameScene::addTerrains()
{
	auto terrain1 = terrain::createTerrain(1);
	terrain1->setPosition(Point(610, 820));//�յ�
	terrain1->setTag(1);
	addChild(terrain1, 2);

	auto terrain13 = terrain::createTerrain(1);
	terrain13->setPosition(Point(340, 750));//�յ���
	terrain13->setTag(13);
	addChild(terrain13, 3);

	auto terrain12 = terrain::createTerrain(1);
	terrain12->setPosition(Point(650, 650));//ˮͰ����
	terrain12->setTag(12);
	addChild(terrain12, 4);

	auto terrain3 = terrain::createTerrain(1);
	terrain3->setPosition(Point(535, 620));//ˮͰ��
	terrain3->setTag(3);
	addChild(terrain3, 4);

	auto terrain10 = terrain::createTerrain(1);
	terrain10->setPosition(Point(540, 560));//��Բ���Թս��������
	terrain10->setTag(10);
	addChild(terrain10, 5);

	auto terrain7 = terrain::createTerrain(1);
	terrain7->setPosition(Point(590, 460));//��Բ���Թս����
	terrain7->setTag(7);
	addChild(terrain7, 6);

	auto terrain9 = terrain::createTerrain(1);
	terrain9->setPosition(Point(310, 440));//���ɽ��2
	terrain9->setTag(9);
	addChild(terrain9, 6);

	auto terrain6 = terrain::createTerrain(1);
	terrain6->setPosition(Point(900, 440));//��ţ���Թս����
	terrain6->setTag(6);
	addChild(terrain6, 6);

	auto terrain2 = terrain::createTerrain(1);
	terrain2->setPosition(Point(380, 360));//��ɽ�Ե�һ�ս�
	terrain2->setTag(2);
	addChild(terrain2, 7);

	auto terrain8 = terrain::createTerrain(1);
	terrain8->setPosition(Point(250, 360));//���ɽ��1
	terrain8->setTag(8);
	addChild(terrain8, 7);

	auto terrain4 = terrain::createTerrain(1);
	terrain4->setPosition(Point(590, 300));//Բ���Թս�
	terrain4->setTag(4);
	addChild(terrain4, 7);

	auto terrain5 = terrain::createTerrain(1);
	terrain5->setPosition(Point(920, 260));//ţ���Թս�
	terrain5->setTag(5);
	addChild(terrain5, 8);

	auto terrain11 = terrain::createTerrain(1);
	terrain11->setPosition(Point(530, 220));//Բ���Թս���
	terrain11->setTag(11);
	addChild(terrain11, 8);


}

