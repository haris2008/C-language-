#include <stdio.h>

int main ()


{
    int num1,num2;
    printf ("Enter First number(x): ");
    scanf("%d",&num1);
    printf("Enter Second number(y): ");
    scanf("%d",&num2);
    if (num1 < num2)
    {
        printf ("x is less than y \n ");
    }
    else if (num1 > num2)
    {
        printf("x is not less than y \n ");
    }
    else if (num1 == num2)
    {
        printf("x is equal to y");
    }
}
