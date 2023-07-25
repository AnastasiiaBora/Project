#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
// #include <curses.h>
#include "k.h"
#include "ui.h"

int main() {
    int score1 = 0;
    int dy = 0, dx = 0; 
    struct game game = {
        .board = {
            {' ', 'B', ' ', 'D'},
            {' ', ' ', 'C', 'D'},
            {' ', ' ', 'C', 'D'},
            {'A', 'B', 'C', 'D'}
        },
        .score = 0
    };
    
    while(is_move_possible(game)){
        printf("score: %d\n", score1);
        render(game);
        printf("\tWhat move do you want to make?\nMove Up:-1 0\nMove Down:1 0\nMove Right:0 1\nMove Left:0 -1\nPlease select two digits");      
        dy = 0;
        dx = 0;
        scanf("%d %d", &dy, &dx);

        while((dy != -1 && dx != 0) && (dy != 1 && dx != 0) && (dy != 0 && dx != 1) && (dy != 0 && dx != -1)){
            printf("Please select two digits");
            scanf("%d %d", &dy, &dx);
        }
        
        update(&game, dy, dx);

        score1 += game.score;
        
        if (is_game_won(game)){
            printf("You win!");
            break;
        }
        system("cls");  
    }
        printf("Game over");
    return 0;
}