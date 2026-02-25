// Hm P7 silly sentences
#include <stdio.h>
#include <string.h>
int main(){
    char noun[25];
    char adjective[25];
    char noun_2[25];
    printf("Give me a random noun: ");
    scanf("%s", &noun);

    printf("Give me a random adjective: ");
    scanf("%s", &adjective);

    printf("Give me another random noun: ");
    scanf("%s", &noun_2);

    printf("After hiding the painting in his %s for two years, he grew %s and tried to sell it to a/an %s in Florence, but was caught. -\n", noun, adjective, noun_2);

    char first_word[] = "The Mona ";
    char last_word[] = "Lisa";
    strcat(first_word, last_word);
    printf("%s\n", first_word);


     

    return 0;
}