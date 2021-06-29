#include <stdio.h>
<<<<<<< HEAD
=======
#include <stdlib.h>
>>>>>>> Implemented all functionality
#include <string.h>

#define BUFFERLEN 100 

<<<<<<< HEAD
=======
long int powe (int base, int exponent);

>>>>>>> Implemented all functionality
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


<<<<<<< HEAD
    printf("Press <return>\n");
    getc(stdin);
    return 0;
}
=======
    // Convert to appropriate datatype
    
    char *end;
    long int firstArg = strtol(firstPart, &end, 10);
    long int secondArg = strtol(thirdPart, &end, 10);


    switch (secondPart[0]) {
      case '+':
	printf("\nAddition: %3ld", firstArg+secondArg);
	break;
      case '-':
	printf("\nSubtraction: %3ld", firstArg-secondArg);
	break;
      case '*':
	printf("\nMultiplication: %3ld", firstArg*secondArg);
	break;
      case '/':
	printf("\nDivision: %3ld", firstArg/secondArg);
	break;
      case '^':
       	printf("\nPower: %3ld", powe(firstArg, secondArg));
	break;
    }

    printf("\nPress <return>\n");
    getc(stdin);
    return 0;

}

long int powe (int base, int exponent) 
{
    long int ret = 1;
    for(int i = 0; i < exponent; i++) 
    {
	ret = ret * base;
    }
    return ret;
}

>>>>>>> Implemented all functionality
