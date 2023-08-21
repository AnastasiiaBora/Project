#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "hangman.h"


int slen(const char *str) {
    int letters = 0;
    for(int i = 0; i < strlen(str); i++) {
        if((str[i] >= 'a' && str[i] <= 'z')) { 
            letters++;
        }
    }
    return letters;
}

void small_letters() {
        char str[255];
    fgets(str, (int)sizeof(str)/4, stdin);

    for (int i = 0; i < (int)slen(str); i++) {
        if ((int)str[i] >= 65 && (int)str[i] <= 90) {
        str[i] = str[i] + 32;
        }
    }
}

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

    do{
        // generate random number between 0 and filesize
        long int random = (rand() % size) + 1;
        // seek to the random position of file
        fseek(fp, random, SEEK_SET);
        // get next word in row ;)
        int result = fscanf(fp, "%*s %20s", secret);
        if( result != EOF )
            break;
    }while(1);

    fclose(fp);

    return 0;
}

int is_word_guessed(const char secret[], const char letters_guessed[]) {
    int flag = 0;
    int index = 0;
        for(int i = 0; i < slen(secret); i++){
             index = 0;
            for(int j = 0; j < slen(letters_guessed); j++) {
                if(letters_guessed[j] == secret[i]){
                    index++;
                    break;
                }
            }
            if(index == 1){
                flag++;
            }
        }
    if(flag == slen(secret)) {
        return 1;
    } else {
    return 0;
    }
}

void get_guessed_word(const char secret[], const char letters_guessed[], char guessed_word[]) {
int index = 0;
    for(int i = 0; i < slen(secret); i++){
            index = 0;
        for(int j = 0; j < slen(letters_guessed); j++) {
            if(letters_guessed[j] == secret[i]){
                index++;
                break;
            }
        }
        if(index == 1){
            guessed_word[i] = secret[i];
        } else {
                guessed_word[i] = '_';
                printf("%c", guessed_word[i]);
            }
        printf("%c", guessed_word[i]);
    }
    printf("\n");
}

void get_available_letters(const char letters_guessed[], char available_letters[]) {
int flag = 0;
     for(int j = 97; j <= 122; j++) {
             flag = 0;
           for(int i = 0; i < slen(letters_guessed); i++) {
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
