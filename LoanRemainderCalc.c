#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    
int main (void) {

   float loan_amount;
   float interest_rate;
   float monthly_payment;
   //User input of the loan amount
    write (1,"Enter the amount you wish to loan: ",35);
    
    scanf ("%f", &loan_amount); 
    
   //User declaration of the interest amount
    write (2, "Enter the required interest rate: ",34);
    scanf ("%f", &interest_rate);

    //User declaration of the monthly payment
    printf (3, "Enter the monthly payment", 25);
    scanf ("%f", monthly_payment);

    //Printing of user provided information
    //  puts("Loan amount: %.2f", loanAmount);
   // puts("Interest rate: %.2f",interestRate);
    //puts("Monthly payment: %.2f", monthlyPayment);
  
    
  
   

} 
