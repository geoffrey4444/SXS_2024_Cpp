#include <cmath>
#include <cstddef>
#include <stdio.h>

template <typename T>
double apply_1M_times(const double initial_value, T func) {
  double result = initial_value;
  for (size_t i = 0; i < 1000000; ++i) {
    result = func(result);
  }
  return result;
}

int main() {
  const double cos1M =
      apply_1M_times(4.5, [](const double x) { return cos(x); });
  printf("%1.15f\n", cos1M);

  constexpr double increment = 1000;
  const double billion = 
      apply_1M_times(0.0, [&increment](const double x){ return x + increment; });
  printf("%1.15f\n", billion);

  return 0;
}
