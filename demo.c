#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h> 
  
// Generates and prints 'count' random 
// numbers in range [lower, upper]. 
int generateRandom(int lower, int upper)
{ 
    return (rand() % (upper - lower + 1)) + lower; 
}

int main () {
    printf("welcome to the password checker game \n");
    printf("in this game you guess a 4-digit numerical password one digit at a time\n");

    int i = 0;
    int number[4];
    printf("here is the actual number: \n");
    for (i = 0; i < 4; i ++)
    {
        number[i] = generateRandom(1, 10);
        printf("%i", number[i]);
    }
    printf("\n");

    i = 0;
    int guess = -1;

    for  (i = 0; i < 4; i ++)
    {
        while (guess != number[i])
        {
            printf("You have successfully guessed ");
            printf("%i", i);
            printf(" digits  of the password. Enter your guess below: \n");
            scanf("%d",  &guess);
        }
    }

    // printf("why is this not working\n");
    // // compare_strings("string 1", "string 2");

    // char input[1];
    // int *input_2;
    // // fgets(input, 1, stdin);
    // scanf("%d", input_2);
    // printf("\n");

    // printf("%i", *input_2);

    // printf("Reference/dereference operators testing\n");

    // int hi = 5;
    // printf("%i", hi);
    // printf("\n");
    // printf("%p", &hi);

    return 0;
}