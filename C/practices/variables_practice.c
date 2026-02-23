// HM P7 Variables practice
#include <stdio.h>

int main(){
    int age = 14;
    char name[] = "Hailey";
    char breakfast[] = "Yogurt bowl";
    char color[]= "Purple";
    int year = 2026;
    char school_name[] = "UCAS high school";
    char eye_color[] = "Browm";
    char fav_subject[] = "Math";
    int number = 6;
    const float gpa = 3.62;
    
    printf("favorite number is: %d\n", number);
    printf("Your age is: %d\n", age);
    printf("Your eye color is: %s\n", eye_color);
    printf("You have a %s favorite color\n", color);
    printf("Your name is: %s\n", name);
    printf("Your GPA is: %f\n", gpa);
    printf("Your favorite subject is: %s\n", fav_subject);
    printf("The year is: %d\n", year);
    printf("Your breakfast was: %s\n", breakfast);
   return 0; // required last line

}