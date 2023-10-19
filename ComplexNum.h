#ifndef COMPLEXNUM_COMPLEXNUM_H
#define COMPLEXNUM_COMPLEXNUM_H

#include <iostream>
#include <cmath>


class ComplexNumber {

private:
    double realPart; double imaginaryPart;

public:

    ComplexNumber(double real=0, double imaginary=0);

    ComplexNumber operator+(const ComplexNumber& other) const;

    ComplexNumber operator-(const ComplexNumber& other) const;

    ComplexNumber operator*(const ComplexNumber& other) const;

    ComplexNumber operator/(const ComplexNumber& other) const;

    ComplexNumber operator+=(const ComplexNumber& other);

    ComplexNumber operator-=(const ComplexNumber& other);

    ComplexNumber operator*=(const ComplexNumber& other);

    ComplexNumber operator/=(const ComplexNumber& other);

    ComplexNumber operator+() const;

    ComplexNumber operator-() const;

    bool operator==(const ComplexNumber& other) const;

    bool operator!=(const ComplexNumber& other) const;

    double getRealPart() const;

    double getImaginaryPart() const;

    double getAbsoluteValue() const;

    ComplexNumber getConjugate() const;

    friend std::istream& operator>>(std::istream& in, ComplexNumber& complex);
    friend std::ostream& operator<<(std::ostream& out, const ComplexNumber& complex);
};



#endif //COMPLEXNUM_COMPLEXNUM_H
