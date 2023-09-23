#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "ballsortpuzzle.h"

int rows  = 4;
int columns = 6;

int main() {

srand(time(NULL));
int field[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            char randomletter;
            randomletter = "@*^+"[rand () % 4];
            field[i][j] = randomletter;           
        }
    }

}