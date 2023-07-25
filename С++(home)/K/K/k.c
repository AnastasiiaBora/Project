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
            } else {
               if(game.board[row][col] == 'K') {
                return false;
                 }  
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
    game->score = 0;
    int a = 1;
char randomletter = "AB"[rand () % 2];
if (dx == 1) {
for (int row = 0; row < SIZE; row++) {
    for(int i = 0; i < SIZE; i++) {
        for (int col = SIZE - 1; col > 0; col--) {
            if (game->board[row][col] == ' ') {
                game->board[row][col] = game->board[row][col - 1];
                game->board[row][col - 1] = ' ';
            }
        }
    }
}
for (int row = 0; row < SIZE; row++) {
    for(int i = 0; i < SIZE; i++) {
        for (int col = SIZE - 1; col > 0; col--) {
            if (game->board[row][col] == game->board[row][col - 1] && game->board[row][col] != ' ') {
                game->board[row][col] = game->board[row][col] + 1;
                game->board[row][col - 1] = ' ';
                a = 1;
                for(int j = 0; j < game->board[row][col] - 64; j++) {
                    a = a * 2; 
                }
                game->score += a; 
                }
            }
        }
    }

for (int row = 0; row < SIZE; row++) {
    for(int i = 0; i < SIZE; i++) {
        for (int col = SIZE - 1; col > 0; col--) {
            if (game->board[row][col] == ' ') {
                game->board[row][col] = game->board[row][col - 1];
                game->board[row][col - 1] = ' ';
            }
        }
    }
}

 for (int row = 0; row < SIZE; row++) {
            for (int col = SIZE; col >= 0; col--) {
                if (game->board[row][col] == ' ') {
                    game->board[row][col] = randomletter;
                      break;
                }
            }
            break;
 }
}
if (dx == -1) {
for (int row = 0; row < SIZE; row++) {
    for(int i = 0; i < SIZE - 1; i++) {
        for (int col = 0; col < SIZE - 1; col++) {
            if (game->board[row][col] == ' ') {
                game->board[row][col] = game->board[row][col + 1];
                game->board[row][col + 1] = ' ';
            }
        }
    }
}
for (int row = 0; row < SIZE; row++) {
    for(int i = 0; i < SIZE - 1; i++) {
        for (int col = 0; col < SIZE - 1; col++) {
             if (game->board[row][col] == game->board[row][col + 1] && game->board[row][col] != ' ') {
                game->board[row][col] = game->board[row][col] + 1;
                game->board[row][col + 1] = ' ';
                a = 1;
                for(int j = 0; j < game->board[row][col] - 64; j++) {
                     a = a * 2; 
                 }
                 game->score += a; 
                }
            }
        }
    }

for (int row = 0; row < SIZE; row++) {
    for(int i = 0; i < SIZE - 1; i++) {
        for (int col = 0; col < SIZE - 1; col++) {
            if (game->board[row][col] == ' ') {
                game->board[row][col] = game->board[row][col + 1];
                game->board[row][col + 1] = ' ';
            }
        }
    }
}

for (int row = 0; row < SIZE; row++) {
    for (int col = 0; col < SIZE - 1; col++) {
                if (game->board[row][col] == ' ') {
                    game->board[row][col] = randomletter;
                      break;
                }
            }
            break;
 }
}
if (dy == 1) {
for (int col = 0; col < SIZE; col++) {
    for(int i = 0; i < SIZE; i++) {
        for (int row = SIZE - 1; row > 0; row--) {
            if (game->board[row][col] == ' ') {
                game->board[row][col] = game->board[row - 1][col];
                game->board[row - 1][col] = ' ';
            }
        }
    }
}
for (int col = 0; col < SIZE; col++) {
    for(int i = 0; i < SIZE; i++) {
        for (int row = SIZE - 1; row > 0; row--) {
             if (game->board[row][col] == game->board[row - 1][col] && game->board[row][col] != ' ') {
                game->board[row][col] = game->board[row][col] + 1;
                game->board[row - 1][col] = ' ';
                a = 1;
                for(int j = 0; j < game->board[row][col] - 64; j++) {
                     a = a * 2; 
                 }
                 game->score += a; 
                }
            }
        }
    }

for (int col = 0; col < SIZE; col++) {
    for(int i = 0; i < SIZE; i++) {
        for (int row = SIZE - 1; row > 0; row--) {
            if (game->board[row][col] == ' ') {
                game->board[row][col] = game->board[row - 1][col];
                game->board[row - 1][col] = ' ';
            }
        }
    }
}

for (int col = 0; col < SIZE; col++) {
        for (int row = SIZE - 1; row > 0; row--) {
                if (game->board[row][col] == ' ') {
                    game->board[row][col] = randomletter;
                      break;
                }
            }
            break;
 }
}
if (dy == -1) {
for (int col = 0; col < SIZE; col++) {
    for(int i = 0; i < SIZE - 1; i++) {
        for (int row = 0; row < SIZE - 1; row++) {
            if (game->board[row][col] == ' ') {
                game->board[row][col] = game->board[row + 1][col];
                game->board[row + 1][col] = ' ';
            }
        }
    }
 }
for (int col = 0; col < SIZE; col++) {
    for(int i = 0; i < SIZE - 1; i++) {
        for (int row = 0; row < SIZE - 1; row++) {
             if (game->board[row][col] == game->board[row + 1][col] && game->board[row][col] != ' ') {
                game->board[row][col] = game->board[row][col] + 1;
                game->board[row + 1][col] = ' ';
                a = 1;
                for(int j = 0; j < game->board[row][col] - 64; j++) {
                     a = a * 2; 
                 }
                 game->score += a; 
                }
            }
        }
    }

for (int col = 0; col < SIZE; col++) {
    for(int i = 0; i < SIZE - 1; i++) {
        for (int row = 0; row < SIZE - 1; row++) {
            if (game->board[row][col] == ' ') {
                game->board[row][col] = game->board[row + 1][col];
                game->board[row + 1][col] = ' ';
            }
        }
    }
}

    for (int col = 0; col < SIZE; col++) {
        for (int row = 0; row < SIZE - 1; row++) {
                if (game->board[row][col] == ' ') {
                    game->board[row][col] = randomletter;
                      break;
                }
            }
            break;
 }
}
  return false;
}
