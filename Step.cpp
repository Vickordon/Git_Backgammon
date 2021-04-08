#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
#include "gammon.h"


void take_step_double_one_bone(int x, int mas[][m], int number_cell[], int player)
{
	extern int number, score1, score2, count_step, mode, pause;
	char str[2];
	int cell, i, k, flag=0;
	extern	bool check_home, check1, check2, check3, check4;
 	extern int x1_global, x2_global, x3_global, x4_global;
 	
 	number = 0;
	check1 = check2 = check3 = check4 = check_home = false;
	x1_global = x2_global = x3_global = x4_global = -1;

	while(number < 4 && score1!= kol && score2!=kol)
	{
		if (!check_step(number_cell, mas, player, x)) break;
		set_cell(number_cell, mas, player);
		if(check_home && ( x != 3 || count_step > 2))
		{
			if (player == 1) number_cell[24] = 0;
			else number_cell[12] = 0;
		}

		system("cls");

		show_field(number_cell, mas, player, 1);

		if(mode == 1)
		{
			cell=0;
			printf("Ходить %d гравець\n", player);
			printf("Рахунок: (1 гравець) %d - %d (2 гравець)\n", score1, score2);
			show_bone_double(x);			
			printf("Введiть номер бара: ");
			do{
				gets(str);
				k=strlen(str);
				for(i=0;i<k; i++){
					if (str[i]<'0' || str[i]>'9'){
						flag++;
					}
				}
					if (flag==0){
						sscanf(str, "%d", &cell);	
					}
					flag=0;
			}
			while(cell==0);
		
		}
		else if(player == 1)
		{
			cell=0;
			printf("Ходить Гравець\n");
			printf("Рахунок: (Гравець) %d - %d (Комп'ютер)\n", score1, score2);
			show_bone_double(x);			
			printf("Введiть номер бара: ");
			do{
				gets(str);
				k=strlen(str);
				for(i=0;i<k; i++){
					if (str[i]<'0' || str[i]>'9'){
						flag++;
					}	
				}
					if (flag==0){
						sscanf(str, "%d", &cell);
					} 
					flag=0;
			}
			while(cell==0);
		}
		else{
			printf("Ходить Комп'ютер\n");
			printf("Рахунок: (Гравець) %d - %d (Комп'ютер)\n", score1, score2);
			show_bone_double(x);		
			cell = chance(number_cell, player);
			Sleep(pause);
		}
		for(int i = 0; i < m*2 + 1; i++)
		{
			if(number_cell[i] == player && i == cell)
			{
				take_step_double_two_bone(x, mas, number_cell, player, cell);
				i = 25;
			}
		}
	}
}

