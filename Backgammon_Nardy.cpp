#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
#include "backgammon.h"


					//*********КОНСОЛЬНА ГРА "НАРДИ"********
					//При некоректному відображенні Кирилиці розкоментувати (закоментувати)
					// налаштування на початку функції main().

int main()
{
	int game = 0;

	//	SetConsoleCP(1251);// Налаштування кирилиці 
	//	SetConsoleOutputCP(1251);
	SetConsoleTitle(Title);
	system ("MODE CON: COLS=65 LINES=45");
	while(game != stop){
		system("cls");
		game = menu();
	}
}

int menu()
{ 
	int l=1;
	char c=0; 
	cursorOff();
	while (c!=Esc ) 
	{ 
		system("cls");
		switch(l)
		{
			case 1:  { 
				SetColor(15, color1);
				printf("      ->Гра 1 на 1"); 
				SetColor(15, color2);
				printf("      Гра з Комп'ютером"); 
				printf("      Правила");
				printf("      Вихiд");
				SetColor(15, 5);		
				gotoxy(12,5);
				printf("#########    #########        ###       \n");
				gotoxy(12,6);
				printf("##           ##     ##       #####      \n");
				gotoxy(12,7);
				printf("##           ##     ##      ##   ##     \n");
				gotoxy(12,8);
				printf("##           #########     #########    \n");
				gotoxy(12,9);
				printf("##           ##           ##       ##   \n");
				gotoxy(12,10);
				printf("##           ##          ##         ##  \n");
				gotoxy(12,11);
				printf("##           ##         ##           ## \n");
				gotoxy(12,12);
				printf("##           ##        ##             ##\n");
				gotoxy(4,20);
				printf("##    ##       ###       #######   #######     ##     ## \n");
				gotoxy(4,21);
				printf("##    ##      #####      ##   ##   ##   ##     ##    ### \n");  
				gotoxy(4,22);
				printf("##    ##     ##   ##     ##   ##   ##   ##     ##   #### \n");
				gotoxy(4,23);
				printf("########    #########    #######   ##   ##     ##  ## ## \n");
				gotoxy(4,24);
				printf("##    ##   ##       ##   ##        ##   ##     ## ##  ## \n");
				gotoxy(4,25);
				printf("##    ##  ##         ##  ##     #############  ####   ## \n");
				gotoxy(4,26);
				printf("##    ## ##           ## ##     ##         ##  ###    ## \n");
				gotoxy(5,40);
				SetColor(15, color1);
				printf("Для керуванням пунктами меню нитиснiть  '<-' або '->'\n");
				gotoxy(12,41);
				SetColor(15, color2);
				printf("Для вибору гри нитиснiть'Двiчi Enter'");
				SetColor(15, 0);
			 	break; 
			}

			case 2: { 
				SetColor(15, color2);
				printf("      Гра 1 на 1"); 
				SetColor(15, color1);
				printf("      ->Гра з Комп'ютером");
				SetColor(15, color2); 
				printf("      Правила");
				printf("      Вихiд");
				SetColor(15, 5);		
				gotoxy(12,5);
				printf("#########    #########        ###       \n");
				gotoxy(12,6);
				printf("##           ##     ##       #####      \n");
				gotoxy(12,7);
				printf("##           ##     ##      ##   ##     \n");
				gotoxy(12,8);
				printf("##           #########     #########    \n");
				gotoxy(12,9);
				printf("##           ##           ##       ##   \n");
				gotoxy(12,10);
				printf("##           ##          ##         ##  \n");
				gotoxy(12,11);
				printf("##           ##         ##           ## \n");
				gotoxy(12,12);
				printf("##           ##        ##             ##\n");
				gotoxy(4,20);
				printf("##    ##       ###       #######   #######     ##     ## \n");
				gotoxy(4,21);
				printf("##    ##      #####      ##   ##   ##   ##     ##    ### \n");  
				gotoxy(4,22);
				printf("##    ##     ##   ##     ##   ##   ##   ##     ##   #### \n");
				gotoxy(4,23);
				printf("########    #########    #######   ##   ##     ##  ## ## \n");
				gotoxy(4,24);
				printf("##    ##   ##       ##   ##        ##   ##     ## ##  ## \n");
				gotoxy(4,25);
				printf("##    ##  ##         ##  ##     #############  ####   ## \n");
				gotoxy(4,26);
				printf("##    ## ##           ## ##     ##         ##  ###    ## \n");
				gotoxy(5,40);
				SetColor(15, color1);
				printf("Для керуванням пунктами меню нитиснiть  '<-' або '->'\n");
				gotoxy(12,41);
				SetColor(15, color2);
				printf("Для вибору гри нитиснiть'Двiчi Enter'");
				SetColor(15, 0);
			 	break; 
			}
			case 3:{ 
				SetColor(15, color2);
				printf("      Гра 1 на 1"); 
				printf("      Гра з Комп'ютером");
				SetColor(15, color1); 
				printf("      ->Правила");
				SetColor(15, color2);
				printf("      Вихiд");
				SetColor(15, 5);		
				gotoxy(12,5);
				printf("#########    #########        ###       \n");
				gotoxy(12,6);
				printf("##           ##     ##       #####      \n");
				gotoxy(12,7);
				printf("##           ##     ##      ##   ##     \n");
				gotoxy(12,8);
				printf("##           #########     #########    \n");
				gotoxy(12,9);
				printf("##           ##           ##       ##   \n");
				gotoxy(12,10);
				printf("##           ##          ##         ##  \n");
				gotoxy(12,11);
				printf("##           ##         ##           ## \n");
				gotoxy(12,12);
				printf("##           ##        ##             ##\n");
				gotoxy(4,20);
				printf("##    ##       ###       #######   #######     ##     ## \n");
				gotoxy(4,21);
				printf("##    ##      #####      ##   ##   ##   ##     ##    ### \n");  
				gotoxy(4,22);
				printf("##    ##     ##   ##     ##   ##   ##   ##     ##   #### \n");
				gotoxy(4,23);
				printf("########    #########    #######   ##   ##     ##  ## ## \n");
				gotoxy(4,24);
				printf("##    ##   ##       ##   ##        ##   ##     ## ##  ## \n");
				gotoxy(4,25);
				printf("##    ##  ##         ##  ##     #############  ####   ## \n");
				gotoxy(4,26);
				printf("##    ## ##           ## ##     ##         ##  ###    ## \n");
				gotoxy(5,40);
				SetColor(15, color1);
				printf("Для керуванням пунктами меню нитиснiть  '<-' або '->'\n");
				gotoxy(12,41);
				SetColor(15, color2);
				printf("Для вибору гри нитиснiть'Двiчi Enter'");
				SetColor(15, 0);
				break; 
			}
			case 4:{ 
				SetColor(15, color2);
				printf("      Гра 1 на 1"); 
				printf("      Гра з Комп'ютером"); 
				printf("      Правила");
				SetColor(15, color1);
				printf("      ->Вихiд");
				SetColor(15, 5);		
				gotoxy(12,5);
				printf("#########    #########        ###       \n");
				gotoxy(12,6);
				printf("##           ##     ##       #####      \n");
				gotoxy(12,7);
				printf("##           ##     ##      ##   ##     \n");
				gotoxy(12,8);
				printf("##           #########     #########    \n");
				gotoxy(12,9);
				printf("##           ##           ##       ##   \n");
				gotoxy(12,10);
				printf("##           ##          ##         ##  \n");
				gotoxy(12,11);
				printf("##           ##         ##           ## \n");
				gotoxy(12,12);
				printf("##           ##        ##             ##\n");
				gotoxy(4,20);
				printf("##    ##       ###       #######   #######     ##     ## \n");
				gotoxy(4,21);
				printf("##    ##      #####      ##   ##   ##   ##     ##    ### \n");  
				gotoxy(4,22);
				printf("##    ##     ##   ##     ##   ##   ##   ##     ##   #### \n");
				gotoxy(4,23);
				printf("########    #########    #######   ##   ##     ##  ## ## \n");
				gotoxy(4,24);
				printf("##    ##   ##       ##   ##        ##   ##     ## ##  ## \n");
				gotoxy(4,25);
				printf("##    ##  ##         ##  ##     #############  ####   ## \n");
				gotoxy(4,26);
				printf("##    ## ##           ## ##     ##         ##  ###    ## \n");
				gotoxy(5,40);
				SetColor(15, color1);
				printf("Для керуванням пунктами меню нитиснiть  '<-' або '->'\n");
				gotoxy(12,41);
				SetColor(15, color2);
				printf("Для вибору гри нитиснiть'Двiчi Enter'");
				SetColor(15, 0);
				break; 
			}
		}
		printf(" ");
		c = getch();
		if (c == Esc){
		return stop;	
		} 
		if (c == Enter){
				switch(l)
			{ 
				case 1 : mode = 1; cursorOn(); game(); break; 
				case 2 : mode = 2; cursorOn(); game();break; 
				case 3 : rules();  break;  
				case 4 : return stop; break;  
			}
		}
		cursorOff();
		switch(getch()) 
		{
			case 77: if(l<4) l++; break; 
			case 75: if(l>1) l--; break;
		}
	}
}

