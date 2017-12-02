#pragma once
#include "Scene.h"
class GameLevel :public Scene
{
public:
	GameLevel();
	~GameLevel();
	void EventHandler()override;
	void Update()override;
	void Draw()override;
	void ReadXML()override;
};

