#include <stdio.h>
// #include <curses.h>
#include <string.h>
#include <stdbool.h>

#include "k.h"

// without curses library
void render(const struct game game){

   for(int row = 0; row < SIZE; row++){
       printf("+---+---+---+---+\n|");
       for(int col = 0; col < SIZE; col++){
           printf(" %c |", game.board[row][col]);
       }
       printf("\n");
   }
   printf("+---+---+---+---+\n");
}

// void render(const struct game game){
//     clear();
//     char text[20];
//     sprintf(text, "Score: %d", game.score);
//     attrset(COLOR_PAIR(0));
//     mvprintw(1, (COLS - (int)strlen(text)) / 2, text);
//     int x_start = (COLS - 25) / 2;
//     int y_start = 3;
//     attrset(COLOR_PAIR(6));

//     for (int y = y_start; y < y_start + 17; y++){
//         for (int x = x_start; x < x_start + 25; x++){
//             mvprintw(y, x, " ");
//         }
//     }

//     for (int y = 0; y < SIZE; y++){
//         for (int x = 0; x < SIZE; x++) {
//             if (game.board[y][x] == ' ')
//                 attrset(COLOR_PAIR(0));
//             else if (game.board[y][x] < 'C')
//                 attrset(COLOR_PAIR(1));
//             else if (game.board[y][x] < 'E')
//                 attrset(COLOR_PAIR(2));
//             else if (game.board[y][x] < 'G')
//                 attrset(COLOR_PAIR(3));
//             else if (game.board[y][x] < 'J')
//                 attrset(COLOR_PAIR(4));
//             else
//                 attrset(COLOR_PAIR(5));

//             mvprintw(y_start + (y * SIZE) + 1, x_start + (x * 6) + 1, "     ");
//             mvprintw(y_start + (y * SIZE) + 2, x_start + (x * 6) + 1, "  %c  ", game.board[y][x]);
//             mvprintw(y_start + (y * SIZE) + 3, x_start + (x * 6) + 1, "     ");
//         }
//     }

//     refresh();
// }

// int main() {
//     struct game game = {
//         .board = {
// 			{'A', ' ', ' ', ' '},
// 			{'B', ' ', ' ', 'B'},
// 			{'C', 'C', 'C', ' '},
// 			{'D', 'D', 'D', 'D'}
// 		},
//         .score = 0
//     };

// 	initscr();  // Инициализация библиотеки ncurses
//     start_color();  // Включение поддержки цветов
//     init_pair(1, COLOR_WHITE, COLOR_BLUE);  // Инициализация цветовых пар
//     init_pair(2, COLOR_WHITE, COLOR_GREEN);
//     init_pair(3, COLOR_WHITE, COLOR_CYAN);
//     init_pair(4, COLOR_WHITE, COLOR_YELLOW);
//     init_pair(5, COLOR_WHITE, COLOR_RED);
//     init_pair(6, COLOR_WHITE, COLOR_BLACK);

//     render(game);  // Вызов функции для отрисовки

//     getch();  // Ожидание нажатия клавиши

//     endwin();  // Завершение работы с библиотекой ncurses
//   	return 0;
// }