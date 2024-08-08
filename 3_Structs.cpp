#include <cstddef>
#include <stdio.h>

template <typename T>
struct RegularPolygon {
  size_t number_of_sides_;
  T side_length_;
  RegularPolygon(const size_t n, const T& length)
      : number_of_sides_(n), side_length_(length) {}
  T perimeter() const { return side_length_ * number_of_sides_; }
};

template <typename T>
struct Square : RegularPolygon<T> {
  Square(const T& length) : RegularPolygon<T>(4, length) {}
  T area() const {
    return RegularPolygon<T>::side_length_ * RegularPolygon<T>::side_length_;
  }
};

int main() {
  const RegularPolygon<double> triangle{3, 4.0};
  printf("Triangle perimeter: %1.2f\n", triangle.perimeter());
  const RegularPolygon<size_t> hex{6, 4};
  printf("Hexagon perimeter: %lu\n", hex.perimeter());

  const Square<double> square{8.0};
  printf("Square perimeter: %1.2f area: %1.2f\n", square.perimeter(),
         square.area());
  return 0;
}
