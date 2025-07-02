#include <stdio.h>

int main (void)
{
    int num1,num2,num3;
    printf("Enter First score: ");
    scanf("%i",&num1);
    printf("You entered: %i\n",num1);
    printf("Enter Second score: ");
    scanf("%i",&num2);
    printf("You entered: %i\n",num2);
    printf("Enter Third score: ");
    scanf("%i",&num3);
    printf("You entered: %i\n",num3);
    // print average
    printf("Average: %f\n",(num1 + num2 + num3) / 3.0 );

}
