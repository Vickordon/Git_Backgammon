#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
#include "gammon.h"


int menu()
{
	extern int Esc, Enter, stop, color1, color2, mode;
	
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
