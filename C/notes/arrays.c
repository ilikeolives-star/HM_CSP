#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // example 1 
    int grades[] = {78,29,32,43,89,67};
    printf("%d\n", grades[1]);
    grades[1] = 70;
    printf("%d\n", grades[1]);

    // example 2
    float measurements[10];
    measurements[0] = 5.25;
    measurements[1] = 0.25;
    measurements[2] = 1.25;
    measurements[3] = 3.25;

    printf("%.2f %.2f %.2f %.2f %.2f \n", measurements[0], measurements[1], measurements[2], measurements[3], measurements[4]);

    // example 3
    char names[][20] = {"Alex", "Jake", "Jhon", "calvin", "Jack", "Coral"};
    printf("%s\n", names[4]);

    // for loops examples
    for(int i = 20; i > 0; i--){
        printf("%d ", i);

    }
    printf("\n"); // makes a new line


    // for loop example 2
    int names_len = sizeof(names)/ sizeof(names[0]);
    for(int x = 0; x < names_len; x++){
        printf("%s jackson\n", names[x]);
    }

    // for loops example 3
    srand(time(NULL));

    int number = rand() % 10 +1;
    int count = 0;
    for(count; count < number; count++){
        printf("duck\n");
    }
    printf("Goose!!\n");


    return 0;
}