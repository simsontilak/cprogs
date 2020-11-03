#include <stdio.h>

/*
 A program that prints numbers in increasing sequence
 given the highest value entered by the user
*/

int main()
{
    int highest_value;

    printf("Please enter the highest value\n");
    scanf("%d", &highest_value);

    int count = 1;

    while (count < highest_value + 1)
    {
        printf("%d\n",count);

        count = count + 1;
    }

    return 0;
}