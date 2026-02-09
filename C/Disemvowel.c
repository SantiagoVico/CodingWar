// https://www.codewars.com/kata/52fba66badcd10859f00097e/train/c
// For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".
// Note: for this kata y isn't considered a vowel.
#include <stdlib.h>

char *disemvowel(const char *str)
{
    if (str == NULL) {
        return NULL;
    }

    size_t len = 0;
    for (const char *p = str; *p != '\0'; p++) {
        len++;
    }

    char *result = (char *)malloc(len + 1);
    if (result == NULL) {
        return NULL; // Memory allocation failed
    }

    size_t j = 0;
    for (size_t i = 0; i < len; i++) {
        char c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result[j++] = c;
        }
    }
    result[j] = '\0';
    return result;
}