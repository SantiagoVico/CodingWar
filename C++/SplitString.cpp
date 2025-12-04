// https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp
// Complete the solution so that it splits the string into pairs of two characters.
// If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::string str = (s.size() % 2 == 1) ? s + '_' : s;
    std::vector<std::string> result;
    
    for (size_t i = 0; i < str.size(); i += 2) {
        result.push_back(str.substr(i, 2));
    }
    
    return result;
}