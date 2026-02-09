// https://www.codewars.com/kata/54b724efac3d5402db00065e/train/c

#include <stdlib.h>

const char *const morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};
const char *const ascii[55] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".", ",", "?", "'", "!", "/", "(", ")", "&", ":", ";", "=", "+", "-", "_", "\"", "$", "@", "SOS"};

char *decode_morse(const char *morse_code)
{
    if (!morse_code || !*morse_code)
        return calloc(1, 1);

    char *result = calloc(strlen(morse_code) + 1, sizeof(char));
    int result_idx = 0;
    char *code_copy = malloc(strlen(morse_code) + 1);
    strcpy(code_copy, morse_code);

    char *token = strtok(code_copy, " ");
    while (token)
    {
        for (int i = 0; i < 55; i++)
        {
            if (strcmp(morse[i], token) == 0)
            {
                strcat(result, ascii[i]);
                break;
            }
        }
        token = strtok(NULL, " ");
    }

    free(code_copy);
    return result;
}