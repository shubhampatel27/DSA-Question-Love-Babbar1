#include <iostream>

int main() {
  int num = 1;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5 - i; j++) {
      std::cout << "  ";
    }
    for (int j = 1; j <= i; j++) {
      std::cout << num << " ";
      num++;
    }
    std::cout << std::endl;
  }

  return 0;
}
