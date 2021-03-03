                                /***********Fibonacci sequence***********/
#include<stdio.h>
main()
{
    int t1=0,t2=1,nt,not,c;           //nt=next-term, not=number-of-terms, & c is repeater
    printf("How many terms you want to print? ");
    scanf("%i",&not);                  //taking number of terms
    printf("Terms are: ");
    //logic for calculating terms using "for loop"
    for(c=0;c<not;c++)  /* OR "for(c=1;c<=not;c++)" can also be written*/
    {
        printf("%i, ",t1);      //first term(0) returned
        nt=t1+t2;               //next term is set to sum of previous two terms
        t1=t2;                    //now, second term is taken as first term [value of t2 is assigned to t1]
        t2=nt;                    //now, next term is taken as second term [value of tn is assigned to t2]
    }
}
