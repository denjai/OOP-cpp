#include "stdafx.h"
#include "Point.h"

//declare static members!!
int Point::x0 = 0;
int Point::y0 = 0;

Point::Point()
{
}

Point::Point(int xi, int yi)
{
	x = xi;
	y = yi;
}

Point::Point(Point& p)
{
	x = p.x;
	y = p.x;
}

void Point::setXY(int xi, int yi)
{
	x = xi;
	y = yi;
}

void Point::setX0Y0(int xi, int yi)
{
	x0 = xi;
	y0 = yi;
}



Point::~Point()
{
}
