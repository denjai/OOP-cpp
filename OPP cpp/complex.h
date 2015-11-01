#pragma once
class Complex
{
	double real, imaginery;
public:
	Complex(void);
	Complex(double rei, double imi);
	~Complex();
	
	Complex& operator++(void);
	Complex operator++(int);
	void operator+=(double x);
	void operator+=(Complex &x);
	Complex operator+(Complex &x);
	Complex& operator=(Complex &c);

};

