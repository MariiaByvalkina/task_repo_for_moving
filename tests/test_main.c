#include <stdio.h>
#include <assert.h>
#include "../src/brackets.h"

int main() {
    assert(CheckBracketsBalance("([{}])") == true);
    assert(CheckBracketsBalance("Text { (abc) }") == true);
    assert(CheckBracketsBalance("") == true);

    assert(CheckBracketsBalance("([)]") == false);
    assert(CheckBracketsBalance("((") == false);
    assert(CheckBracketsBalance("]") == false);

    printf("Все тесты пройдены\n");
    return 0;
}
