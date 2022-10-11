//
// Created by konket on 11/10/2022.
//
//Thanks to: Kevin Browne @ https://portfoliocourses.com
//
#include <stdio.h>
#include <stdlib.h> //helps dynamically allocate memory using malloc
#include <string.h>

char **split (char *string, char *separators, int *count);

int main ()
{
  char s[] = "To be, or not to be, that is the question.";
  int count_strings = 0;
  char **split_strings = split (s, " ,.", &count_strings);

  for (int i = 0; i < count_strings; i++)
  {
	printf ("\n%s", split_strings[i]);
  }

  for (int i = 0; i < count_strings; i++)
  {
	free (split_strings[i]);
  }
  free (split_strings);
}

char **split (char *string, char *separators, int *count)
{
  // get the length of the string
  int len = (int)strlen (string);

  *count = 0;

  int i = 0;

  while (i < len)
  {
	while (i < len)
	{
	  // keep incrementing i until the character at index i is NOT found in the
	  // separators array, indicating we've reached the next substring to create
	  if (strchr (separators, string[i]) == NULL)
		break;
	  i++;
	}

	int old_i = i;
	while (i < len)
	{
	  if (strchr (separators, string[i]) != NULL)
		break;
	  i++;
	}
	if (i > old_i)
	  *count += 1;
  }
  char **strings;
  strings = malloc (sizeof (char *) * *count);

  i = 0;
  char buffer[16384];
  int string_index = 0;
  while (i < len)
  {
	while (i < len)
	{
	  if (strchr (separators, string[i]) == NULL)
		break;
	  i++;
	}

	int j = 0;
	while (i < len)
	{
	  if (strchr (separators, string[i]) != NULL)
		break;

	  buffer[j] = string[i];
	  i++;
	  j++;
	}
	if (j > 0)
	{

	  buffer[j] = '\0';
	  int to_allocate;
	  to_allocate = sizeof (char) * (strlen (buffer) + 1);

	  strings[string_index] = malloc (to_allocate);

	  // copy the buffer into this dynamically allocated space
	  strcpy (strings[string_index], buffer);

	  // advance string_index so we store the next string at the next index in
	  // the strings array
	  string_index++;
	}
  }
  return strings;
}