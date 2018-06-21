#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#define UP 72
#define LEFT 75
#define DOWN 80
#define RIGHT 77
#define DIRECTION 224
using namespace std;
void gotoxy(int,int);
int newNum();
int up();
int down();
int right();
int left()
int block[4][4] = {0};

int main(){
	int key;
	while(key = getch()){	
		if(key == DIRECTION){
		
			switch(key = getch()){
				case UP:
					
				case DOWN:
					
				case RIGHT:
					
				case LEFT:
					
			}
		}
			
	}
	
	return 0;
}

int newNum(){
	srand((unsigned)time(NULL));
	int x,y;
	int p = 1;
	x = rand() % 4;
	y = rand() % 4;
	while(p = 1){
		if(block[y][x] = 0){
			block[y][x] = 2;
		}else{
			x = rand() % 4;
			y = rand() % 4;
		}
		
	}
	
}
int up(){
	for(int i = 0; i < 4; i++){
		for(int l = 0; l < 4; l++){
			if(block[l][i] != 0 && (l - 1) > 0){
				
				if(block[l-1][i] == 0)){
					block[l-1][i] = block[l][i];
					block[l][i] = 0;
				}
			}
		}
	}

}

void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}
