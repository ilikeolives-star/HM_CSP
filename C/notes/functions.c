#include <stdio.h>
// example 1
int sqr(int num){
    return num * num;
}

// example 2 (no parameters AND no return!)
int count = 0;
void add(){
    count++;

}
// example 3 (string parameter)
void hello(char* name){
    printf("Hello %s! Welcome to my program!\n", name);
}
int main(){
    // example 1 continued
    int number = sqr(12);
    printf("%d\n", number);
    printf("%d\n", sqr(8));

    // example 2 continued
    printf("%d\n", count);
    add();
    add();
    add();
    add();
    add();
    add();
    add();
    add();
    printf("%d\n", count);

    // example 3 continued
    hello("Alex");
    hello("Katie");
    hello("Andrew");
    hello("Tia");
    hello("Treyson");
    hello("Xavier");
    hello("Jake");

    return 0;
}