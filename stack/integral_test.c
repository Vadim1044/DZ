#include "integral_function.h"
#include <assert.h>
double Function(double x) { return sin(x); }
void integral_test_1() {
  double a = 0;  // нижний предел Интеграла
  double b = 10; // верхний предел интеграла
  int n = 3000000; // Количество разбиений на отрезке [a,b]

  double result = calculation(a, b, n, Function);
  double expect = 1.8390715;
  assert(fabs(result - expect) <= 1e-6);
}
void integral_test_2() {
  double a = 2;
  double b = 10;
  int n = 100000000;

  double result = calculation(a, b, n, Function);
  double expect = -0.2706468;
  assert(fabs(result - expect) <= 1e-6);
}
void integral_test_3() {
  double a = 12;
  double b = 20;
  int n = 100000;

  double result = calculation(a, b, n, Function);
  double expect = 0.4357719;
  assert(fabs(result - expect) <= 1e-6);
}
int main() {
  integral_test__1();
  integral_test__2();
  integral_test__3();
  return 0;
}
