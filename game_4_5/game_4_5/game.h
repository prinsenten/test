#define _CRT_SECURE_NO_WARNINGS

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY 10

#include<stdio.h>
#include<stdlib.h>

void InitMine(char board[ROWS][COLS], int rows,int cols,char set );
void DispalyBoard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Playermove(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);

