//
// Created by konke on 24.10.22.
//
#include <unistd.h>

void ft_putstr (char *str)
{
  int i = 0;

  while (str[i] != '\0')
	write (1, &str[i++], 1);
}

int main (void)
{
  ft_putstr ("Duck Tales");
  return 0;
}