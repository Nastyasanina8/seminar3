 #include "fraction.h"

   #include <iostream>

/**
 * @brief Находит Наибольший Общий Делитель (НОД) используя алгоритм Евклида
 * 
 * Алгоритм Евклида основан на принципе, что НОД двух чисел 
 * не меняется, если большее число заменить его разностью с меньшим числом.
 * 
 * @param a Первое целое число (становится НОД в конце)
 * @param b Второе целое число
 * @return int НОД a и b
 * 
 */

   int findGCD(int a, int b) {

       while (b != 0) {

           int temp = b;

           b = a % b;

           a = temp;

       }

       return a;

   }

 /**
 * @brief Складывает две дроби используя общий знаменатель
 * 
 * Сначала находит общий знаменатель, затем складывает числители,
 * в конце упрощает результат.
 * 
 * @param a Первая дробь
 * @param b Вторая дробь  
 * @return Fraction Упрощенный результат сложения
 * 
 * @throw std::invalid_argument если какой-либо знаменатель равен нулю
 */

      

   Fraction add(Fraction a, Fraction b) {

       Fraction result;

       result.num = (a.num * b.den) + (b.num * a.den);

       result.den = a.den * b.den;

       simplify(result); 

       return result;

   }

/**
 * @brief Умножает две дроби используя прямое умножение
 * 
 * Умножает числители вместе и знаменатели вместе,
 * затем упрощает результат.
 * 
 * @param a Первая дробь
 * @param b Вторая дробь
 * @return Fraction Упрощенный результат умножения
 * 
 * @throw std::invalid_argument если какой-либо знаменатель равен нулю
 */

     

   Fraction multiply(Fraction a, Fraction b) {

       Fraction result;

       result.num = a.num * b.num;

       result.den = a.den * b.den;

       simplify(result); 

       return result;

   }

   /**
 * @brief Упрощает дробь делением на НОД
 * 
 * Также обрабатывает отрицательные дроби, обеспечивая
 * чтобы знак всегда был в числителе.
 * 
 * @param f Дробь для упрощения (изменяется на месте)
 * 
 * @warning Если знаменатель становится нулем после упрощения,
 * поведение не определено. Всегда проверяйте входные данные сначала.
 */
      

   void simplify(Fraction &f) {

       int gcd = findGCD(f.num, f.den);

       f.num = f.num / gcd;

       f.den = f.den / gcd;

   }
