#include "brackets.h"
#include <string.h>

bool CheckBracketsBalance(const char *inputString) {
    int stringLength = strlen(inputString);
    
    char bracketStack[stringLength]; 
    int topElementIndex = -1; 

    for (int i = 0; i < stringLength; i++) {
        char currentCharacter = inputString[i];

        if (currentCharacter == '(' || currentCharacter == '[' || currentCharacter == '{') {
            topElementIndex++;
            bracketStack[topElementIndex] = currentCharacter;
        }
        else if (currentCharacter == ')' || currentCharacter == ']' || currentCharacter == '}') {
            if (topElementIndex == -1) {
                return false;
            }

            char lastOpenedBracket = bracketStack[topElementIndex];

            if ((currentCharacter == ')' && lastOpenedBracket != '(') ||
                (currentCharacter == ']' && lastOpenedBracket != '[') ||
                (currentCharacter == '}' && lastOpenedBracket != '{')) {
                return false; 
            }

            topElementIndex--;
        }
    }

    return (topElementIndex == -1);
}

