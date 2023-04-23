#include <stdio.h>

int main(void)
{

    float DOLLAR_CENT_INPUT, TAX_PERCENTAGE_MULTIPLIER = 0.05f, VALUE_AFTER_TAX;

    printf("Please provide dollar.cent value you'd like to calculate: ");
    scanf("%f", &DOLLAR_CENT_INPUT);

    VALUE_AFTER_TAX = DOLLAR_CENT_INPUT + (DOLLAR_CENT_INPUT * TAX_PERCENTAGE_MULTIPLIER);
    printf("%.2f\n", VALUE_AFTER_TAX);

    return 0;
}