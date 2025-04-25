 #include <stdio.h>
#include "even odd.h"

int main() {
    int num;
    printf("Enter a number: ");VB

    if (is_even(num)) {
        printf("%d is Even.\n", num);
    } else if (is_odd(num)) {
        printf("%d is Odd.\n", num);
    } else {
        printf("Something went wrong!\n");
    }

    return 0;
}
