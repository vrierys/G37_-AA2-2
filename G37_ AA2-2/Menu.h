#pragma once
#include "Scene.h"
class Menu :public Scene
{
public:
	// == buttonDestination
	bool botonLevel1;
	bool botonLevel2;
	bool botonRanking;
	bool botonExit;
	Menu();
	~Menu();
	void EventHandler()override;
	void Update()override;
	void Draw()override;
	void ReadXML()override;
};

