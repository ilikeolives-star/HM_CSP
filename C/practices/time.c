//Hm P7 Time
#include <stdio.h>

int main(){
    int time;
    printf("What time is it in military time(hourly): \n");
    scanf("%d", &time);
    

    if (time <= 12){
    printf("Good morning!\n");
    }else if (time <=18)
    printf("Good afternoon!\n");
    else if (time <= 24)
    printf("Good evening!\n");




    return 0;
}