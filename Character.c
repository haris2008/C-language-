#include <stdio.h>

int main ()
{
    int c;
    printf("Do you agree? (1 for Yes, 0 for No): ");
    scanf("%d", &c);

    if (c == 1)
    {
        printf("Agreed.\n");
    }
    else if (c == 0)
    {
        printf("Not Agreed.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
