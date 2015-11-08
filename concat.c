#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

char * concatenate(const char * str_a, const char * str_b)
{
    int len_a = strlen(str_a);
    int len_b = strlen(str_b);

    char * result = calloc(len_a + len_b + 1,sizeof(*result));

    //failure
    if (result == NULL)
    {
        printf("Memory allocation failure!\nExiting program.\n\n");
        exit(-1);
    }

    // store first string
    strcpy(result, str_a);

    // store second string
    strcat(result, str_b);

    return result;
}

int main(void)
{
    printf("\nEnter String 1: ");
    const char * input_a = GetString();
    printf("Enter String 2: ");
    const char * input_b = GetString();
    printf("\nConcatenate \"%s\" and \"%s\":\n", input_a, input_b);

    char * result = concatenate(input_a, input_b);

    printf("    Result: %s\n", result);
    printf("    Length: %i\n\n", strlen(result));

    // free memory from concatenate function
    free(result);

    // success
    return 0;
}