void take_step_double_two_bone(int x, int mas[][m], int number_cell[], int player, int cell)
{
	extern bool check1, check2, check3, check4, buf1, buf2, buf3, buf4;
	extern int mode, score1, score2, pause, number, count_step;
	extern int x1_global, x2_global, x3_global, x4_global;

	
	buf1 = buf2 = buf3 = buf4 = false;
	char str[2];
	int cell_step, k, i, flag=0;

	system("cls");
	
	variant_step_double(x, mas, number_cell, player, cell);
	number_cell[cell] = 3;
	show_field(number_cell, mas, player, 1);
	
	if(mode == 1)
	{
		printf("Ходить %d гравець\n", player);
		printf("Рахунок: (1 гравець) %d - %d (2 гравець)\n", score1, score2);
		show_bone_double(x);

		if(number_cell[0] == player) 
		{ 
			if(player == 1)
			{
				printf("0) Здати фiшку\n"); 
			}
			else
			{
				printf("0) Здати фiшку\n"); 
			}
		}
		cell_step=0;
		printf("Введiть бар, на який пересунути фiшку: ");
		do{
				gets(str);
				k=strlen(str);
				for(i=0;i<k; i++){
					if (str[i]<'0' || str[i]>'9'){
						flag++;	
					}
				}
					if (flag==0){
						sscanf(str, "%d", &cell_step);
					}
					
					flag=0;
			}
			while(cell_step==0);		
	}
	else if(player == 1)
	{
		cell_step=0;
		printf("Ходить Гравець\n", player);
		printf("Рахунок: (Гравець) %d - %d (Комп'ютер)\n", score1, score2);
		show_bone_double(x);
		if(number_cell[0] == player) 
		{ 
			printf("0) Здати фiшку \n"); 
		}
		printf("Введiть бар, на який пересунути фiшку: ");
			do{
				gets(str);
				k=strlen(str);
				for(i=0;i<k; i++){
					if (str[i]<'0' || str[i]>'9'){
						flag++;
					}					
				}
					if (flag==0){
						sscanf(str, "%d", &cell_step);	
					}
					flag=0;
			}
			while(cell_step==0);
	}
	else
	{
		printf("Ходить Комп'ютер\n", player);
		printf("Рахунок: (Гравець) %d - %d (Комп'ютер)\n", score1, score2);
		show_bone_double(x);

		if(number_cell[0] == player) 
		{ 
			printf("0) Здати фiшку\n"); 
		}

		Sleep(pause);

		cell_step = chance(number_cell, player);
	}

	for(int i = 0; i < m*2 + 1; i++)
	{
		if(number_cell[i] == player && i == cell_step){
			change_position(cell, mas, player, cell_step);
			if(x1_global == i){
				if(number == 0){
					check4 = true;
				}
				if(number == 1){
					check4 = check3 = true;
				}
				if(number == 2){
					check4 = check3 = check2 = true;
				}
				number++;
			}
			if(x2_global == i){
				if(number == 0){
					check4 = check3 = true;
				}
				if(number == 1){
					check4 = check3 = check2 = true;
				}
				number += 2;
			}
			if(x3_global == i){
				if(number == 0) check1 = false;
				else check1 = true;

				check2 = true;
				check3 = true;
				check4 = true;
				number += 3;
			}
			if(x4_global == i){
				number += 4;
				check1 = true;
				check2 = true;
				check3 = true;
				check4 = true;
			}
				
			if(i == 0 && (buf1)){
				if(number == 0){
					check4 = true;
				}
				if(number == 1){
					check4 = check3 = true;
				}
				if(number == 2){
					check4 = check3 = check2 = true;
				}
				number++;
			}
			if(i == 0 && (buf2)){
				if(number == 0)
				{
					check4 = check3 = true;
				}
				if(number == 1){
					check4 = check3 = check2 = true;
				}
				number += 2;
			}
			if(i == 0 && (buf3)){
				if(number == 0) check1 = false;
				else check1 = true;
				check2 = true;
				check3 = true;
				check4 = true;
				number += 3;
			}
			if(i == 0 && (buf4)){
				number += 4;
				check1 = true;
				check2 = true;
				check3 = true;
				check4 = true;
			}

			i = 26;
		}
	}	
}

void take_step_one_bone(int x, int y, int mas[][m], int number_cell[], int player)
{
	int cell, k, i, flag=0;
	char str[2];
    extern bool check_x, check_y, check_home;
    extern int number, score1, score2, mode, pause;
    extern int x_global, y_global, x_y_global;
    
	number = 0;
	check_x = check_y = check_home = false;
	x_global = y_global = x_y_global = -1;

	while(number < 2 && score1!= kol && score2!=kol)
	{
		system("cls");

		if (!check_step(number_cell, mas, player, x, y)){
			break;
		}

		set_cell(number_cell, mas, player);
		
		if(check_home){
			if (player == 1){
				number_cell[24] = 0;	
			} 
			else{
				number_cell[12] = 0;
			}
		}

		show_field(number_cell, mas, player, 1);

		if(mode == 1){
			cell=0;
			printf("Ходить %d гравець\n", player);
			printf("Рахунок: (1 гравець) %d - %d (2 гравець)\n", score1, score2);
			show_bone(x, y);		
			printf("Введiть номер бара, з якого робити хiд: ");
			do{
				gets(str);
				k=strlen(str);
				for(i=0;i<k; i++){
					if (str[i]<'0' || str[i]>'9'){
						flag++;	
					}	
				}
					if (flag==0){
						sscanf(str, "%d", &cell);
					}
				flag=0;
			}
			while(cell==0);	
		
		}
		else if(player == 1){
			cell=0;
			printf("Ходить Гравець\n");
			printf("Рахунок: (Гравець) %d - %d (Комп'ютер)\n", score1, score2);
			show_bone(x, y);		
			printf("Введiть номер бара: ");
			do{
				gets(str);
				k=strlen(str);
				for(i=0;i<k; i++){
					if (str[i]<'0' || str[i]>'9'){
						flag++;	
					}
				}
					if (flag==0){
						sscanf(str, "%d", &cell);	
					} 
				flag=0;
			}
			while(cell==0);
		
		}
		else
		{
			printf("Ходить Комп'ютер\n");
			printf("Рахунок: (Гравець) %d - %d (Комп'ютер)\n", score1, score2);
			show_bone(x, y);		
			cell = chance(number_cell, player);
			Sleep(pause);
		}

		for(int i = 0; i < m*2 + 1; i++){
			if(number_cell[i] == player && i == cell){
				take_step_two_bone(x, y, mas, number_cell, player, cell);
				i = 25;
			}
		}
	}
}

