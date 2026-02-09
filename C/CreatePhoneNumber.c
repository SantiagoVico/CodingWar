    // https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/c

    #include <stdint.h>
    #include <stdio.h>

    char *create_phone_number(char phnum[15], const uint8_t digits[10])
    {
        *phnum = '\0';
        sprintf(phnum, "(%d%d%d) %d%d%d-%d%d%d%d",
            digits[0], digits[1], digits[2], digits[3],
            digits[4], digits[5], digits[6], digits[7],
            digits[8], digits[9]);
        return phnum;
    }