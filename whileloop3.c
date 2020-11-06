#include <stdio.h>

/*
write a program to print all odd numbers
given the highest odd number entered by the user
*/

int main()
{
    int odd_max;
    int odd_number = 1;

    printf("Please enter the higest odd number\n");
    scanf("%d", &odd_max);

    if(odd_max % 2 == 0) {
        printf("Wrong input... Please enter a odd number\n");
        return 0;
    }

    while (odd_number <= odd_max)
    {
        printf("%d\n",odd_number);

        odd_number = odd_number + 2;

    }

    return 0;
}
