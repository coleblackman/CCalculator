#include <stdio.h>
#include <string.h>

#define BUFFERLEN 100 

int main(void)    
{
    char expression [BUFFERLEN];

    printf("Enter your expression\n");
    fgets(expression, BUFFERLEN, stdin);

    printf("Your expression was: %s\n", expression);

    // Find first term

    char* firstPart;
    char* secondPart;
    char* thirdPart;
    char* delimiter = " ";

    firstPart = strtok(expression, delimiter);
    secondPart = strtok(NULL, delimiter);
    thirdPart = strtok(NULL, delimiter);

    printf("First Expression: %s", firstPart);

    printf("\nOperator: %s", secondPart);

    printf("\nSecond Expression: %s", thirdPart);


    printf("Press <return>\n");
    getc(stdin);
    return 0;
}
