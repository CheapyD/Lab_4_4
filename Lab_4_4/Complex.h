#pragma once
#include "Pair.h"

class Complex : public Pair
{
public:
	Complex();
	Complex(double x, double y);
	Complex(const Complex& v);

	virtual Complex* operator = (Pair* r);
	virtual Complex* operator + (Pair* Z);
	virtual Complex* operator - (Pair* Z);
	virtual Complex* operator * (Pair* Z);
	virtual Complex* operator / (Pair* Z);
	virtual bool operator == (Pair* Z);
	Complex& Conj();

	virtual ostream& Print(ostream& out) const;
	virtual istream& Insert(istream& in);
};