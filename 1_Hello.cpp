#include <cmath>
#include <cstddef>
#include <stdio.h>
#include <string>

double distance_2d(const double length, const double width) {
  return sqrt(length * length + width * width);
}

int main() {  
  const std::string hello{"Hello, world!"};

  constexpr double length = 3.0;
  constexpr double width{4./3.};
  // const double distance = distance_2d(length, width);
  const auto distance = distance_2d(length, width);
  printf("%s Length: %1.4f Width: %1.2f Dist: %1.6f\n", hello.c_str(), 
         length, width, distance);

  if (length < width) {
    printf("Length < width\n");
  } else {
    printf("Length >= width\n");
  }
  
  for (size_t i = 0; i < 10; ++i) {
    printf("%lu\n", i*i);
  }

  return 0;
}
