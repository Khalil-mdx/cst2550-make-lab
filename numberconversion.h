#ifndef _NUMBERCONVERSION_H_
#define _NUMBERCONVERSION_H_

#include <string>

/*
  Convert a number from the Roman numeral representation to an
  integer.
  @param roman_numeral the Roman numeral representation of the number
  to be converted.
  @return integer representing the Roman numerals.
*/
int romantoint(std::string roman_numeral);

/*
  Convert a number from an integer to the Roman numeral
  representation.
  @param number the integer to be converted to Roman numerals.
  @return Roman numeral representation of the number.
*/
std::string inttoroman(int number);

#endif
