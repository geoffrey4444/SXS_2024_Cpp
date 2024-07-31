#include <iostream>

void increment(double* const pointer) { *pointer += 1.0; }

int main() {
  double x = 4.0;
  double* pointer_to_x = &x;
  std::cout << x << " " << pointer_to_x << "\n";

  x = 5.0;
  std::cout << x << " " << pointer_to_x << "\n";
  
  *pointer_to_x = 3.0;
  std::cout << x << " " << pointer_to_x << " " << *pointer_to_x << "\n";

  increment(pointer_to_x);
  std::cout << x << "\n";

  return 0;
}
