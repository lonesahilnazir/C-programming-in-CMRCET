/*******************************TEMPRATURE CONVERTER*******************************/
#include<stdio.h>
main()
{
            //options definition and initialization
    int option;
    printf("Choose your option:\n 1.Convert celcius to fehrenheit \n 2.Convert fehrenheit to celcius\n");
    scanf("%i",&option);
            //For option 1
    if(option == 1){
        float c,f;
        printf("Enter temprature in degree celcius: ");
        scanf("%f",&c);
        f=(9*c)/5+32;
        printf(" In fehrenheit scale, this temprature = %f",f);
    }
            //For option 2
    else{
        if(option == 2){
            float c,f;
            printf("Enter temprature in degree fehrenheit: ");
            scanf("%f",&f);
            c=(f-32)*5/9;
            printf(" In celcius scale, this temprature = %f",c);
        }
            //For wrong options
        else{
            printf("\t Enter a valid option!");
        }
    }
}
