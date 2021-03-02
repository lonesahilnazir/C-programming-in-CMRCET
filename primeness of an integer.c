                                                /*primeness of an integer*/
#include<stdio.h>
main()
{
    int num,div,check=0;
    printf("enter a number: ");
    scanf("%i",&num);
    //For numbers 2 and above
    if(num>1)
    {
        for(div=2;div<num;div++)
            {
                if(num%div==0)           //checking for numbers by which num is divisible
                {
                    check=check+1;      //counting these numbers
                }
            }
        if(check==0)                        //for no such numbers
            {
                    printf("%i is prime!",num);
            }
        else                                      //for atleast one such number
            {
                printf("%i is composite!",num);
            }
    }
    //For 0 & 1
    else if(0<=num)
    {
        printf("%i is neither composite nor prime!",num);
    }
    //For negative numbers
    else
    {
        printf(" I don't know about negative numbers ;)" );
    }
}
