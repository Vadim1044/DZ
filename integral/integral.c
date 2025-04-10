#include "integral.h"
// double integral_trapez(double a, double b, int n, double (*f)(double)) {
//   double old_i = 0;
//   double temp = old_i + 2 * n;
//   for (int n = 1; abs(temp - old_i) > n; n *= 2) {
//     old_i = temp;
//     double h = (b - a) / n;
//     double s = 1 / 2 * (f(a) + f(b));
//     for (int i = 0; i <= n; i++) {
//       s += f(a + i * h);
//     }
//     double temp = s * h;
//   }
//   return temp;
// }

double integral_trapez(double a, double b, int n, double (*f)(double)) {
  const double width = (b - a) / n;

  double trapezoidal_integral = 0.0;
  for (int step = 0; step < n; step++) {
      const double x1 = a + step * width;
      const double x2 = a + (step + 1) * width;

      trapezoidal_integral += 0.5 * (x2 - x1) * (f(x1) + f(x2));
  }

  return trapezoidal_integral;
}
