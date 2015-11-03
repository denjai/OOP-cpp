#pragma once
class GameUnit
{
	Point position;
	Point target;
	int condition;
	int movespeed;
	int attackSpeed;
public:
	GameUnit();

	void setPosition(Point pos)
	{
		position = pos;
	}

	Point getPosition()
	{
		return position;
	}

	virtual void attack(void)=0;
	virtual void defend();
	virtual void move();
	~GameUnit();
};