void take_step_two_bone(int x, int y, int mas[][m], int number_cell[], int player, int cell)
{
	extern bool buf_x, buf_y;
	extern int number, mode, score1, score2, pause;
	extern int x_global, y_global, x_y_global;
	extern bool check_x, check_y, buf_x, buf_y;
	
	char str[2];
	int cell_step, k, i, flag=0;
	
	buf_x = buf_y = false;
	system("cls");
	variant_step(x, y, mas, number_cell, player, cell);
	number_cell[cell] = 3;
	show_field(number_cell, mas, player, 1);
	
	if(mode == 1)
	{
		printf("Ходить %d гравець\n", player);
		printf("Рахунок: (1 гравець) %d - %d (2 гравець)\n", score1, score2);
		show_bone(x, y);

		if(number_cell[0] == player){ 
			if(player == 1){
				printf("0) Здати фiшку\n"); 
			}
			else{
				printf("0) Здати фiшку\n"); 
			}
		}
		cell_step=0;
		printf("Введiть бар, на який пересунути фiшку: ");
		do{
			gets(str);
			k=strlen(str);
			for(i=0;i<k; i++){
				if (str[i]<'0' || str[i]>'9'){
					flag++;
				}	
			}
				if (flag==0){
					sscanf(str, "%d", &cell_step);	
				} 
			flag=0;
		}
		while(cell_step==0);
		
	}
	else if(player == 1){
		printf("Ходить Гравець\n");
		printf("Рахунок: (Гравець) %d - %d (Комп'ютер)\n", score1, score2);
		show_bone(x, y);

		if(number_cell[0] == player){ 
			printf("0) Здати фiшку\n"); 
		}
		printf("Введiть бар, на який пересунути фiшку: ");
		do{
			gets(str);
			k=strlen(str);
			for(i=0;i<k; i++){
				if (str[i]<'0' || str[i]>'9'){
					flag++;
				}
			}
				if (flag==0){
					sscanf(str, "%d", &cell_step);
				} 
			flag=0;
		}
		while(cell==0);
	}
	else{
		printf("Ходить Комп'ютер\n");
		printf("Рахунок: (Гравець) %d - %d (Комп'ютер)\n", score1, score2);
		show_bone(x, y);

		if(number_cell[0] == player) 
		{ 
			printf("0) Здати фiшку\n"); 
		}

		Sleep(pause);

		cell_step = chance(number_cell, player);
	}

	for(int i = 0; i < m*2 + 1; i++)
	{
		if(number_cell[i] == player && i == cell_step)
		{
			change_position(cell, mas, player, cell_step);
			if(x_global == i) 
			{
				number++;
				check_x = true;
			}
			if(y_global == i)
			{
				number++;
				check_y = true;
			}
			if(x_y_global == i)
			{
				number += 2;
			}
				
			if(i == 0 && (buf_x && buf_y)) number += 2;
				
			if(i == 0 && buf_x)
			{
				number++;
				check_x = true;
			}
			if(i == 0 && buf_y) 
			{
				number++;
				check_y = true;
			}
			i = 26;
		}
	}
}

