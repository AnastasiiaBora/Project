#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include "ballsortpuzzle.h"

void generator(const int rows, const int columns, char field[rows][columns]) {
    srand(time(NULL));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            char randomletter;
            randomletter = "@*^+"[rand () % 4];
            field[i][j] = randomletter;           
        }
    }

    int randomnumber1 = rand() % columns;
    int randomnumber2 = rand() % columns;
    while(randomnumber2 == randomnumber1){
        randomnumber2 = rand() % columns;
    }

    for (int i = 0; i < rows; i++) {          
            field[i][randomnumber1] = ' ';  
        }
        
    for (int i = 0; i < rows; i++) {          
            field[i][randomnumber2] = ' ';  
        }
}

void down_possible(const int rows, const int columns, char field[rows][columns], int x, int y) {
    
    for (int i = 0; i < rows; i++) {          
        if(field[i][y - 1] == ' ') {           
            field[i][y - 1] = field[0][x - 1];
            field[i - 1][y - 1] = ' ';
        }
    }

    for (int i = 0; i < rows; i++) {
        if(field[i + 1][y - 1] ==  field[i][y - 1]) {
            continue;
            printf("MUST BE SAME");
        }
    }

    for (int i = 0; i < rows; i++) {
        if(field[i][x - 1] != ' '){
            field[0][x - 1] = ' ';  
        }
    }
}

bool check(const int rows, const int columns, char field[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if(field[i - 1][j] == field[i][j]) {
                return true;
            } else {
                printf("false");
                return false;
            }
        }
    }
}

void game_field(const int rows, const int columns, char field[rows][columns]){
    
}