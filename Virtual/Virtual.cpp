// Virtual.cpp : Defines the entry point for the console application.
///

#include "stdafx.h"

struct Point
{
	int x, y;
	Point(int xi, int yi)
	{
		x = xi;
		y = yi;
	}

	//must be virtual !!!
	virtual float area(void)
	{
		return 0;
	}
};

struct Circle :Point
{
	int r;
	Circle(int xi, int yi, int ri) :Point(xi, yi)
	{
		this->r = ri;
	}
	float area(void)
	{
		return 2 * 3.14*r*r;
	}
};

struct Cylinder :Circle
{
	int h;
	Cylinder(int xi, int yi, int ri, int hi) :Circle(xi, yi, ri)
	{
		this->h = hi;
	}
	float area(void)
	{
		return 2 * 3.14*r*(h + r);
	}
};

struct Rectangle :Point
{
	int h, w;
	Rectangle(int xi, int yi, int hi, int wi) :Point(xi, yi)
	{
		h = hi;
		w = wi;
	}
	float area(void)
	{
		return h*w;
	}
};

float areaDiff(Point *p1, Point* p2)
{
	return p1->area() - p2->area();
}

int main()
{
	Point p(5, 7);
	Circle c(7, 5, 12);
	Cylinder cyl(7, 5, 12, 3);
	Rectangle r(2, 3, 4, 5);

	Point *pPtr;
	Circle *cPtr;
	printf("\nThe area p is: %f", p.area());
	printf("\nThe area c is: %f", c.area());

	pPtr = &p;
	printf("\nThe area pPtr is: %f", pPtr->area());
	pPtr = &c;
	printf("\nThe area Ptr is: %f", pPtr->area());

	printf("\nThe difference (p and c):%f", areaDiff(&c, &p));
	printf("\nThe difference (p and cyl):%f", areaDiff(&cyl, &p));
	printf("\nThe difference (r and c):%f", areaDiff(&r, &c));

	return 0;
}

