#include <stdio.h>

int main () {
    printf("Escreva sua idade: ");
    int idade;
    scanf("%d", &idade);

    if (idade >=18) {
        printf("Você é maior de idade\n");
    } else {
        printf ("Você é menor de idade\n");
    }
    return 0;
}