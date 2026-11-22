/*
 * main.c - Sandbox for testing
 * 
 * To use the functions you implemented in code.c, you must include the header:
 *   #include "code.h"
 * 
 * This tells the compiler where to find the function prototypes.
 * Without this include, the compiler won't know about your functions!
 */ 

#include <stdio.h>

int main(void)
{

    int x = 1;
    int y = 2;
    char names[][20] = {"banana", "apple", "Zebra", "cherry"};

    int r1 = compare_int_asc(&x, &y);
    int r2 = compare_int_desc(&x, &y);
    float r3 = compare_float_asc(&x, &y);
    float r4 = compare_float_desc(&x, &y);
    int r5 = compare_str_asc(&names[1], &names[2]);
    int r6 = compare_str_desc(&names[1], &names[2]);
    int r7 = compare_strptr_asc(&names[0][0], &names[0][1]);
    int r8 = compare_strptr_desc(&names[0][0], &names[0][1]);
    swap_elements(&x, &y, sizeof(int));
    bubble_sort();

    return 0;
}