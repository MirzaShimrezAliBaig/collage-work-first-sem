#include<stdio.h>
void main()
{
int age;
 printf("Enter your age:");
scanf("%d",&age);
if (age<18)
    printf("NOt eligible to vote");
if (age>=18)
   printf("you are eligible to vote");
}
