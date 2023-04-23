/* Write a program that asks the user to enter a U.S dollar amount and then shows how to pay that using the smallest amount of 20, 10, 5 and 1 dollar bills
Hint: Divide the amount by 20 to detemine max number of 20 dollar bills needed, do that for every type of bill.*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint-gcc.h>
#include <time.h>

int main()
{

    int INPUT_VALUE;
    int USD20_BILL_AMOUNT, USD20_TOTAL_VALUE, AFTER20_VOLUME_REMAINDER;
    int USD10_BILL_AMOUNT, USD10_TOTAL_VALUE, AFTER10_VOLUME_REMAINDER;
    int USD5_BILL_AMOUNT, USD5_TOTAL_VALUE, AFTER5_VOLUME_REMAINDER;
    int USD1_BILL_AMOUNT, USD1_TOTAL_VALUE;

    printf("Please enter the amount to calculate: ");
    scanf("%d", &INPUT_VALUE);
    if (INPUT_VALUE > 0)
    {
        printf("Amount to calculate: %d\n", INPUT_VALUE);
    }
    
    
    // Calculating the amount of 20 dollar bills and the remainder
    USD20_BILL_AMOUNT = INPUT_VALUE / 20;
    USD20_TOTAL_VALUE = USD20_BILL_AMOUNT * 20;
    AFTER20_VOLUME_REMAINDER = INPUT_VALUE - USD20_TOTAL_VALUE;

    // Calculating the amount of 10 dollar bills and the remainder
    USD10_BILL_AMOUNT = AFTER20_VOLUME_REMAINDER / 10;
    USD10_TOTAL_VALUE = USD10_BILL_AMOUNT * 10;
    AFTER10_VOLUME_REMAINDER = AFTER20_VOLUME_REMAINDER - USD10_TOTAL_VALUE;

    // Calculating the amount of 5 dollar bills needed
    USD5_BILL_AMOUNT = AFTER10_VOLUME_REMAINDER / 5;
    USD5_TOTAL_VALUE = USD5_BILL_AMOUNT * 10;
    AFTER5_VOLUME_REMAINDER = AFTER10_VOLUME_REMAINDER - USD5_TOTAL_VALUE;

    // Calculating the amount of 1 dollar bills needed
    USD1_BILL_AMOUNT = AFTER5_VOLUME_REMAINDER;

    // Processing time
    if (INPUT_VALUE > 0)
    {
        printf("Processing...\n");
        sleep(1);
    }
    // Printing the results of bills of 20

    if (USD20_BILL_AMOUNT > 0)
    {
        printf("amount of 20 Dollar bills: %d\n", USD20_BILL_AMOUNT);
        }else if (USD20_BILL_AMOUNT <= 0)
        {
            printf("20 Dollar bills aren't needed\n");
        }
    // Printing the results of bills of 10

        if (USD10_BILL_AMOUNT > 0)
        {
            printf("amount of 10 dollar bills: %d\n", USD10_BILL_AMOUNT);
        }else if (USD10_BILL_AMOUNT <= 0)
        {
            printf("10 Dollar bills aren't needed\n");   
        }
    // Printing the results of bills of 5

        if (USD5_BILL_AMOUNT > 0)
        {
            printf("amount of 5 dollar bills: %d\n", USD5_BILL_AMOUNT);
        }else if (USD5_BILL_AMOUNT <= 0)
        {
            printf("5 Dollar bills aren't needed\n");
        }    
    // Printing the results of bills of 1
        if (USD1_BILL_AMOUNT > 0)
        {
            printf("amount of 10 dollar bills: %d\n", USD1_BILL_AMOUNT);
        }else if (USD1_BILL_AMOUNT <= 0)
        { 
            printf("1 Dollar bills aren't needed\n");
        }
    return 0;  
         
        
    
}

