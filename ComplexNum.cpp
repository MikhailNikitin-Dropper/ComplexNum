#include "ComplexNum.h"


ComplexNumber::ComplexNumber(double real, double imaginary)
    {
        realPart = real;
        imaginaryPart = imaginary;
    }

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const
{
    double realSum = realPart + other.realPart;
    double imaginarySum = imaginaryPart + other.imaginaryPart;
    return {realSum, imaginarySum};
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const
{
    double realDiff = realPart - other.realPart;
    double imaginaryDiff = imaginaryPart - other.imaginaryPart;
    return {realDiff, imaginaryDiff};
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const
{
    double realProduct = (realPart * other.realPart) - (imaginaryPart * other.imaginaryPart);
    double imaginaryProduct = (realPart * other.imaginaryPart) + (imaginaryPart * other.realPart);
    return {realProduct, imaginaryProduct};
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const
{
    double denominator = (other.realPart * other.realPart) + (other.imaginaryPart * other.imaginaryPart);
    double realQuotient = ((realPart * other.realPart) + (imaginaryPart * other.imaginaryPart)) / denominator;
    double imaginaryQuotient = ((imaginaryPart * other.realPart) - (realPart * other.imaginaryPart)) / denominator;
    return {realQuotient, imaginaryQuotient};
}

ComplexNumber ComplexNumber::operator+=(const ComplexNumber& other)
{
    *this = *this + other;
    return *this;
}

ComplexNumber ComplexNumber::operator-=(const ComplexNumber& other)
{
    *this = *this - other;
    return *this;
}

ComplexNumber ComplexNumber::operator*=(const ComplexNumber& other)
{
    *this = *this * other;
    return *this;
}

ComplexNumber ComplexNumber::operator/=(const ComplexNumber& other)
{
    *this = *this / other;
    return *this;
}

ComplexNumber ComplexNumber::operator+() const
{
    return *this;
}

ComplexNumber ComplexNumber::operator-() const
{
    return ComplexNumber(-realPart, -imaginaryPart);
}

bool ComplexNumber::operator==(const ComplexNumber& other) const
{
    return (realPart == other.realPart) && (imaginaryPart == other.imaginaryPart);
}

bool ComplexNumber::operator!=(const ComplexNumber& other) const {
    return !(*this == other);
}

double ComplexNumber::getRealPart() const {
    return realPart;
}

double ComplexNumber::getImaginaryPart() const {
    return imaginaryPart;
}

double ComplexNumber::getAbsoluteValue() const {
    return std::sqrt((realPart * realPart) + (imaginaryPart * imaginaryPart));
}

ComplexNumber ComplexNumber::getConjugate() const {
    return {realPart, -imaginaryPart};
}

std::istream& operator>>(std::istream& in, ComplexNumber& complex)
{
    in >> complex.realPart >> complex.imaginaryPart;
    return in;
}

std::ostream& operator<<(std::ostream& out, const ComplexNumber& complex)
{
    out << complex.realPart << " + " << complex.imaginaryPart << "i";
    return out;
}

