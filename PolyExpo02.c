#include <stdio.h>

int main(void)
{
    int VAL_X, VALUE_OF_POLYNOMIAL;

    printf("Please enter value of x: ");
    scanf("%d", &VAL_X);

   

    // Final formula >
    VALUE_OF_POLYNOMIAL = ((((3 * VAL_X + 2) * VAL_X - 1) * VAL_X + 7) * VAL_X - 6);

    printf("%d", VALUE_OF_POLYNOMIAL);
}