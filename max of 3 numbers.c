#include<stdio.h>
main()
{
    int num1,num2,num3;
    printf("Enter 3 numbers: ");
    scanf("%i %i %i",&num1,&num2,&num3);
            /*Comparing num1 & num2*/
    if(num1>num2){              //For num1>num2
            /*Comparing num1 & num3*/
        if(num1>num3){          //For num1>num3
            printf("\t %i is greatest! \n\t I'm not stupid;D",num1);
        }
        else{                   //For num3>num1
                printf("\t %i is greatest! \n\t I'm not stupid;D",num3);
        }
    }
    else{                       //For num2>num1
            /*Comparing num2 & num3*/
        if(num2>num3){          //For num2>num3
            printf("\t %i is greatest! \n\t I'm not stupid;D",num2);
        }
        else{                   //For num3>num2
            printf("\t %i is greatest! \n\t I'm not stupid;D",num3);
        }
    }
}
