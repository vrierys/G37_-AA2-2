#pragma once
#include "Menu.h"
#include "GameLevel.h"
#include "Ranking.h"

enum GameState {EXIT, MENU, RANKING, PLAY};


class Game
{
public:
	Scene *m_scene;
	GameState m_gState;
	Game();
	~Game();
	void Running();
};

