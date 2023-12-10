//Простой пример
int main() {
  int x = 10;
  int y = hello(x);
  std::cout << y << std::endl;
  return 0;
}

// не компилируется main.cpp:12: error: undefined reference to `hello'
//компилятор не может найти определение функции hello. Функция hello объявлена, но она не определена.



// Правильный код:
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
