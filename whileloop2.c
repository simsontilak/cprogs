#include <stdio.h>

/*
write a program to print all even numbers
given the highest even number entered by the user
*/

int main()
{
    int even_max;
    int even_number = 2;

    printf("Please enter the higest even number\n");
    scanf("%d", &even_max);

    if(even_max % 2 != 0) {
        printf("Wrong input... Please enter a even number\n");
        return 0;
    }

    while (even_number <= even_max)
    {
        printf("%d\n",even_number);

        even_number = even_number + 2;

    }

    return 0;
}
