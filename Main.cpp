#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
#include "gammon.h"


					//*********КОНСОЛЬНА ГРА "НАРДИ"********
					//При некоректному відображенні Кирилиці розкоментувати (закоментувати)
					// налаштування на початку функції main().




int main()
{
	int game = 0;
	extern int stop;
	char Title[]= "Гра Нарди"; //Назва вікна
	//	SetConsoleCP(1251);// Налаштування кирилиці 
	//	SetConsoleOutputCP(1251);
	SetConsoleTitle(Title);
	system ("MODE CON: COLS=65 LINES=45");
	while(game != stop){
		system("cls");
		game = menu();
	}
}

