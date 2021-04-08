#define n 19
#define m 12
#define kol 15

void gotoxy(float x, float y); // ������������ ������� �������
void SetColor(int text, int background); // ������������ �������
void cursorOff(); // ��������� ������
void cursorOn(); // �������� ������
void rules(); // �������
void bones(int &x, int &y); // �������� �������
void set_begin(int mas[][m]); // ������������ �� ���������� ������� ������� ��� ���
int  menu(); // ���� ���
void game(); // ���� ���
void take_step_double_one_bone(int x, int mas[][m], int number_cell[], int player); // ��������� ���� ���� ������ ��� ��������� ��������� �������
void take_step_double_two_bone(int x, int mas[][m], int number_cell[], int player, int cell); // ��������� ���� ����� ������� ��� ��������� ��������� �������
void take_step_one_bone(int x, int y, int mas[][m], int number_cell[], int player); // ��������� ���� ���� ������ ��� ����� ��������� �������
void take_step_two_bone(int x, int y, int mas[][m], int number_cell[], int player, int cell); // ��������� ���� ����� ������� ��� ����� ��������� �������
void variant_step_double(int x, int mas[][m], int number_cell[], int player, int cell); // ������ ���� ��� ��������� �������� �������
void variant_step(int x, int y, int mas[][m], int number_cell[], int player, int cell); // ������ ���� ��� ����� ��������� �������
void change_position(int cell, int mas[][m], int player, int &step); // ���� ������� �����
void change_player(int &player);// ���� ������ ��� ��������� ����
void show_bone_double(int x); // ³���������� ������� ��� ��������� ���������
void show_bone(int x, int y); // ³���������� ������� ��� ����� ���������
int chance(int number_cell[], int player);  // ���� ���� ��� ��������� ����
void set_cell(int number_cell[], int mas[][m], int player); // ������������ ���� �� ��������� ���
int check_step(int number_cell[], int mas[][m], int player, int x, int y); // �������� ������� ��� ��������� ���� ��� ����� ��������� �������
int check_step(int number_cell[], int mas[][m], int player, int x); // �������� ������� ��� ��������� ���� ��� ��������� ��������� �������
void draw_cell_begin(int number_cell[], int mas[][m], int player); // ³���������� ������� ������� ��� ��������� ���� ��� ������ ������
void draw_cell_end(int number_cell[], int mas[][m], int player);// ³���������� ������� ������� ��� ��������� ���� ��� ������ ������
void show_field(int number_cell[], int mas[][m], int player); // ³���������� ��������� ����
void show_field(int number_cell[], int mas[][m], int player, int without_set_cell); // ³���������� ��������� ���� ��� ����
void show_desk(int mas[][m]); // ³���������� ������� �����
