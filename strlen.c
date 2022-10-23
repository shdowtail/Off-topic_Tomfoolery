
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str) {
  int i = 0;					// set variable i to 0
  while (str[i] != '\0')		// while the char array does not reach a NULL character
	i++;					// increment i, equivalent of i = i + 1;

  return i;					// return i variable to the caller function
}

int main(void) {
  int i = ft_strlen("Duck Tales");	// declare i, call the function ft_strlen, and assign its output to i
  printf("%d", i);
  return 0;
}