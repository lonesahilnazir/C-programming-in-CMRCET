/*******************************ROOTS OF QUADRATIC EQUATION*******************************/
#include<stdio.h>
main()
{
    float a,b,c,D,x1,x2,ip,rp;    /*here 6 variables are defined which are coefficients, variables, discriminant, and roots of equation*/
    printf("Enter the values of a, b, and c\n");    //user is asked to enter the values of coefficients
    scanf("%f %f %f",&a,&b,&c);                     //entered values are asigned to the coefficients(a,b,c)
    D=pow(b,2)-4*a*c;                               //discriminant(D) is evaluated
        /////////if-else conditional statement is started/////////
    if(D>=0)   /*for real roots*/
    {
        printf("Roots are real!\n");
            //roots are evaluated
        x1=(-b+sqrt(D))/2*a;
        x2=(-b-sqrt(D))/2*a;
        printf(" One root is %.2f \n another root is %.2f",x1,x2);    //roots a returned
    }
    else       /*For imaginary roots*/
    {
        printf("Roots are imaginary!\n");
            //roots are evaluated
        ip=sqrt(-D)/2*a;
        rp=-b/2*a;
        printf(" One root is (%.2f)+(%.2f)i \n another root is (%.2f)-(%.2f)i",rp,ip,rp,ip);    //roots a returned
    }
}
