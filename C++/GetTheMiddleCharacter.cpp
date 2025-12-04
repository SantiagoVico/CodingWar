// https://www.codewars.com/kata/56747fd5cb988479af000028/train/cpp
// You are going to be given a word. Your job is to return the middle character of the word.
// If the word's length is odd, return the middle character.
// If the word's length is even, return the middle 2 characters.

#include <string>

std::string get_middle(std::string input) 
{
    size_t len = input.length();
    if (len % 2 == 0) {
        return input.substr(len / 2 - 1, 2);
    } else {
        return std::string(1, input[len / 2]);
    }
}