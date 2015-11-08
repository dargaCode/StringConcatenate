#include <stdio.h>
#include <stdlib.h>

// function prototypes
int get_str_len(char *);
char * concatenate(char *, char *);

int main(void)
{
    char input_a[256];
    char input_b[256];

    printf("\nEnter String 1: ");
    scanf("%s", input_a);
    printf("Enter String 2: ");
    scanf("%s", input_b);
    printf("\nConcatenate \"%s\" and \"%s\":\n", input_a, input_b);

    char * result = concatenate(input_a, input_b);

    printf("    Result: %s\n", result);
    printf("    Length: %i\n\n", get_str_len(result));

    // free memory from concatenate function
    free(result);

    // success
    return 0;
}

int get_str_len(char * str)
{
    int len = 0;
    while (*(str + len) != '\0')
    {
        len++;
    }
    return len;
}

char * concatenate(char * str_a, char * str_b)
{
    int len_a = get_str_len(str_a);
    int len_b = get_str_len(str_b);
    int new_len = len_a + len_b;

    char * result = malloc((new_len + 1) * sizeof(*result));

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
