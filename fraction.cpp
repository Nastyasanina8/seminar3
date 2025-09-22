 #include "fraction.h"

   #include <iostream>

      // Вспомогательная функция для нахождения наибольшего общего делителя (НОД)

   int findGCD(int a, int b) {

       while (b != 0) {

           int temp = b;

           b = a % b;

           a = temp;

       }

       return a;

   }

      // Функция сложения двух дробей

   Fraction add(Fraction a, Fraction b) {

       Fraction result;

       result.num = (a.num * b.den) + (b.num * a.den);

       result.den = a.den * b.den;

       simplify(result); // упрощаем результат

       return result;

   }

     // Функция умножения двух дробей

   Fraction multiply(Fraction a, Fraction b) {

       Fraction result;

       result.num = a.num * b.num;

       result.den = a.den * b.den;

       simplify(result); // упрощаем результат

       return result;

   }

      // Функция упрощения дроби

   void simplify(Fraction &f) {

       int gcd = findGCD(f.num, f.den);

       f.num = f.num / gcd;

       f.den = f.den / gcd;

   }
