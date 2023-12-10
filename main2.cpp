#include <iostream>

int hello(int x) {
  return x + 1;
}

int main() {
  int x = 10;
  int y = hello(x);
  std::cout << y << std::endl;
  return 0;
}
