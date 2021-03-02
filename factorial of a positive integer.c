/*factorial of a non-negative integer*/
#include<stdio.h>
main()
{
    int num,i,fact=1;
    //getting the number
    printf("Enter a number! " );
    scanf("%i",&num);
    //when the entered number is non-negative
    if(num>-1)
    {
        //Logic for calculating factorial using for loop
    for(i=num;i>0;i--)
    {
        fact=fact*i;
    }
    //factorial is returned
        printf("\t Factorial of %i is %i",num,fact);
    }
    //when the entered number is negative
    else
    {
        printf("\t enter a non-negative integer!");
    }
}
