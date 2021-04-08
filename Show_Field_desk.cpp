#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
#include "gammon.h"


void draw_cell_begin(int number_cell[], int mas[][m], int player)
{
	int j;
	extern int color1, color2;
	
	gotoxy(1, 1);
	for(j = 1; j <= m; j++){
		if(j == 7){
			printf("  ");
		} 
		if(j > 9 && number_cell[j] == player && player == 1){
				SetColor(15, color1);
				printf(" %d ", j);
				SetColor(15, 0);
		}
		else if(j > 9 && number_cell[j] == player && player == 2){
				SetColor(15, color2);
				printf(" %d ", j);
				SetColor(15, 0);
		}
		else if (number_cell[j] == player && player == 1){
				SetColor(15, color1);
				printf(" %d  ", j);
				SetColor(15, 0);
			}
		else if (number_cell[j] == player && player == 2){
				SetColor(15, color2);
				printf(" %d  ", j);
				SetColor(15, 0);
			}
		else if(j > 9 && number_cell[j] == player && player == 1){
				SetColor(15, color1);
				printf(" %d ", j);
				SetColor(15, 0);
		}
		else if(j > 9 && number_cell[j] == player && player == 2){
				SetColor(15, color2);
				printf(" %d ", j);
				SetColor(15, 0);
		}
		else if(number_cell[j] == 3 && player == 1){
				SetColor(color2, color1 + 3);
				printf(" %d ", j);
				SetColor(15, 0);
			}
		else if(number_cell[j] == 3 && player == 2){
				SetColor(color2, color1 + 3);
				printf(" %d ", j);
				SetColor(15, 0);
			}
		else{
			printf("    ");
		}		
	}
}

void draw_cell_end(int number_cell[], int mas[][m], int player)
{
	int j;
	extern int color1, color2;
	
	gotoxy(1, 28);
	for(j = 2 * m; j > m; j--){
			if(j == 18) printf("  ");
			if(number_cell[j] == player && player == 1){
				SetColor(15, color1);
				printf(" %d ", j);
				SetColor(15, 0);
			}
			else if(number_cell[j] == player && player == 2){
				SetColor(15, color2);
				printf(" %d ", j);
				SetColor(15, 0);
			}
			else if(number_cell[j] == 3 && player == 1){
				SetColor(color2, color1 + 3);
				printf(" %d ", j);
				SetColor(15, 0);
			}
			else if(number_cell[j] == 3 && player == 2){
				SetColor(color2, color1 + 3);
				printf(" %d ", j);
				SetColor(15, 0);
			}
			else{
				printf("    ", j); 
			}
		}
	printf("\n\n");
}

void show_field(int number_cell[], int mas[][m], int player)
{
	set_cell(number_cell, mas, player);
	show_desk(mas);
	draw_cell_begin(number_cell, mas, player);
	draw_cell_end(number_cell, mas, player);
}

void show_field(int number_cell[], int mas[][m], int player, int without_set_cell)
{
	show_desk(mas);
	draw_cell_begin(number_cell, mas, player);
	draw_cell_end(number_cell, mas, player);
}

void show_desk(int mas[][m])
{
	int i, j;
	extern int color1, color2;
	
 	system("cls");
	SetColor(15, 5);
	gotoxy(2, 3);
	printf(" b1  b2  b3  b4  b5  b6  b7  b8  b9 b10 b11 b12 \n");		
	SetColor(15, 0);
	for(i = 0; i < n; i++){
		printf("\n");
		for(j = 0; j < m; j++){
			if (mas[i][j]==0){
				printf("    ");
			}
			if (mas[i][j]==1){
				printf("   W");
			} 
			if (mas[i][j]==2){
				printf("   R");
			}	
		}
	}
	printf("\n");
	SetColor(15, 5);
	gotoxy(2, 25);
	printf("b24 b23 b22 b21 b20 b19 b18 b17 b16 b15 b14 b13\n");
	SetColor(15, 0);
	
	gotoxy(1,40);
	SetColor(15, color1);
	printf("Для виходу в попереднє меню по завершенi ходу\n");
	gotoxy(12,41);
	printf("Натистiть'Двiчi Esc'");
	SetColor(15, 0);
	
	//gotoxy(2,2);
	//printf("_______________________________________________");
	//gotoxy(2,26);
	//printf("_______________________________________________");
	
	gotoxy(25,3); SetColor(15, 5); printf("|\n"); gotoxy(25,4); printf("|\n");
	gotoxy(25,5); printf("|\n"); gotoxy(25,6); printf("|\n"); gotoxy(25,7); printf("|\n");
	gotoxy(25,8); printf("|\n"); gotoxy(25,9); printf("|\n"); gotoxy(25,10); printf("|\n");
	gotoxy(25,11); printf("|\n"); gotoxy(25,12); printf("|\n"); gotoxy(25,13); printf("|\n");
	gotoxy(25,14); printf("|\n"); gotoxy(25,15); printf("|\n"); gotoxy(25,16); printf("|\n");
	gotoxy(25,17); printf("|\n"); gotoxy(25,18); printf("|\n"); gotoxy(25,19); printf("|\n");
	gotoxy(25,20); printf("|\n"); gotoxy(25,21); printf("|\n"); gotoxy(25,22); printf("|\n");
	gotoxy(25,23); printf("|\n"); gotoxy(25,24); printf("|\n"); gotoxy(25,25); printf("|\n");
	
	gotoxy(1,3); printf("|\n"); gotoxy(1,4); printf("|\n"); gotoxy(1,5); printf("|\n");
	gotoxy(1,6); printf("|\n"); gotoxy(1,7); printf("|\n"); gotoxy(1,8); printf("|\n");
	gotoxy(1,9); printf("|\n"); gotoxy(1,10); printf("|\n"); gotoxy(1,11); printf("|\n");
	gotoxy(1,12); printf("|\n"); gotoxy(1,13); printf("|\n"); gotoxy(1,14); printf("|\n");
	gotoxy(1,15); printf("|\n"); gotoxy(1,16); printf("|\n"); gotoxy(1,17); printf("|\n");
	gotoxy(1,18); printf("|\n"); gotoxy(1,19); printf("|\n"); gotoxy(1,20); printf("|\n");
	gotoxy(1,21); printf("|\n"); gotoxy(1,22); printf("|\n"); gotoxy(1,23); printf("|\n");
	gotoxy(1,24); printf("|\n"); gotoxy(1,25); printf("|\n");
	
	gotoxy(49,3); printf("|\n"); gotoxy(49,4); printf("|\n"); gotoxy(49,5); printf("|\n");
	gotoxy(49,6); printf("|\n"); gotoxy(49,7); printf("|\n"); gotoxy(49,8); printf("|\n");
	gotoxy(49,9); printf("|\n"); gotoxy(49,10); printf("|\n"); gotoxy(49,11); printf("|\n");
	gotoxy(49,12); printf("|\n"); gotoxy(49,13); printf("|\n"); gotoxy(49,14); printf("|\n");
	gotoxy(49,15); printf("|\n"); gotoxy(49,16); printf("|\n"); gotoxy(49,17); printf("|\n");
	gotoxy(49,18); printf("|\n"); gotoxy(49,19); printf("|\n"); gotoxy(49,20); printf("|\n");
	gotoxy(49,21); printf("|\n"); gotoxy(49,22); printf("|\n"); gotoxy(49,23); printf("|\n");
	gotoxy(49,24); printf("|\n"); gotoxy(49,25); printf("|\n"); SetColor(15, 0); 
}