void change_position(int cell, int mas[][m], int player, int &step)
{
	int buf_step, i;
	extern bool check_home;
	extern int score1, score2;
	
	if(player == 1){
		if (cell == 24){
			check_home = true;	
		} 
		if(cell > m){
			buf_step = step;
			step = cell - step;
			i = n - 1;
			while (1){
				if (mas[i][cell - (cell - m)*2] !=player){
					mas[i+1][cell - (cell - m)*2] = 0;
					break;
				}
				i--;
			}

			if( buf_step == 0 ){
				score1++;
			} 
			else if(cell - step > m){
				i = n - 1;
				while (1){
					if (mas[i][step - (cell - 2*m)] != player){
						mas[i][step - (cell - 2*m)] = player;
						break;
					}
					i--;
				}
			}
			else{
				i = 0;
				while (1){
					if (mas[i][m - 1 - (step - (cell - m))] != player){
						mas[i][m - 1 - (step - (cell - m))] = player;
						break;
					}
					i++;
				}
			}
		}
		if (cell <= m){
			buf_step = step;
			step = cell - step;
			i = 0;
			while (1){
				if (mas[i][cell - 1] != player){
					mas[i-1][cell - 1] = 0;
					break;
				}
				i++;
			}
			if( buf_step == 0 ){
				score1++;	
			} 
			else if(cell - step > 0){
				i = 0;
				while(1){
					if (mas[i][cell - step - 1] != player){
						mas[i][cell - step - 1] = player;
						break;
					}
					i++;
				}
			}
		}
	}

	if(player == 2) {
		if (cell == 12) {
			check_home = true;	
		}
		if (cell <= 12){
			i = 0;
			while (1){
				if (mas[i][cell - 1] != player){
					mas[i-1][cell - 1] = 0;
					break;
				}
				i++;
			}
			if (step == 0){
				score2++;
			} 
			else if(cell - step > 0){
				step = cell - step;
				i = 0;
				while(1){
					if (mas[i][cell - step - 1] != player){
						mas[i][cell - step - 1] = player;
						break;
					}
					i++;
				}
			}
			else{
				step = m*2 - step + cell;
				i = n - 1;
				while (1){
					if (mas[i][step - cell] != player){
						mas[i][step - cell] = player;
						break;
					}
					i--;
				}
			}
		}

		if(cell > m){
			buf_step = step;
			step = cell - step;
			i = n - 1;
			while (1){
				if (mas[i][cell - (cell - m)*2] !=player){
					mas[i+1][cell - (cell - m)*2] = 0;
					break;
				}
				i--;
			}
			if (buf_step == 0){
				score2++;	
			} 
			else if(cell - step > m){
				i = n - 1;
				while (1){
					if (mas[i][step - (cell - 2*m)] != player){
						mas[i][step - (cell - 2*m)] = player;
						break;
					}
					i--;
				}
			}
		}
	}
}

