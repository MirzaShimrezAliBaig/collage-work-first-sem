#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c;
float disc,rt1,rt2;
float raal,img;
printf("enter the a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
disc = b*b-4*a*c;
if(disc>0)
 {

    rt1=(-b+sqrt(disc))/2*a;
    rt2=(-b-sqrt(disc))/2*a;
printf("root 1=%2f\n root 2=%2f\n",rt1,rt2 );}
else if (disc==0)
{
    rt1==-b/2*a;
    printf("both roots are equal\n");
    printf("roots=%2.f\n",rt1);
}
else
    printf("root are inagemary");
}
