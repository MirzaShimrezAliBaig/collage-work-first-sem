#include<stdio.h>
void diapaly();
void main()
{
    diapaly();
    diapaly();
    diapaly();

}
void diapaly()
{
static int i=1;
printf("%d\n",i);
i++;
}
//global variable means they exists out side the main and the


