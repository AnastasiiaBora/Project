#include <stdio.h>
#include <stdbool.h>

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

int main() {
    bool bits1[8];
    encode_char('A', bits1);
    for (int i = 0; i < 8; i++) {
        printf("%d", bits1[i]);
    }
    printf("\n");
    // prints: 01000001

    bool bits2[8] = {0, 1, 0, 0, 0, 0, 0, 1};
    printf("%c\n", decode_byte(bits2));
    // prints: A
    
    return 0;
}
