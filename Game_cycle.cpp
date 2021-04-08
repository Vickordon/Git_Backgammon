#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
#include "gammon.h"

void game()
{
	extern int score1, score2, count_step, Esc, mode;
	srand(time(0));
	int mas[n][m];
	int number_cell[25];
	int player = rand()% 2 + 1;
	int x, y;
	char c=0;

	score1 = score2 = 0;
	count_step = 1;
	set_begin(mas);
	while((score1 < kol) && (score2 < kol)){
		c = getch();
		if(c==Esc) return;
		bones(x, y);
		if(x == y){
			take_step_double_one_bone(x, mas, number_cell, player);
		}
		else{
			take_step_one_bone(x, y, mas, number_cell, player);
		}
		change_player(player);
		count_step++;
	}
	if(score1 >= kol)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                     ");
		printf("Перемiг 1 гравець!\n");
	}
	else if(mode == 1)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                     ");
		printf("Перемiг 2 гравець!\n");
	}
	else
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                     ");
		printf("Перемiг Комп'ютер!\n");
	}
}

