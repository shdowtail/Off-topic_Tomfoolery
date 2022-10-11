#include <stdio.h>
#include <string.h>

int main()
{
    char num_string[100];

    printf("Enter number: ");
    scanf("%s", num_string);


    char* piece = strtok(num_string, ".");
    int i = 0;
    while (piece != NULL)
    {

        printf("%s", piece);
        piece = strtok(NULL, " ");
        if(i == 0)
        {
            ++i;
            printf(".");
        }

    }






}
