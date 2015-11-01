#include "stdafx.h"
#include "Complex.h"


Complex::Complex(double rei, double imi)
{
	real = rei;
	imaginery = imi;
}

Complex::Complex()
{
	real = 0;
	imaginery = 0;
}

Complex::~Complex()
{
}

Complex& Complex::operator++(void)
{
	real++;
	imaginery++;
	return *this;
}

Complex Complex::operator++(int)
{
	Complex temp = *this;
	real++;
	imaginery++;
	return temp;
}

void Complex::operator+=(double x)
{
	real += x;
	imaginery += x;
}

void Complex::operator+=(Complex & x)
{
	real += x.real;
	imaginery += x.imaginery;
}

Complex Complex::operator+(Complex & x)
{
	Complex temp(real, imaginery);
	temp.real += x.real;
	temp.imaginery += x.imaginery;
	return temp;
}

Complex & Complex::operator=(Complex & c)
{
	real = c.real;
	imaginery = c.imaginery;
	return *this;
}


