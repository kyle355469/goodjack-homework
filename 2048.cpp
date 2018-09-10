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
//int gotoxy(int,int);
void newNum();      // 生成新數字 
void up();			// 上 
void down();        // 下 
void right();       // 右 
void left();        // 左 
int block[4][4] = {0};
int checkblock[4][4] = {0};
void copy();        // 複製到 checkbolock  
void newnum();
void sign();
int win();
int main(){
	int key;
	checkblock[0][0] = 1;
	newnum();
	copy();
	while(key = getch()){	
		if(key == DIRECTION){
		
			switch(key = getch()){
				case UP:
					up();
					break;
				case DOWN:
					down();
					break;
				case RIGHT:
					right();
					break;
				case LEFT:
					left();
					break;
			}
		}
		newnum();
		
			
	}
	
	return 0;
}

void newnum() {
    bool check=0;
    for (int x=0;x<4;x++) {
        for (int y=0;y<4;y++) {
            if (checkblock[x][y]!=block[x][y]) {
                check=1;
            }
        }
    }
    if (check){
        srand((unsigned)time(NULL));
        while(1){
            int all=rand()%16;
            int x=all/4;
            int y=all%4;
            if (block[x][y]>0) {
                continue;
            }else{
                block[x][y]=2;
                break;
            }
        }
    }
}
void copy(){
	for(int i=0;i<4;i++){
		for(int l=0;l<4;i++){
			checkblock[i][l] = block[i][l];
		}
	}
	
}
void sign(){
	for (int x = 0; x < 4; x++) {
        for (int y = 0; y < 4; y++) {
            cout << setw(5) << list[x][y];
        }
        cout << endl;
    }
}
void up(){
	

}
void down(){
	

}
void right(){
	

}
void left(){
	

}

/*void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}  */
