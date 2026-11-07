#include<stdio.h>
void main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if (number<0)
        printf("the number is negative");
    if (number>0)
        printf("the number is positive");
    if (number==0)
        printf("number is equal to zero");

}
