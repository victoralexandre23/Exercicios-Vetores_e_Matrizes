#include <stdio.h>
char copy( char string1[], char string2[]){
    int i = 0;
    while(string1[i] != '\0'){
        string2[i] = string1[i];
        i++;
    }
}

int main() {
    char string1[80];
    char string2[80];

    printf("Digite alguma coisa:");
    scanf("%s", &string1);

    printf("Essa e a primeira string: %s\n",string1);
    copy(string1, string2);
    printf("Essa e a segunda string: %s",string2);
    return 0;
}