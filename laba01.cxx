/***********************
* Автор: Шамин.А.С. *
* Дата: 15.09.2026     *
* Название: lab01      *
***********************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const double PI = 3.1415926535;

  double sideA, sideB, sideC;
  double angleA, angleB, angleC, angleCCheck;
  double semiPerimeter;

  cout << "Enter side a: ";
  cin >> sideA;

  cout << "Enter side b: ";
  cin >> sideB;

  cout << "Enter side c: ";
  cin >> sideC;

  angleA = acos((sideB * sideB + sideC * sideC - sideA * sideA) / (2.0 * sideB * sideC));
  angleB = asin((sideB * sin(angleA)) / sideA);
  angleC = PI - angleA - angleB;

  semiPerimeter = (sideA + sideB + sideC) / 2.0;
  angleCCheck = 2.0 * atan(sqrt(((semiPerimeter - sideA) * (semiPerimeter - sideB)) / (semiPerimeter * (semiPerimeter - sideC))));

  cout << "Angle A: " << angleA << endl
       << "Angle B: " << angleB << endl
       << "Angle C: " << angleC << endl
       << "Angle C check: " << angleCCheck << endl;

  return 0;
}