# Git_Backgammon
1. System requirements

Operating system: DOS or Windows.

Hardware requirements: user (programmer) requires
- processor: Pentium Processor;
- RAM: 640 Kb (min);
- Hard Disc: 1 Gb (min).


2. About game “Backgammon” (typical rules)
Backgammon is played on a board which consists of 24 cells arranged as shown in the picture below:
  
At the start of the game, all the chips are on the head. You can take only one chip from the head in the one step. Exceptions: in case the bones fall 3: 3 at the start of the game, than you can remove the chip from the head a second time. 
The goal of the game is that the player must go full circle with all chips (counterclockwise) to lead them in the 'home', go out of the board and do it before the opponent. 
After throwing the bones, the player moves any of his chips to the number of cells equal to the number of one of the bones and then move any other chip to the number equal to the number of the second bone, or you can move one chip to the number equal to the sum of the bones. 
If bones with the same numbers are thrown, the player goes 4 times with any chips on number of that bone's number. And you can go one chip for all 4 moves, as well as go 4 times with different chips.
You can't put your chips on your opponent's chips, but you can put on your own.  You can't skip a move, only if you can't make a move, you miss it.



3. User guide

a. Find and run file Backgammon.exe in the folder Backgammon.
b. On the main screen you can see title of the game and menu at the top of the screen.
c. To choose menu items you should press key Left or Right.
d. Before starting the game please choose item rules, and read it. After that choose game against a person or against a computer.
e. Game screen shows below:
- game board with chips on the head;
- help numbers near the cells for the make move;
- information about who should make the move;
- information about score of the game;
- information about numbers of the bones;
- area where gamer should enter the number of the cell where take the chip and where put the chip.
f. Input the number of the cell where take the chip and where put the chip. If you press incorrect key, the program asks to repeat this step.
g. After opponent’s move return to step f (you can move again).
h. If you want to leave the game you can press Esc twice after making a move.
i. Game finishes automatically when either Player 1 or Player 2 has no chips on the board. 







4. Programmer instruction

The project was written on C++.
Advantages of C++: 
Portability: C++ is one of the most used and portable to different platforms, almost any type of computer and operating system. 
Brevity: code written in C++ is very short in comparison with other languages.
Modular programming: applications written on C++ can be made up of several source code files which are compiled separately and then linked together. This characteristic allows to link C++ code with the one written in other languages (for example, Assembler).
Speed: The resulting code from a C++ compilation is very efficient due to the reduced size of the language itself.

Project is a single cpp-unit which contains all necessary algorithms and functions.

Find and open the file Backgammon.cpp and backgammon.h in folder Kalah. For edition, debugging and compiling program code you may use C++ compilers such as MS Visual Studio, Visual C++, C++ Builder, Borland C++, Dev C++ and similar.

Main global variables:
int score1, score2, mode, Esc=27, Enter=13, stop=4 – variables for score of opponents, mode of the game, key Esc, Enter and number for stop game.
int color1 = 2, color2 = 12,  pause = 1000 – color number and time of the pause.
int number, count_step – count of move and count of made move.
Next variables for variant move and variant change position chips:
int x1_global, x2_global, x3_global, x4_global;
int x_global, y_global, x_y_global;
bool check1, check2, check3, check4, buf1, buf2, buf3, buf4;
bool check_x, check_y, buf_x, buf_y, check_home;


Main functions:
void gotoxy() – set the cursor position;
void SetColor() – set the color;
void cursorOff() – hide the cursor;
void cursorOn() – show the cursor;
void rules() – rules;
void bones() – throw the bones;
void set_begin() – installing and filling the initial game matrix;
int  menu() – menu of the game;
void game() – cycle of the game;
void take_step_double_one_bone() – move one chip at the same values of the bones;
void take_step_double_two_bone() – move different chip at the same values of the bones;
void take_step_one_bone() – move one chip at the different values of the bones;
void take_step_two_bone() –  move different chip at the different values of the bones;
void variant_step_double() – variant of move at the same values of the bones;
void variant_step() – variant of move at the different values of the bones;
void change_position() – change position of chip;
void change_player() –  change player for make the move;
void show_bone_double() – show bones at the same values;
void show_bone() – show bones at the different values; 
int chance() – choose the cell for the make move;
void set_cell() – set the cell on the board;
int check_step() – check variant for the make move at the different values of the bones;
int check_step() – check variant for the make move at the same values of the bones;
void draw_cell_begin() – show help numbers near the cells for the make move one player;
void draw_cell_end() – show help numbers near the cells for the make move other player;
void show_field() – show field of game;
void show_field() – show field of game without cells;
void show_desk() – show board of game.                             


5. About author

This project was done by Viktor Kordon – Vinnitsya IT-Academy student (group B-20, April 2021).

