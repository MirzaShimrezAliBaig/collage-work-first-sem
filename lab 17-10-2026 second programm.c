#include<stdio.h>
int fact(int n);
void main()
{

    int no;
    printf("enter number:\n");
    scanf("%d" ,&no);

    printf("factorial of%d is %d",no,fact(no));
}
int fact(int no)
{
     if ((no==0)||(no==1))
    return 1;
    else
        return no*fact(no-1);
}
