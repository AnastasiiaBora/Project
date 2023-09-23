#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bmp.h"
#include "playfair.h"
 
char* playfair_encrypt(char* key, char* text){
    int a = 5, b = 5;
    char arr[a][b];
    int indexKey = 0;
    int indexAlph = 0;
    char key_without_duplicates[225] = "";
    char alphabet_without_duplicates[225] = "";


for (int i = 0; i < (int)strlen(key); i++) {
    if ((int)key[i] >= 97 && (int)key[i] <= 122) {
        key[i] = key[i] - 32;
    }
    if(key[i] == 'W'){
        key[i] = 'V';
    }
}

for(int i = 0; i < strlen(key); i++){
    int flag = 0;
    for(int k = 0; k < i; k ++){
    if(key[i] == key[k]){
        flag++;
        break;
    }
    }
    if(flag == 0){
        strncat(key_without_duplicates, &key[i], 1);
    }
}

for(int j = 0; j <= strlen(ALPHA); j++) {
        int flag = 0;
    for(int i = 0; i < strlen(key_without_duplicates); i++) {
        if(key_without_duplicates[i] == ALPHA[j]) {
            flag++;
            break;
        }
    }
    if(flag == 0){
        strncat(alphabet_without_duplicates, &ALPHA[j], 1);
    }
}

int index_letter = 0;
for (int i = 0; i < (int)strlen(text); i++) {
    if(text[i] == ' '){
        text[i] = text[i + 1];
        text[i + 1] = ' ';
    }
    if ((int)text[i] >= 97 && (int)text[i] <= 122) {
        text[i] = text[i] - 32;
    }

    if(text[i] == 'W'){
        text[i] = 'V';
    }
}
int len_text = strlen(text);
for (int k = 0; k < len_text - 1; k++) {
    if (text[k] == text[k + 1]) {
        for (int j = len_text; j > k + 1; j--) {
            text[j] = text[j - 1];
        }
        text[k + 1] = 'X';
        len_text++;
        k++;  
    }
}
for (int i = 0; i < (int)strlen(text); i++) {
    if(text[i] == ' '){
        text[i] = text[i + 1];
        text[i + 1] = ' ';
    }
}

if(strlen(text) % 2 == 1){
    strcat(text, "X");
}

    int len = strlen(key_without_duplicates);
 
for(int i = 0; i < 5; i++){
    for(int x = 0; x < 5; x++, indexKey++) {
        if (len > indexKey) {
            arr[i][x] = key_without_duplicates[indexKey];
            printf("%c\t", key_without_duplicates[indexKey]);
        } else {
            arr[i][x] = alphabet_without_duplicates[indexAlph];
            printf("%c\t", alphabet_without_duplicates[indexAlph]);
            indexAlph++;
        }
    }
    printf("\n");
}
char cipher_letter[a][b];

for(int i = 0; i < 5; i++) {
    for(int x = 0; x < 5; x++) {
        cipher_letter[i][x] = arr[i][x];
    }
}
int cipher_column1 = 0;
int flag_cipher_column1 = 0;
int cipher_str1 = 0;
int flag_cipher_str1 = 0;
int cipher_column2 = 0;
int flag_cipher_column2 = 0;
int cipher_str2 = 0;
int flag_cipher_str2 = 0;
for(int j = 0; j < (int)strlen(text); j = j + 2) {
    for(int i = 0; i < 5; i++) {
        for(int x = 0; x < 5; x++) {        
            if (arr[i][x] == text[j]) {
                cipher_str1 = i;
                cipher_column2 = x;
            }
            if (arr[i][x] ==  text[j + 1]) {
                cipher_column1 = x;
                cipher_str2 = i;
            }
        }
    }
            if(cipher_str1 == cipher_str2){
                if(cipher_column1 >= 5){
                    cipher_column1 = 0;
                }
                if(cipher_column2 >= 5){
                    cipher_column2 = 0;
                }
                cipher_column1++;
                flag_cipher_column1 = cipher_column1;
                cipher_column2++;
                flag_cipher_column2 = cipher_column2;
                cipher_column2 = flag_cipher_column1;
                cipher_column1 = flag_cipher_column2;
            }
            if(cipher_column1 == cipher_column2){
                cipher_str1++;
                cipher_str2++;
                if(cipher_str1 >= 5){
                    cipher_str1 = 0;
                }
                if(cipher_str2 >= 5){
                    cipher_str2 = 0;
                }
            }
printf("%c%c", cipher_letter[cipher_str1][cipher_column1], cipher_letter[cipher_str2][cipher_column2]);
}
}
 
int main(){
    char *encrypted;
    encrypted = playfair_encrypt("SeCReT", "Hello world");
    return 0;
}