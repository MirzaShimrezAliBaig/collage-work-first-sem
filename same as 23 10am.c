#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c;
float discrimient,root1,root2;
float real,imaginary;
printf("\nQudratic Equation is of the form:ax^2+bx+c=0\n");
printf("\nEnter the coefficiants a,b and c:");
scanf("%f%f%f",&a,&b,&c);
discrimient=b*b-4*a*c;
if (discrimient>0)
{
    root1=(-b+sqrt(discrimient)/(2*a));
    root2=(-b-sqrt(discrimient)/(2*a));
    printf("/nRoot 1=%.2f\n",root1);
    printf("/nRoot 2=%.2f\n",root2);
}
else if (discrimient==0)
{
root1=-b/(2*a);
printf("\nboot roots are equal.\n");
printf("root=%2f\n",root1);
}
else
{
    real=-b/(2*a);
    imaginary=sqrt(-discrimient)/(2*a);
    printf("\nTHe roots are imaginary.\n");
    printf("root1=%.2f+%.2fi\n",real,imaginary);
    printf("root2=%.2f-%.2fi\n",real,imaginary);

}
}