void variant_step(int x, int y, int mas[][m], int number_cell[], int player, int cell)
{
	extern bool check_x, check_y;
	extern int x_global, y_global, x_y_global;
	extern bool buf_x, buf_y;
	int i;
	
	for(i = 0; i <= m*2; i++){
		number_cell[i] = 0;	
	} 
	if (player == 1){
		if(cell > m){
			if(cell - x > m){
				if (((mas[n-1][x - (cell - 2*m)] == player || mas[n-1][x - (cell - 2*m)] == 0)) && !check_x){
					number_cell[cell - x] = player;
					x_global = cell - x;
				}
			}
			else{
				if (((mas[0][m - x + (cell - (m + 1))] == player) || (mas[0][m - x + (cell - (m + 1))] ==  0)) && !check_x){
					number_cell[cell - x] = player;
					x_global = cell - x;
				}
			}
			if(cell - y > m){
				if (((mas[n-1][y - (cell - 2*m)] == player || mas[n-1][y - (cell - 2*m)] == 0)) && !check_y){
					number_cell[cell - y] = player;
					y_global = cell - y;
				}
			}
			else{
				if (((mas[0][m - y + (cell - (m + 1))] == player) || (mas[0][m - y + (cell - (m + 1))] ==  0))&& !check_y){
					number_cell[cell - y] = player;
					y_global = cell - y;
				}
			}
			if(cell - (y + x) > m + 1){
				if (((mas[n-1][(y + x) - (cell - 2*m)] == player || mas[n-1][(y + x) - (cell - 2*m)] == 0)) && !check_y && !check_x ){
					number_cell[cell - (y + x)] = player;
					x_y_global = cell - (y + x);
				}
			}
			else{
				if (((mas[0][m - (y + x) + (cell - (m + 1))] == player) || (mas[0][m - (y + x) + (cell - (m + 1))] ==  0))&& !check_y && !check_x){
					number_cell[cell - (y + x)] = player;
					x_y_global = cell - (y + x);
				}
			}
		}
		
		if(cell <= m){
			int check = 0;
			if(cell - x > 0){
				if (((mas[0][cell - x  - 1] == player || mas[0][cell - x  - 1] == 0)) && !check_x){
					number_cell[cell - x] = player;
					x_global = cell - x;
				}
			}
			else if(!check_x){
				buf_x = true;
				number_cell[0] = player;
				check++;
			}
			if(cell - y > 0){
				if (((mas[0][cell - y  - 1] == player || mas[0][cell - y  - 1] == 0)) && !check_y){
					number_cell[cell - y] = player;
					y_global = cell - y;		
				}
			}
			else if(!check_y){
				if(check == 0 || (y < x && check == 1)){
					buf_x = false;
					buf_y = true;
					number_cell[0] = player;
					check++;
				}
			}
			if(cell - (y + x) > 0){
				if (((mas[0][cell - (y + x)  - 1] == player || mas[0][cell - (y + x)  - 1] == 0)) && !check_y && !check_x){
					number_cell[cell - (y + x)] = player;
					x_y_global = cell - (y + x);
				}
			}
			else if(!check_y && !check_x){
				if(check == 0){
					buf_x = true;
					buf_y = true;
					number_cell[0] = player;
				}
			}
		}
	}

	if(player == 2){
		if(cell <= 12){
			if(cell - x > 0){
				if (((mas[0][cell - x  - 1] == player || mas[0][cell - x  - 1] == 0))&& !check_x){
					number_cell[cell - x] = player;
					x_global = cell - x;
				}
			}
			else{
				if (((mas[n-1][x - (cell - 1) - 1] == player) || (mas[n-1][x - (cell - 1) - 1] == 0))&& !check_x){
					number_cell[m*2 - x + cell] = player;
					x_global = m*2 - x + cell;
				}
			}
			if(cell - y > 0){
				if (((mas[0][cell - y  - 1] == player || mas[0][cell - y  - 1] == 0))&& !check_y){
					number_cell[cell - y] = player;
					y_global = cell - y;
				}
			}
			else{
				if (((mas[n-1][y - (cell - 1) - 1] == player) || (mas[n-1][y - (cell - 1) - 1] == 0))&& !check_y){
					number_cell[m*2 - y + cell] = player;
					y_global = m*2 - y + cell;
				}
			}
			if(cell - (y + x) > 0){
				if (((mas[0][cell - (y + x)  - 1] == player || mas[0][cell - (y + x)  - 1] == 0))&& !check_y && !check_x){
					number_cell[cell - (y + x)] = player;
					x_y_global = cell - (y + x);
				}
			}
			else{
				if (((mas[n-1][(y + x) - (cell - 1) - 1] == player) || (mas[n-1][(y + x) - (cell - 1) - 1] == 0))&& !check_y && !check_x){
					number_cell[m*2 - (y + x) + cell] = player;
					x_y_global = m*2 - (y + x) + cell;
				}
			}
		}

		if(cell > m){
			int check = 0;
			if(cell - x > m){
				if (((mas[n-1][x - (cell - 2*m)] == player || mas[n-1][x - (cell - 2*m)] == 0))&& !check_x){
					number_cell[cell - x] = player;
					x_global = cell - x;
				}
			}
			else if(!check_x){
				buf_x = true;
				number_cell[0] = player;
				check++;
			}
			if(cell - y > m){
				if (((mas[n-1][y - (cell - 2*m)] == player || mas[n-1][y - (cell - 2*m)] == 0))&& !check_y){
					number_cell[cell - y] = player;
					y_global = cell - y;
				}
			}
			else if (!check_y){
				if(check == 0 || (y < x && check == 1)){
					buf_x = false;
					buf_y = true;
					number_cell[0] = player;
					check++;
				}
			}
			if(cell - (y + x) > m){
				if (((mas[n-1][(y + x) - (cell - 2*m)] == player || mas[n-1][(y + x) - (cell - 2*m)] == 0))&& !check_y && !check_x){
					number_cell[cell - (y + x)] = player;
					x_y_global = cell - (y + x);
				}
			}
			else if (!check_y && !check_x){
				if(check == 0)
				{
					buf_x = true;
					buf_y = true;
					number_cell[0] = player;
				}
			}
		}
	}
}

