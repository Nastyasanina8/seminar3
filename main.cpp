#include <iostream>

   #include "fraction.h"

      int main() {

       Fraction f1 = {1, 2}; // Дробь 1/2

       Fraction f2 = {1, 4}; // Дробь 1/4

       Fraction sum = add(f1, f2);

       std::cout << "Sum: " << sum.num << "/" << sum.den << std::endl; // Должно быть 3/4

       Fraction product = multiply(f1, f2);

       std::cout << "Product: " << product.num << "/" << product.den << std::endl; // Должно быть 1/8

       return 0;

   }