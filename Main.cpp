#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
#include "gammon.h"


					//*********��������� ��� "�����"********
					//��� ������������ ���������� �������� �������������� (�������������)
					// ������������ �� ������� ������� main().




int main()
{
	int game = 0;
	extern int stop;
	char Title[]= "��� �����"; //����� ����
	//	SetConsoleCP(1251);// ������������ �������� 
	//	SetConsoleOutputCP(1251);
	SetConsoleTitle(Title);
	system ("MODE CON: COLS=65 LINES=45");
	while(game != stop){
		system("cls");
		game = menu();
	}
}

