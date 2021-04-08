#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
#include "gammon.h"

void bones(int &x, int &y)
{
	srand(time(0));
	x = rand() % 6 + 1;
	y = rand() % 6 + 1;
	printf("\n");
}

void show_bone_double(int x)
{
	extern int number;
	
	printf("Кiсточки: %d : %d", x, x);
	printf("(");
	for(int i = 4; i > number; i--) {
		printf("!");
	}
	printf(")\n");
}

void show_bone(int x, int y)
{
	printf("Кiсточки: %d : %d\n", x, y);
}

void set_begin(int mas[][m])
{
	int i, j;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++){
			mas[i][j] = 0;
		}
	}

	for(i = n-1; i > n-kol-1; i--){
		mas[i][0] = 1;
	}
	for(i = 0; i < kol; i++){
		mas[i][11] = 2;
	} 
}
