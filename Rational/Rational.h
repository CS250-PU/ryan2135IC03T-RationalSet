#pragma once

#include <iostream>

using namespace std;

class Rational {
public:
	Rational (int numerator = 0, int denominator = 1);
	bool equals (const Rational &rcRational) const;
	void write (ostream &rcOutStream) const;
	Rational multiply (const Rational &rcRational) const;

private:
	int mNumerator;
	int mDenominator;
};