#include <iostream>
#include <windows.h>
#include <conio.h> 
#include <stdlib.h> 
#include <time.h>
int up();
int down();
int right();
int left();
int add_fruit();
using namespace std;

int map[7][7] = {0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,
                 0,0,0,1,0,0,0,
                 0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0}


int main(){
	int body[49][2];
	int fruit[2];
	int input;
	add_fruit()
	
	while(true){
		if(kbhit()){
			if(getchar == 'w'){
				up();
			}
			if(getchar == 'a'){
				left();
			}  
			if(getchar == 's'){
				down();
			} 
			if(getchar == 'd'){
				right();
			} 
		}
		if(body[0][0] == fruit[0] && body[0][1] == fruit[1]){
			add_fruit();
		}
	}
	return 0;
}

int add_fruit(){
	srand(time(NULL));
	again:
	int num = rand() % 49;
	int x = num % 7;
	int y = num / 7;
	for(int i = 0; i < 49; i++){
		if(x == body[i][0] && y == body[i][1]){
			goto again;
		}
	} 
	map[x][y] = "2";
}

int up(){
	
}

int down(){
	
}

int right(){
	
}

int left(){
	
}


void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}

void clrscr(void)
{
  gotoxy(0,0);
  for(int i=0;i<80*300;i++)printf(" ");
  gotoxy(0,0);
}
