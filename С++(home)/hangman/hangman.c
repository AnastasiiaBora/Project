#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include "hangman.h"

int get_word(char secret[]){
    // check if file exists first and is readable
    FILE *fp = fopen(WORDLIST_FILENAME, "rb");
    if( fp == NULL ){
        fprintf(stderr, "No such file or directory: %s\n", WORDLIST_FILENAME);
        return 1;
    }

    // get the filesize first
    struct stat st;
    stat(WORDLIST_FILENAME, &st);
    long int size = st.st_size;
    srand(time(NULL));
    do{
        // generate random number between 0 and filesize
        long int random = (rand() % size) + 1;
        // seek to the random position of file
        fseek(fp, random, SEEK_SET);
        // get next word in row ;)
        int result = fscanf(fp, "%*s %20s", secret);
        // printf("%s", secret);
        if( result != EOF )
            break;
    }while(1);

    fclose(fp);

    return 0;
}

int is_word_guessed(const char secret[], const char letters_guessed[]) {
    int flag = 0;
    int index = 0;
        for(int i = 0; i < strlen(secret); i++){
             index = 0;
            for(int j = 0; j < strlen(letters_guessed); j++) {
                if(letters_guessed[j] == secret[i]){
                    index++;
                    break;
                }
            }
            if(index == 1){
                flag++;
            }
        }
    if(flag == strlen(secret)) {
        return 1;
    } else {
    return 0;
    }
}

void get_guessed_word(const char secret[], const char letters_guessed[], char guessed_word[]) {
int index = 0;
    for(int i = 0; i < strlen(secret); i++){
            index = 0;
        for(int j = 0; j < strlen(letters_guessed); j++) {
            if(letters_guessed[j] == secret[i]){
                index++;
                break;
            }
        }
        if(index == 1){
            guessed_word[i] = secret[i];
        } else {
                guessed_word[i] = '_';
            }
        printf("%c ", guessed_word[i]);
    }
    printf("\n");
}

void get_available_letters(const char letters_guessed[], char available_letters[]) {
int flag = 0;
     for(int j = 97; j <= 122; j++) {
             flag = 0;
           for(int i = 0; i < strlen(letters_guessed); i++) {
                if((int)letters_guessed[i] == j) {
                    flag++;
                    break;
                }
            }
            if(flag == 0){
               printf("%c", (char)j); 
            }
        }
}

void hangman(const char secret[]) {
    char result0[30];
    int number_of_guesses = 8;
    char user_str[40] = ""; 
    char user_symbol;
    char alphabet[40] = "abcdefghijklmnopqrstuvwxyz";
    char secret1[25];
    get_word(secret1);
    printf("Welcome to the game, Hangman!\n");
    printf("%s\n", secret1);
    printf("I am thinking of a word that is %d letters long.\n", strlen(secret1));

    while(number_of_guesses != 0) {
        int flag = 0;
        printf("-------------");
        printf("\nYou have %d guesses left.\n", number_of_guesses);
        printf("Available letters: ");
        get_available_letters(user_str, result0);
        printf("\nPlease  guess a letter: ");

        char input_user_str[40] = "";
        fgets(input_user_str, (int)sizeof(input_user_str) / 4, stdin);
        input_user_str[strcspn(input_user_str, "\n")] = '\0';

        if(strlen(input_user_str) == strlen(secret1) || strlen(input_user_str) != 1) {
            if(strcmp(secret1, input_user_str) == 0){
                printf("-------------\n");
                printf("Congratulations, you won!");
                break;
            } else {
                printf("Sorry, bad guess. The word was ");
                printf("%s\n", secret1);
                break;
            }
        }

        if(strlen(input_user_str) == 1) {
            user_symbol = input_user_str[0];
                    if ((int)user_symbol >= 65 && (int)user_symbol <= 90) {
                        user_symbol = user_symbol + 32;
                    }
            user_str[0] = user_symbol;

            strncat(user_str, &user_symbol, 1);
            if(((int)user_symbol >= 0 && (int)user_symbol < 65) || ((int)user_symbol > 90 && (int)user_symbol < 97) || ((int)user_symbol > 122)) {
                printf("Oops! '%c' is not a valid letter:", user_symbol);
                char result1[30]; 
                get_guessed_word(secret1, user_str, result1);
                continue;
            }
            for(int i = 0; i < strlen(secret1); i++) {
                if(secret1[i] == user_symbol) {
                    flag ++;
                    break;
                } 
            }
            if(flag == 1) {
                printf("Good guess: ");
                char result[30]; 
                get_guessed_word(secret1, user_str, result);
                if(is_word_guessed(secret1, user_str) == 1) {
                    printf("-------------");
                    printf("Congratulations, you won!");
                    break;
                }
            } else {
                printf("Oops! That letter is not in my word: ");
                char result1[30]; 
                get_guessed_word(secret1, user_str, result1);
                number_of_guesses = number_of_guesses - 1;
            }
        }
    }
    if(number_of_guesses == 0) {
    printf("-------------\n");
    printf("Sorry, you ran out of guesses. The word was ");
    printf("%s\n", secret1);
    }
}