#define n 19
#define m 12
#define kol 15

int score1, score2, mode, Esc=27, Enter=13, stop=4;
int color1 = 2, color2 = 12,  pause = 1000;
int x1_global, x2_global, x3_global, x4_global;
int x_global, y_global, x_y_global, number, count_step;
bool check1, check2, check3, check4, buf1, buf2, buf3, buf4;
bool check_x, check_y, buf_x, buf_y, check_home;
char str[2], Title[]= "Гра Нарди"; //Назва вікна

void gotoxy(float x, float y); // Встановлення позиції курсору
void SetColor(int text, int background); // Встановлення кольору
void cursorOff(); // Приховати курсор
void cursorOn(); // Показати курсор
void rules(); // Правила
void bones(int &x, int &y); // Киданння кісточок
void set_begin(int mas[][m]); // Встановлення та заповнення початкої матриці для гри
int  menu(); // Меню гри
void game(); // Цикл гри
void take_step_double_one_bone(int x, int mas[][m], int number_cell[], int player); // Здійснення ходу однією фішкою при однакових значеннях кісточок
void take_step_double_two_bone(int x, int mas[][m], int number_cell[], int player, int cell); // Здійснення ходу двома фішками при однакових значеннях кісточок
void take_step_one_bone(int x, int y, int mas[][m], int number_cell[], int player); // Здійснення ходу однією фішкою при різних хначеннях кісточок
void take_step_two_bone(int x, int y, int mas[][m], int number_cell[], int player, int cell); // Здійснення ходу двома фішками при різних значеннях кісточок
void variant_step_double(int x, int mas[][m], int number_cell[], int player, int cell); // Варіант ходу при однакових значення кісточок
void variant_step(int x, int y, int mas[][m], int number_cell[], int player, int cell); // Варіант ходу при різних значеннях кісточок
void change_position(int cell, int mas[][m], int player, int &step); // Зміна позиції фішки
void change_player(int &player);// Зміна гравця для здійснення ходу
void show_bone_double(int x); // Відображення кісточок при однакових значеннях
void show_bone(int x, int y); // Відображення кісточок при різних значеннях
int chance(int number_cell[], int player);  // Вибір бару для здійснення ходу
void set_cell(int number_cell[], int mas[][m], int player); // Встановлення барів на гральному полі
int check_step(int number_cell[], int mas[][m], int player, int x, int y); // Перевірка варіантів для здійснення ходу при різних значеннях кісточок
int check_step(int number_cell[], int mas[][m], int player, int x); // Перевірка варіантів для здійснення ходу при однакових значеннях кісточок
void draw_cell_begin(int number_cell[], int mas[][m], int player); // Відображення підказок варіантів для здійснення ходу для одного гравця
void draw_cell_end(int number_cell[], int mas[][m], int player);// Відображення підказок варіантів для здійснення ходу для іншого гравця
void show_field(int number_cell[], int mas[][m], int player); // Відображення грального поля
void show_field(int number_cell[], int mas[][m], int player, int without_set_cell); // Відображення грального поля без барів
void show_desk(int mas[][m]); // Відображення гральної доски