void variant_step_double(int x, int mas[][m], int number_cell[], int player, int cell)
{
	extern bool check1, check2, check3, check4;
	extern int x1_global, x2_global, x3_global, x4_global, buf1, buf2, buf3, buf4;
	int i, check;
	
	for(i = 0; i <= m*2; i++){
		number_cell[i] = 0;	
	}
	if (player == 1){
		check = 0;
		if(cell > m){
			if(cell - x > m){
				if (((mas[n-1][x - (cell - 2*m)] == player || mas[n-1][x - (cell - 2*m)] == 0)) && !check1){
					number_cell[cell - x] = player;
					x1_global = cell - x;
				}
			}
			else{
				if (((mas[0][m - x + (cell - (m + 1))] == player) || (mas[0][m - x + (cell - (m + 1))] ==  0)) && !check1){
					number_cell[cell - x] = player;
					x1_global = cell - x;
				}
			}
			if(cell - (2 * x) > m){
				if (((mas[n-1][(2 * x) - (cell - 2*m)] == player || mas[n-1][(2 * x) - (cell - 2*m)] == 0)) && !check2){
					number_cell[cell - (2 * x)] = player;
					x2_global = cell - (2 * x);
				}
			}
			else{
				if (((mas[0][m - (2 * x) + (cell - (m + 1))] == player) || (mas[0][m - (2 * x) + (cell - (m + 1))] ==  0)) && !check2){
					number_cell[cell - (2 * x)] = player;
					x2_global = cell - (2 * x);
				}
			}
			if(cell - (3 * x) > m){
				if (((mas[n-1][(3 * x) - (cell - 2*m)] == player || mas[n-1][(3 * x) - (cell - 2*m)] == 0)) && !check3){
					number_cell[cell - (3 * x)] = player;
					x3_global = cell - (3 * x);
				}
			}
			else if(cell - (3 * x) < 1 && !check3){
				check++;
				buf3 = true;
				number_cell[0] = player;
			}
			else{
				if (((mas[0][m - (3 * x) + (cell - (m + 1))] == player) || (mas[0][m - (3 * x) + (cell - (m + 1))] ==  0)) && !check3){
					number_cell[cell - (3 * x)] = player;
					x3_global = cell - (3 * x);
				}
			}
			if(cell - (4 * x) > m){
				if (((mas[n-1][(4 * x) - (cell - 2*m)] == player || mas[n-1][(4 * x) - (cell - 2*m)] == 0)) && !check4){
					number_cell[cell - (4 * x)] = player;
					x4_global = cell - (4 * x);
				}
			}
			else if(cell - (4 * x) < 1){
				if(check == 0 && !check4){
					buf4 = true;
					number_cell[0] = player;
				}
			}
			else{
				if (((mas[0][m - (4 * x) + (cell - (m + 1))] == player) || (mas[0][m - (4 * x) + (cell - (m + 1))] ==  0)) && !check4){
					number_cell[cell - (4 * x)] = player;
					x4_global = cell - (4 * x);
				}
			}
		}
		if(cell <= m){
			check = 0;
			if(cell - x > 0){
				if (((mas[0][cell - x  - 1] == player || mas[0][cell - x  - 1] == 0)) && !check1){
					number_cell[cell - x] = player;
					x1_global = cell - x;
				}
			}
			else if(!check1){
				buf1 = true;
				number_cell[0] = player;
				check++;
			}
			if(cell - (2 * x) > 0){
				if (((mas[0][cell - (2 * x)  - 1] == player || mas[0][cell - (2 * x)  - 1] == 0)) && !check2){
					number_cell[cell - (2 * x)] = player;
					x2_global = cell - (2 * x);		
				}
			}
			else if(!check2){
				if(check == 0){
					buf2 = true;
					number_cell[0] = player;
					check++;
				}
			}
			if(cell - (3 * x) > 0){
				if (((mas[0][cell - (3 * x)  - 1] == player || mas[0][cell - (3 * x)  - 1] == 0)) && !check3){
					number_cell[cell - (3 * x)] = player;
					x3_global = cell - (3 * x);		
				}
			}
			else if(!check3){
				if(check == 0){
					buf3 = true;
					number_cell[0] = player;
					check++;
				}
			}
			if(cell - (4 * x) > 0){
				if (((mas[0][cell - (4 * x)  - 1] == player || mas[0][cell - (4 * x)  - 1] == 0)) && !check4){
					number_cell[cell - (4 * x)] = player;
					x4_global = cell - (4 * x);		
				}
			}
			else if(!check4){
				if(check == 0){
					buf4 = true;
					number_cell[0] = player;
					check++;
				}
			}
		}
	}
	if(player == 2){
		int check = 0;

		if(cell <= 12){
			if(cell - x > 0){
				if (((mas[0][cell - x  - 1] == player || mas[0][cell - x  - 1] == 0))&& !check1){
					number_cell[cell - x] = player;
					x1_global = cell - x;
				}
			}
			else{
				if (((mas[n-1][x - (cell - 1) - 1] == player) || (mas[n-1][x - (cell - 1) - 1] == 0))&& !check1){
					number_cell[m*2 - x + cell] = player;
					x1_global = m*2 - x + cell;
				}
			}
			if(cell - (x * 2) > 0){
				if (((mas[0][cell - (x * 2)  - 1] == player || mas[0][cell - (x * 2)  - 1] == 0))&& !check2){
					number_cell[cell - (x * 2)] = player;
					x2_global = cell - (x * 2);
				}
			}
			else{
				if (((mas[n-1][(x * 2) - (cell - 1) - 1] == player) || (mas[n-1][(x * 2) - (cell - 1) - 1] == 0))&& !check2){
					number_cell[m*2 - (x * 2) + cell] = player;
					x2_global = m*2 - (x * 2) + cell;
				}
			}
			if(cell - (x * 3) > 0){
				if (((mas[0][cell - (x * 3)  - 1] == player || mas[0][cell - (x * 3)  - 1] == 0))&& !check3){
					number_cell[cell - (x * 3)] = player;
					x3_global = cell - (x * 3);
				}
			}
			else if((3 * x) - cell >= m && !check3){
				check++;
				buf3 = true;
				number_cell[0] = player;
			}
			else{
				if (((mas[n-1][(x * 3) - (cell - 1) - 1] == player) || (mas[n-1][(x * 3) - (cell - 1) - 1] == 0))&& !check3){
					number_cell[m*2 - (x * 3) + cell] = player;
					x3_global = m*2 - (x * 3) + cell;
				}
			}
			if(cell - (x * 4) > 0){
				if (((mas[0][cell - (x * 4)  - 1] == player || mas[0][cell - (x * 4)  - 1] == 0))&& !check4){
					number_cell[cell - (x * 4)] = player;
					x4_global = cell - (x * 4);
				}
			}
			else if((4 * x) - cell >= m && !check4 && check == 0){
				check++;
				buf4 = true;
				number_cell[0] = player;
			}
			else{
				if (((mas[n-1][(x * 4) - (cell - 1) - 1] == player) || (mas[n-1][(x * 4) - (cell - 1) - 1] == 0))&& !check4){
					number_cell[m*2 - (x * 4) + cell] = player;
					x4_global = m*2 - (x * 4) + cell;
				}
			}
		}
		if(cell > m){
			int check = 0;
			if(cell - x > m){
				if (((mas[n-1][x - (cell - 2*m)] == player || mas[n-1][x - (cell - 2*m)] == 0))&& !check1){
					number_cell[cell - x] = player;
					x1_global = cell - x;
				}
			}
			else if(!check1){
				buf1 = true;
				number_cell[0] = player;
				check++;
			}
			if(cell - (2 * x) > m){
				if (((mas[n-1][(2 * x) - (cell - 2*m)] == player || mas[n-1][(2 * x) - (cell - 2*m)] == 0))&& !check2){
					number_cell[cell - (2 * x)] = player;
					x2_global = cell - (2 * x);
				}
			}
			else if(!check2 && check == 0){
				buf2 = true;
				number_cell[0] = player;
				check++;
			}
			if(cell - (3 * x) > m){
				if (((mas[n-1][(3 * x) - (cell - 2*m)] == player || mas[n-1][(3 * x) - (cell - 2*m)] == 0))&& !check3){
					number_cell[cell - (3 * x)] = player;
					x3_global = cell - (3 * x);
				}
			}
			else if(!check3 && check == 0){
				buf3 = true;
				number_cell[0] = player;
				check++;
			}
			if(cell - (4 * x) > m){
				if (((mas[n-1][(4 * x) - (cell - 2*m)] == player || mas[n-1][(4 * x) - (cell - 2*m)] == 0))&& !check4){
					number_cell[cell - (4 * x)] = player;
					x4_global = cell - (4 * x);
				}
			}
			else if(!check4 && check == 0){
				buf4 = true;
				number_cell[0] = player;
				check++;
			}
		}
	}
}

