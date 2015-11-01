// OPP cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bel.h"
#include <iostream>

int cf(void* el1, void* el2)
{
	Point *p1 = (Point*) el1;
	Point *p2 = (Point*)el2;
	return (p1->x*p1->x + p1->y*p1->y) > (p2->x*p2->x + p2->y*p2->y);
}

using namespace std;

int main()
{
	Bel Tef1, Tef2;

	Tef1.append("Ivan", "Petrov", 22332314L);
	Tef2.append("Stefan", "Petrov", 82342341L);

	Tef2.append(Tef2.findBelRowByName("Stefan"));
	BelRow* row = Tef1.findBelRowByName("Ivan");
	if (row)
	{
		cout << endl << "Name:" << row->name << " Tel:" << row->tel;
	}

	//Class Point constructors
	Point p;

	Point p2(5, 7);
	Point p1 = Point(3,4);
	
	Point p3 = p2;
	Point p4 = Point(p2);

	//Static function/members
	Point::setX0Y0(3,6);
	p1.setX0Y0(7, 9);
	//--------------------


	return 0;
}

