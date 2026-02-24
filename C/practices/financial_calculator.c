// HM P7 financial calculator
#include <stdio.h>
int main(){
    int income;
    int rent;
    int utilities;
    int groceries;
    int transportation; 

    printf("Your monthly income will be: %d\n");
    scanf("%d", &income);
    printf("Rent is: %d\n");
    scanf("%d", &rent);
   
    printf("Rent is %d of your income\n", (int) rent/income * 100);
    printf("utilities is: %d\n");
    scanf("%d, &utilities");

    printf("Utilities is %d of your income\n", (int) utilities/income * 100);
 
    printf("Groceries is: %d\n");
    scanf("%d", &groceries);

    printf("Groceries is %d of your income\n", (int) groceries/income * 100);

    printf("Transportation is: %d\n");
    scanf("%d", &transportation);
    printf("Transportation is %d of your income\n", (int) transportation/income * 100);
    
   

    return 0;

}