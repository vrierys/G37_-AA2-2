#pragma once

enum SceneState {EXIT, RUNNING, GOTO1, GOTO2, GOTORA, GOTOME};

class Scene
{
public:
	SceneState m_sState;
	Scene();
	~Scene();
	virtual void EventHandler() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void ReadXML() = 0;
};

