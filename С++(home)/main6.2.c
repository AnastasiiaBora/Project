#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void encode_char(const char character, bool bits[8]) {
    for (int i = 0; i < 8; i++) {
        bits[i] = (character >> (7 - i)) & 1;
    }
}

char decode_byte(const bool bits[8]) {
    char character = 0;
    for (int i = 0; i < 8; i++) {
        character |= (bits[i] << (7 - i));
    }
    return character;
}

void encode_string(const char* string, bool bytes[][8]) {
    int len = strlen(string);
    for (int i = 0; i < len; i++) {
        encode_char(string[i], bytes[i]);
    }
    encode_char('\0', bytes[len]);
}

void decode_bytes(const int rows, const bool bytes[][8], char* string) {
    for (int i = 0; i < rows; i++) {
        string[i] = decode_byte(bytes[i]);
    }
    string[rows] = '\0';
}



int main() {
    const char* text = "Hello, how are you?";
    const int len = strlen(text);
    bool bytes1[len + 1][8];
    encode_string(text, bytes1);
    for (int j = 0; j <= len; j++) {
        printf("%c: ", text[j]);
        for (int i = 0; i < 8; i++) {
            printf("%d", bytes1[j][i]);
        }
        printf("\n");
    }

    bool bytes2[7][8] = {
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 1, 0, 0, 1, 0, 1},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 1, 1, 0, 1, 1, 1, 1},
        {0, 0, 1, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 0, 0, 0}
    };
    char string[7];
    decode_bytes(7, bytes2, string);
    printf("%s\n", string);

    return 0;
}