void change_player(int &player)
{
	if(player == 2){
		player = 1;	
	} 
	else{
		player = 2;
	} 
}

int chance(int number_cell[], int player)
{
	int active_cells[m*2+1], i, k = 0, a = 0;
		
	for(i = 0; i < m*2+1; i++){
		if(number_cell[i] == player){
			active_cells[k] = i;
			k++;
		}
	}
	srand(time(0));
	if(k != 0){
		for(i = 0; i < k; i++){
			if(active_cells[i] == m){
				a = 1;
				break;
			}
		}
		if(a){
			return m;
		}
			
		else{
			return active_cells[rand() % k];
		}		
	}
	else return 30;
}

void set_cell(int number_cell[], int mas[][m], int player)
{
	int i;
	
	for(i = 0; i <= m*2; i++){
		number_cell[i] = 0;	
	} 
	for(i = 0; i < m; i++){
		if(mas[0][i] == player) number_cell[i+1] = player;
	}
	for(i = 0; i < m; i++){
		if(mas[n-1][i] == player) number_cell[m*2 - i] = player;
	}
}

int check_step(int number_cell[], int mas[][m], int player, int x, int y)
{
	int i, j, a, check1 = 0, active_cells[m*2+1], k = 0;;
	extern bool check_home;
	extern int score1, score2;
	
	set_cell(number_cell, mas, player);
	if(check_home){
			if (player == 1){
				number_cell[24] = 0;
			} 
			else{
				number_cell[12] = 0;
			} 
		}
	for(i = 0; i < m*2+1; i++){
		if(number_cell[i] == player){
			active_cells[k] = i;
			k++;
		}
	}
	for(i = 0; i < k; i++){
		variant_step(x, y, mas, number_cell, player, active_cells[i]);
		for(j = 0; j < m*2+1; j++){
			if(number_cell[j] != 0){
				check1 = 1;
				j = i = m*2+1;
			}
		}
	}
	if (check1 == 0)
	{
		system("cls");
		show_field(number_cell, mas, player);
		printf("Ходить %d гравець\n", player);
		printf("Счет: (1 игрок) %d - %d (2 игрок)\n", score1, score2);
		show_bone(x, y);
		printf("Введiть номер бара: ");
		if(player == 1){
			printf("У вас немає ходу!");
		}
		else{
			printf("У вас немає ходу!");
		}
		a = getch();
		return 0;
	}
	else return 1;
}

