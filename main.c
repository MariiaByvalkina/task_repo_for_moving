#include <stdio.h>
#include <string.h>
#include "src/brackets.h"

int main() {
    char userInput[1000];

    printf("Введите строку для проверки: ");
    
    if (fgets(userInput, sizeof(userInput), stdin) != NULL) {
        userInput[strcspn(userInput, "\n")] = '\0';

        if (CheckBracketsBalance(userInput)) {
            printf("Баланс скобок соблюден.\n");
        } else {
            printf("Баланс скобок нарушен.\n");
        }
    }

    return 0;
}
