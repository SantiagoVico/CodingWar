// https://www.codewars.com/kata/513e08acc600c94f01000001/train/c
#include <stdio.h>

int clamp(int n) {
    if (n < 0) return 0;
    if (n > 255) return 255;
    return n;
}

void rgb (int r, int g, int b, char hex[6 + 1])
{
    sprintf(hex, "%02X%02X%02X", clamp(r), clamp(g), clamp(b));
}