#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {
  // Fixed a;
  // Fixed const b( 10 );
  // Fixed const c( 42.42f );
  // Fixed const d( b );
  // a = Fixed( 1234.4321f );
  // std::cout << "a is " << a << std::endl;
  // std::cout << "b is " << b << std::endl;
  // std::cout << "c is " << c << std::endl;
  // std::cout << "d is " << d << std::endl;
  // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
  // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
  // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
  int price = 0.5 * (1 << 8);
  std::cout << "price fraction is " << (double)(price & ((1 << 8) - 1)) / (1 << 8);
  return 0;
}
