// https://www.codewars.com/kata/554ca54ffa7d91b236000023/train/c
#include <stddef.h>

//  return a dynamically allocated int array
//  the return array will be freed by tester
//  set *szout to the length of output array

int *delete_nth(size_t szin, const int order[szin], int max_e, size_t *szout) {
    if (szin == 0 || max_e <= 0) {
        *szout = 0;
        return NULL;
    }

    int *result = (int *)malloc(szin * sizeof(int));
    if (result == NULL) {
        *szout = 0;
        return NULL; // Memory allocation failed
    }

    size_t count[201] = {0}; // Assuming the range of numbers is -100 to 100
    size_t j = 0;

    for (size_t i = 0; i < szin; i++) {
        int num = order[i];
        if (num < -100 || num > 100) {
            continue; // Skip numbers out of range
        }
        if (count[num + 100] < (size_t)max_e) {
            result[j++] = num;
            count[num + 100]++;
        }
    }

    *szout = j;
    return result;
}