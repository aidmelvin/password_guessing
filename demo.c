#include <stdio.h>
#include <stdint.h>
#include <string.h>


int main () {
    printf("welcome to the password checker game \n");
    printf("in this game you guess a 4-digit numerical password one digit at a time\n");
    printf("why is this not working\n");
    // compare_strings("string 1", "string 2");

    char input[1];
    int *input_2;
    // fgets(input, 1, stdin);
    scanf("%d", input_2);
    printf("\n");

    printf("%i", *input_2);

    printf("Reference/dereference operators testing\n");

    int hi = 5;
    printf("%i", hi);
    printf("\n");
    printf("%p", &hi);

    return 0;
}

int compare_strings(char* str1, char* str2)
{
    
    return 1;
}