int check_step(int number_cell[], int mas[][m], int player, int x)
{
	int i, j, check1 = 0, active_cells[m*2+1], k = 0;;
	extern bool check_home;
	extern int count_step, score1, score2;
	
	set_cell(number_cell, mas, player);
	if(check_home && ( x != 3 || count_step > 2)){
			if (player == 1){
				number_cell[24] = 0;
			} 
			else{
				number_cell[12] = 0;
			} 
	}
	for(i = 0; i < m*2+1; i++){
		if(number_cell[i] == player){
			active_cells[k] = i;
			k++;
		}
	}
	for(i = 0; i < k; i++){
		variant_step_double(x, mas, number_cell, player, active_cells[i]);
		for(j = 0; j < m*2+1; j++){
			if(number_cell[j] != 0){
				check1 = 1;
				j = i = m*2+1;
			}
		}
	}
	if (check1 == 0){
		system("cls");
		show_field(number_cell, mas, player);
		printf("Ходить %d гравець\n", player);
		printf("Рахунок: (1 гравець) %d - %d (2 гравець)\n", score1, score2);
		show_bone_double(x);
		printf("Введiть номер бара: ");
		if(player == 1){
			printf("У вас немає ходу!");
		}
		else{
			printf("У вас немає ходу!");
		}
		int a = getch();
		return 0;
	}
	else return 1;
}

