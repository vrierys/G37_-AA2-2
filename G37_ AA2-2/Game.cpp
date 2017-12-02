#include "Game.h"



Game::Game()
{
	m_scene = new Menu();
	m_gState = GameState::MENU;
}


Game::~Game()
{
}

void Game::Running() {

	while (m_gState != GameState::EXIT) {

		switch (m_scene->m_sState) {

		case SceneState::RUNNING:
			m_scene->EventHandler();
			m_scene->Update();
			m_scene->Draw();
			break;

			//Solo puede entrar si es Menu
		case SceneState::GOTO1:
			delete(m_scene);
			//Retocar cuando tengamos los dos niveles
			m_scene = new GameLevel();
			m_gState = GameState::PLAY;
			break;

			//Solo puede entrar si es Menu
		case SceneState::GOTO2:
			delete(m_scene);
			//Retocar cuando tengamos los dos niveles
			m_scene = new GameLevel();
			m_gState = GameState::PLAY;
			break;

			//Solo puede entrar si es Menu
		case SceneState::GOTORA:
			delete(m_scene);
			m_scene = new Ranking();
			m_gState = GameState::RANKING;
			break;

		case SceneState::GOTOME:
			delete(m_scene);
			m_scene = new Menu();
			m_gState = GameState::MENU;
			break;

		case SceneState::EXIT:
			delete(m_scene);
			m_gState = GameState::EXIT;
			break;
		}
	}
}
