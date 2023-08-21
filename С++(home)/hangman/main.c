#include <stdio.h>
#include "hangman.h"

int main() {
    char secret[25];
    int result;
    printf("Welcome to the game, Hangman!\n");

    result = get_word(secret);
    if(result == 0) {
        printf("%s", secret);
    }
}