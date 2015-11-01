#pragma once
class Point
{
	int x;
	int y;
	static int x0, y0;

public:
	Point();
	Point(int xi, int yi);
	Point(Point& p);

	void setXY(int xi, int yi);
	static void setX0Y0(int xi, int yi);
	friend int cf(void* el1, void* el2);

	~Point();
};

