                                                    /**prime numbers between 1 and n**/
#include<stdio.h>
main()
{
    int n,x,y,c=0;
    printf("Enter a number: ");
    scanf("%i",&n);
    printf("Prime numbers between 1 and %d are: \n",n);
    for(x=2;x<=n;x++)
    {
        for(y=2;y<x;y++)
        {
            if(x%y==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%5i",x);
        }
        c=0;
    }
}
