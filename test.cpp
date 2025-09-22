#include <iostream>

   #include "fraction.h"

  void testAddition() {

       Fraction a = {1, 2};

       Fraction b = {1, 4};

       Fraction result = add(a, b);

       if (result.num == 3 && result.den == 4) {

           std::cout << "TEST ADD: PASSED" << std::endl;

       } else {

           std::cout << "TEST ADD: FAILED! Got " << result.num << "/" << result.den << ", expected 3/4" << std::endl;

       }

   }

   void testMultiplication() {

       Fraction a = {1, 2};

       Fraction b = {1, 3};

       Fraction result = multiply(a, b);

       if (result.num == 1 && result.den == 6) {

           std::cout << "TEST MULTIPLY: PASSED" << std::endl;

       } else {

           std::cout << "TEST MULTIPLY: FAILED! Got " << result.num << "/" << result.den << ", expected 1/6" << std::endl;

       }

   }

   int main() {

       std::cout << "Running tests..." << std::endl;

       testAddition();

       testMultiplication();

       return 0;

   }