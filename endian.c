//
// Created by konke on 22.10.22.
//
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void)
{

int x = 9;

if (*(char *)&x == 0x09)
{
  printf("nice");
}
  return 0;
}
