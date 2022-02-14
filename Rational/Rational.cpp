#include "Rational.h"

Rational::Rational (int numerator, int denominator) {
	if (numerator < 0 || denominator < 1) {
		cout << "Error: Illegal Positive Rational Number" << endl;
		exit (EXIT_FAILURE);
	}

	mNumerator = numerator;
	mDenominator = denominator;
}

bool Rational::equals (const Rational &rcRational) const {
	return mNumerator == rcRational.mNumerator &&
		mDenominator == rcRational.mDenominator;
}

void Rational::write (ostream &rcOutStream) const {
	rcOutStream << mNumerator << '/' << mDenominator;
}

Rational Rational::multiply (const Rational &rcRational) const {
	return Rational (mNumerator * rcRational.mNumerator,
		mDenominator * rcRational.mDenominator);
}