#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<Stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL],int row,int col);
void ShowBoard(char board[ROW][COL], int row, int col);
void PlayerBoard(char board[ROW][COL], int row, int col);
void ComputerBoard(char board[ROW][COL], int row, int col);

char Iswin(char board[ROW][COL], int row, int col);