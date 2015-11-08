#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

char * concatenate(char * str_a, char * str_b)
{
    int len_a = strlen(str_a);
    int len_b = strlen(str_b);
    int new_len = len_a + len_b;

    char * result = calloc(len_a + len_b + 1,sizeof(*result));

    //failure
    if (result == NULL)
    {
        exit(-1);
    }

    // store first string
    for (int i = 0; i < len_a; i++)
    {
        *(result + i) = *(str_a + i);
    }
    // store second string
    for (int i = 0; i < len_b; i++)
    {
        *(result + len_a + i) = *(str_b + i);
    }
    result[new_len] = '\0';

    return result;
}

int main(void)
{
    printf("\nEnter String 1: ");
    char * input_a = GetString();
    printf("Enter String 2: ");
    char * input_b = GetString();
    printf("\nConcatenate \"%s\" and \"%s\":\n", input_a, input_b);

    char * result = concatenate(input_a, input_b);

    printf("    Result: %s\n", result);
    printf("    Length: %i\n\n", strlen(result));

    // free memory from concatenate function
    free(result);

    // success
    return 0;
}
