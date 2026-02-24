// HM P7 financial calculator
#include <stdio.h>
int main(){
    int income;
    int rent;
    int utilities;
    int groceries;
    int transportation;

    printf("Your monthly income will be: \n");
    scanf("%f", &income);
    printf("Rent is: \n");
    scanf("%f", &rent);
   
    printf("Rent is %f of your income\n", (float) income/rent);
    printf("utilities is: \n");
    scanf("%f", &utilities);

    printf("Utilities is %f of your income\n", (float) income/rent);

    printf("Groceries is: \n");
    scanf("%f", &groceries);

    printf("Groceries is %f of your income\n", (float) income/rent);

    printf("Transportation is: \n");
    scanf("%f", &transportation);
    printf("Transportation is %f of your income\n", (float) income/transportation);
    
   

    return 0;

}