void rules()
{
	system("cls");
	SetColor(15, color1);
	printf("\n\n               Правила гри в довгi нарди                  \n\n");
	SetColor(15, 0);
		printf("    1. На початку гри всi фiшки знаходятся на головi.     \n\n");
		printf("    2. За один хiд з голови можна брати тiльки одну     \n");
		printf(" фiшку.    \n");
		printf("    Виключення у випадку, коли на початку гри   \n");
		printf(" випадають кiсточки 3:3, в цьому випадку з голови можна зняти  \n");
		printf(" другий раз.    \n\n");
		printf("    3. Цiль гри заключається в том, що гравець повинен   \n");
		printf(" пройти всiма фiшками повне коло (проти часової стрiлки),  \n");
		printf(" зайти ними в 'дiм', i зробити це ранiше нiж супротивник \n");
		printf("    4. Пiсля кидання кiсточок гравець пересуває будь-яку свою \n");
		printf(" фiшку на число клiток, рiвне випавшому числу одного з \n");
		printf(" кубикiв, а потiм будь-яку iншу фiшку на число, рiвне   \n");
		printf(" випавшому числу другого кубика, або можно пересунути  \n");
		printf(" одну фiшку на число рiвне сумi випавших кiсточок.\n");
		printf("    Якщо випали кубики з однаковими числами, то гравець  \n");
		printf(" ходить 4 раза будь-якими фiшками на це число. Причому     \n");
		printf(" може, як одною походити одразу на всi 4 ходи, так i     \n");
		printf(" рiзими 4 рази по одному ходу.\n\n");
		printf("    5. Неможна ставити свої фiшки на фiшки супротивника, \n");
		printf(" але можна ставити на свої.\n\n");
		printf("    6. Пропускати хiд неможна, тiльки якщо у вас немає можливостi \n");
		printf(" зробити хiд, то його пропускають.\n\n");
		SetColor(15, 60);
		printf("\n\n   Натиснiть будь яку клавiшу, для повернення в меню       \n\n");
	SetColor(15, 0);
}

void game()
{
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

void bones(int &x, int &y)
{
	srand(time(0));
	x = rand() % 6 + 1;
	y = rand() % 6 + 1;
	printf("\n");
}

void show_bone_double(int x)
{
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

void take_step_double_one_bone(int x, int mas[][m], int number_cell[], int player)
{
	int cell, i, k, flag=0;
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
	buf1 = buf2 = buf3 = buf4 = false;

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
	buf_x = buf_y = false;

	int cell_step, k, i, flag=0;

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

void draw_cell_begin(int number_cell[], int mas[][m], int player)
{
	int j;
	
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

void gotoxy(float x, float y)
{
	HANDLE StdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { x, y };
	SetConsoleCursorPosition(StdOut, coord);
}

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void cursorOff()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(handle,&structCursorInfo);
	structCursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo( handle, &structCursorInfo );
}

void cursorOn()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(handle,&structCursorInfo);
	structCursorInfo.bVisible = TRUE;
	SetConsoleCursorInfo( handle, &structCursorInfo );
}

