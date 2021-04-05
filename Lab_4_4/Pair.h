#pragma once
#pragma pack(1)
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Pair
{
private:
	double a, b;

public:
	Pair();
	Pair(double a, double b);
	Pair(const Pair& v);

	double GetA() const { return a; }
	double GetB() const { return b; }

	void SetA(double value) { a = value; }
	void SetB(double value) { b = value; }

	virtual Pair* operator = (Pair* r) = 0;
	virtual Pair* operator + (Pair* Z) = 0;
	virtual Pair* operator - (Pair* Z) = 0;
	virtual Pair* operator * (Pair* Z) = 0;
	virtual Pair* operator / (Pair* Z) = 0;

	virtual ostream& Print(ostream& out) const = 0;
	virtual istream& Insert(istream& in) = 0;
};