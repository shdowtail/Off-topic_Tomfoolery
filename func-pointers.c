//
// Created by konke on 22.10.22.
//
#include <stdio.h>
#include <stdlib.h>

long long add (int a, int b)
{
  return a + b;
}

long long mul (int a, int b)
{
  return a * b;
}


void exec(long long (*fun) (int, int)) /*you can also pass a pointer to a function as an argument to another function*/
{
  printf ("%lld\n", fun (5, 7));
}

int main ()
{
  long long (*fun) (int, int);//declaration of function pointer "fun"

  exec (&add);//passing a pointer to a function as an argument
  exec (&mul);


  fun = &mul;//fun equals to the address of mul function
  printf ("%lld\n", fun (5, 7));
  fun = &add;//fun equals to the address of add function
  printf ("%lld\n", fun (5, 7));



  return 0;
}