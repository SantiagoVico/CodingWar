// https://www.codewars.com/kata/56541980fa08ab47a0000040/train/cpp
// In a factory a printer prints labels for boxes. 
// For one kind of boxes the printer has to use colors which, for the sake of simplicity, are named with letters from a to m.

#include <string>

class Printer
{
public:
    static std::string printerError(const std::string &s)
    {
        int errorCount = 0;
        for (char c : s)
        {
            if (c < 'a' || c > 'm')
            {
                errorCount++;
            }
        }
        return std::to_string(errorCount) + "/" + std::to_string(s.length());
    }
};