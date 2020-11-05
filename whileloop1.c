#include <stdio.h>

/*
A program that prints numbers in a decreasing order 
givin the highest value entered by the user
*/

int main () 
{

    int max;

    printf("Please enter the highest value of your choice\n");
    scanf("%d",&max);

    while (max > 0)
    {
        printf("%d\n",max);
        max = max - 1;
    }

    return 0;

}
