#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "k.h"

void add_random_tile(struct game *game){
    int row, col;
    // find random, but empty tile
    do{
        row = rand() % SIZE;
        col = rand() % SIZE;
    }while(game->board[row][col] != ' ');

    // place to the random position 'A' or 'B' tile
    if(rand() % 2 == 0){
        game->board[row][col] = 'A';
    }else{
        game->board[row][col] = 'B';
    }
}

bool is_game_won(const struct game game) {
   for(int row = 0; row < SIZE; row++) {
        for(int col = 0; col < SIZE; col++) {
            if(game.board[row][col] == 'K') {
                return true;
            }
        }
    }
    return false;
} 

bool is_move_possible(const struct game game) {
    for(int row = 0; row < SIZE; row++) {
        for(int col = 0; col < SIZE; col++) {
            if(game.board[row][col] == game.board[row][col-1] || game.board[row][col] == game.board[row-1][col] || game.board[row + 1][col] == ' ' || game.board[row][col + 1] == ' ' || game.board[row][col] == ' ') {
                return true;
            }
        }
    }
    return false;
}

bool update(struct game *game, int dy, int dx) {
    bool date = false;
    if (dy == -1) {
       for(int row = 0; row < SIZE; row++) {
        for(int col = 0; col < SIZE; col++) {
            if(game->board[row][col] == ' ') {
                while (col != 0) {
                    game->board[row][col] = game->board[row][col - 1];
                    col = col -1;
                    date = true;
                }
            }
            if(game->board[row][col] == game->board[row][col + 1]) {
                while (game->board[row][col] != 'K')
                {
                    game->board[row][col] ++;
                    game->score = game->score * 2;
                } 
            }
        }
    }
 }
}

int main() {
    struct game game1 = {
    .board = {
        {'A', 'B', 'C', 'D'},
        {'E', 'F', 'G', 'H'},
        {'I', 'J', 'K', 'A'},
        {'B', 'C', 'D', 'E'}
    },
    .score = 0
};
    printf("is won: %d\n", is_game_won(game1));

    struct game game2 = {
    .board = {
        {'A', ' ', ' ', ' '},
        {' ', ' ', ' ', ' '},
        {' ', ' ', ' ', 'A'},
        {'B', ' ', ' ', ' '}
    },
    .score = 0
};

    printf("is won: %d\n", is_game_won(game2));

    struct game game3 = {
    .board = {
        {' ', 'B', 'E', 'D'},
        {'B', 'F', 'G', 'H'},
        {'I', 'J', 'B', 'A'},
        {'B', 'C', 'I', 'E'}
    },
    .score = 0
};

    printf("is move possible: %d\n", is_move_possible(game3));

    struct game game4 = {
    .board = {
        {'A', 'B', 'C', 'D'},
        {'E', 'F', 'G', 'H'},
        {'I', 'J', 'K', 'A'},
        {'B', 'C', 'D', 'E'}
    },
    .score = 0
};

    printf("is move possible: %d\n", is_move_possible(game4));

    struct game game5 = {
    .board = {
        {'A', ' ', ' ', ' '},
        {'B', ' ', ' ', 'B'},
        {'C', 'C', 'C', ' '},
        {'D', 'D', 'D', 'D'}
    },
    .score = 0
};

    bool result = update(&game5, 0, 1);

    printf("is game update: %d\n", is_move_possible(game5));

    struct game game6 = {
    .board = {
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'}
    },
    .score = 1234
};

    bool result1 = update(&game6, 0, -1);

    printf("is game update: %d\n", is_move_possible(game6));

    return 0;
}