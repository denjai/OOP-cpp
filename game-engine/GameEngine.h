#pragma once
class GameEngine
{
	GameUnit* gameUnits[];
public:
	GameEngine();
	void tick();
	void clear();
	~GameEngine();
};

