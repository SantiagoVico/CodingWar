// https://www.codewars.com/kata/530e15517bc88ac656000716/train/c

#include <stdlib.h>
# include <stdio.h>

char *rot13(const char *src)
{
    for (const char *p = src; *p; p++) {
        if (*p >= 'a' && *p <= 'z') {
            char c = (*p - 'a' + 13) % 26 + 'a';
            putchar(c);
        } else if (*p >= 'A' && *p <= 'Z') {
            char c = (*p - 'A' + 13) % 26 + 'A';
            putchar(c);
        } else {
            putchar(*p);
        }
    }
    return calloc(1, 1);
}