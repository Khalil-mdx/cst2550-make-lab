#ifndef _NUMBERCONVERSION_H_
#define _NUMBERCONVERSION_H_

#include <string>
#include <map>
#include <vector>

/*
  Convert a Roman numeral to an integer.
*/
int romantoint(const std::string& roman_numeral) {
    std::map<char, int> romanValues = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500},
        {'M', 1000}
    };

    int total = 0;
    int prev_value = 0;

    for (int i = roman_numeral.length() - 1; i >= 0; --i) {
        int current_value = romanValues[roman_numeral[i]];

        if (current_value < prev_value)
            total -= current_value;
        else
            total += current_value;

        prev_value = current_value;
    }

    return total;
}

/*
  Convert an integer to a Roman numeral representation.
*/
std::string inttoroman(int number) {
    std::vector<std::pair<int, std::string>> romanValues = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    std::string roman = "";
    for (const auto &pair : romanValues) {
        while (number >= pair.first) {
            roman += pair.second;
            number -= pair.first;
        }
    }

    return roman;
}

#endif