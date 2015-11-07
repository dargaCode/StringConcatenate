#include <stdio.h>

// function prototypes
int get_str_len(char *);

int main(void)
{
    char input_a[256];
    char input_b[256];
    
    printf("Enter String 1: ");
    scanf("%s", input_a);
    printf("Enter String 2: ");
    scanf("%s", input_b);
    printf("Concatenate strings %s and %s\n", input_a, input_b);
}
