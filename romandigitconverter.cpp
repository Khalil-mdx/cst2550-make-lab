#include "numberconversion.h"
#include <iostream>

int main()
{
  char option;
  std::string roman;
  int digits;
  
  do {
  
    std::cout << "\n******** Menu ********\n";
    std::cout << "r : convert Roman numerals to digits\n";
    std::cout << "d : convert digits to Roman numerals\n";
    std::cout << "q : quit\n";
    std::cout << "select an option from above: ";
    std::cin >> option;

    if (option == 'r') {
      std::cout << "Enter the Roman numerals to convert to digits: ";
      std::cin >> roman;
      std::cout << roman << " in digits is " << romantoint(roman) << '\n';
    } else if (option == 'd') {
      std::cout << "Enter the digits to convert to Roman numerals: ";
      std::cin >> digits;
      std::cout << digits << " in Roman numerals is "
		<< inttoroman(digits) << '\n';    
    } else if (option != 'q') {
      std::cout << "Invalid option. Please enter r, d or q\n";
    }
  
  } while (option != 'q');

  std::cout << "Goodbye\n";
  
  return 0;
}
