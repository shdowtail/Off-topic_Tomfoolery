#include <stdio.h>

int main(void)
{
    int VAL_X, X_POWER_OF_5, X_POWER_OF_4, X_POWER_OF_3, X_POWER_OF_2, VALUE_OF_POLYNOMIAL;

    printf("Please enter value of x: ");
    scanf("%d", &VAL_X);

    // Calculating exponents >
    X_POWER_OF_2 = VAL_X * VAL_X,
    X_POWER_OF_3 = VAL_X * VAL_X * VAL_X,
    X_POWER_OF_4 = VAL_X * VAL_X * VAL_X * VAL_X,
    X_POWER_OF_5 = VAL_X * VAL_X * VAL_X * VAL_X * VAL_X;

    // Final formula >
    VALUE_OF_POLYNOMIAL = (3 * X_POWER_OF_5) + (2 * X_POWER_OF_4) - (5 * X_POWER_OF_3) - X_POWER_OF_2 + (7 * VAL_X) - 6;

    printf("%d", VALUE_OF_POLYNOMIAL);
}