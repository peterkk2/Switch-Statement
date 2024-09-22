#include <iostream>

int main() {
  int choice = 2;

  switch (choice) {
    case 1:
      std::cout << "You chose option 1." << std::endl;
      break;
    case 2:
      std::cout << "You chose option 2." << std::endl;
      break;
    default:
      std::cout << "Invalid choice." << std::endl;
  }

  return 0;
}
