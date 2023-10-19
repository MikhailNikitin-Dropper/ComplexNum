#include "ComplexNum_Test.h"
#include "ComplexNum.h"
#include <assert.h>
#include <iostream>
#include <sstream>
void testComplex() {
    // Создание комплексных чисел
    ComplexNumber c1(1, 2);
    ComplexNumber c2(3, 4);

    // Проверка операторов сложения, вычитания, умножения и деления
    ComplexNumber sum = c1 + c2;
    assert(sum.getRealPart() == 4);
    assert(sum.getImaginaryPart() == 6);

    ComplexNumber diff = c1 - c2;
    assert(diff.getRealPart() == -2);
    assert(diff.getImaginaryPart() == -2);

    ComplexNumber prod = c1 * c2;
    assert(prod.getRealPart() == -5);
    assert(prod.getImaginaryPart() == 10);

    ComplexNumber quot = c1 / c2;
    assert(quot.getRealPart() == 0.44);
    assert(quot.getImaginaryPart() == 0.08);

    // Проверка операторов +=, -=, *= и /=
    ComplexNumber c3(5, 6);
    ComplexNumber c4(7, 8);

    c3 += c4;
    assert(c3.getRealPart() == 12);
    assert(c3.getImaginaryPart() == 14);

    c3 -= c4;
    assert(c3.getRealPart() == 5);
    assert(c3.getImaginaryPart() == 6);

    c3 *= c4;
    assert(c3.getRealPart() == -13);
    assert(c3.getImaginaryPart() == 82);

    c3 /= c4;
    assert(c3.getRealPart() == 5);
    assert(c3.getImaginaryPart() == 6);

    // Проверка операторов сложения, вычитания, умножения и деления с вещественными числами
    ComplexNumber c5(9, 10);
    double d1 = 10;

    ComplexNumber sum2 = c5 + d1;
    assert(sum2.getRealPart() == 19);
    assert(sum2.getImaginaryPart() == 10);

    ComplexNumber diff2 = c5 - d1;
    assert(diff2.getRealPart() == -1);
    assert(diff2.getImaginaryPart() == 10);

    ComplexNumber prod2 = c5 * d1;
    assert(prod2.getRealPart() == 90);
    assert(prod2.getImaginaryPart() == 100);

    ComplexNumber quot2 = c5 / d1;
    assert(quot2.getRealPart() == 0.9);
    assert(quot2.getImaginaryPart() == 1);

    // Проверка операторов сравнения
    ComplexNumber c6(1, 2);
    ComplexNumber c7(1, 2);
    ComplexNumber c8(3, 4);
    ComplexNumber c9(5, 0);

    assert(c6 == c7);
    assert(c6 != c8);
    assert(c9 == 5);

    // Проверка функций abs и conjugate
    ComplexNumber c10(3, 4);
    assert(c10.getAbsoluteValue() == 5);
    assert(c10.getConjugate().getRealPart() == 3);
    assert(c10.getConjugate().getImaginaryPart() == -4);

    // Проверка ввода и вывода
    ComplexNumber c11, c12;
    std::stringstream input;
    input << "2.5 3.7";
    input >> c11;
    assert(c11.getRealPart() == 2.5);
    assert(c11.getImaginaryPart() == 3.7);
    input.str("");

    std::stringstream output;
    ComplexNumber c13, c14(1);
    output << c11;
    assert(output.str() == "2.5 + 3.7i");
    output.str("");
    output << c13;
    assert(output.str() == "0 + 0i");
    output.str("");
    output << c14;
    assert(output.str() == "1 + 0i");
    std::cout << "All tests passed!" << std::endl;
}