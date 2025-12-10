// Create a function taking a positive integer between 1 and 3999as its parameter and 
// returning a string containing theRoman Numeral representation of that integer.

#include <string>
std::string solution(int number){
    std::string roman;
    const std::pair<int, std::string> roman_numerals[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };

    for (const auto& [value, symbol] : roman_numerals) {
        while (number >= value) {
            roman += symbol;
            number -= value;
        }
    }
    return roman;
}