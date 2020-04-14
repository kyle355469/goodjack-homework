#include <iostream>
#include <windows.h>
#include <ctime>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#define UP 72
#define LEFT 75
#define DOWN 80
#define RIGHT 77
#define DIRECTION 224
using namespace std;
//int gotoxy(int,int);
void newnum();               // 生成新數字 
void up();	                 // 上 
void down();                 // 下 
void right();                // 右 
void left();                 // 左 
void winfin();
void losefin();
int block[4][4] = {0};
int checkblock[4][4] = {0};
int point = 0;
int check = 3;
void copy();                 // 複製到 checkbolock  
void Align_display();        // 顯示+對齊 
int win();                 // 勝利判斷 
int judgment = 3;
int main(){
	for (int x = 0; x < 4; x++) {
  		for (int y = 0; y < 4; y++) {
            		block[x][y] = 0;
            		checkblock[x][y] = 0;
        }
    }
	checkblock[0][0] = 1;
	newnum();
	copy();
	Align_display();
	int key;
	while(key = getch()){	
		if(key == DIRECTION){
			key = getch();
            		copy();
			switch(key){
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
			Align_display();
			
			check = win();
			if(check == 0){
				winfin();
				break;
			}else if(check == 1){
				losefin();
				break;
			}
			cout << "\n 分數：" << point; 
		}	
	}
	
	return 0;
}

void newnum() {
    int check = 1;
    if (check == 1){
        srand((unsigned)time(NULL));
        while(1){
            int all=rand()%16;
            int x=all/4;
            int y=all%4;
            if (block[x][y] != 0) {
                continue;
            }else{
                block[x][y]=2;
            }
	break;
        }
    }
}

void Align_display(){
	system("cls");
	for (int x = 0; x < 4; x++) {
        for (int y = 0; y < 4; y++) {
           	cout << setw(5) << block[x][y];
        }
        cout << "\n\n";
    }
}
void copy(){
	for (int x = 0; x < 4; x++) {
        for (int y = 0; y < 4; y++) {
            checkblock[x][y] = block[x][y];
            //cout << block[x][y];
        }
    }	
}
void up(){
	int add = 0;
	copy();
	for(int time = 0; time < 3; time++){
		for(int x = 0; x < 3; x++){
			for(int y = 0; y < 4; y++){
				if(block[x][y] == 0){
					block[x][y] = block[x+1][y];
					block[x+1][y] = 0;
				}
			}
		}
	}
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 4; y++){
			if(block[x+1][y] == block[x][y]){
				point += block[x][y];
				block[x][y] += block[x+1][y];
				block[x+1][y] = 0; 
			}
		}
	}
	for(int time = 0; time < 3; time++){
		for(int x = 0; x < 3; x++){
			for(int y = 0; y < 4; y++){
				if(block[x][y] == 0){
					block[x][y] = block[x+1][y];
					block[x+1][y] = 0;
				}
			}
		}
	}
	
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++){
			if(checkblock[x][y] != block[x][y]){
				add += 1;
	     		break;
			}	
		}
	}
	
	if(add != 0){
		newnum();
	}
}
void down(){
	int add = 0;
	copy();
	for(int time = 0; time < 3; time++){
		for(int x = 3; x > 0; x--){
			for(int y = 0; y < 4; y++){
				if(block[x][y] == 0){
					block[x][y] = block[x-1][y];
					block[x-1][y] = 0;
				}
			}
		}
	}
	for(int x = 3; x > 0; x--){
		for(int y = 0; y < 4; y++){
			if(block[x][y] == block[x-1][y]){
				point += block[x][y];
				block[x][y] += block[x-1][y];
				block[x-1][y] = 0; 
			}
		}
	}
	for(int time = 0; time < 3; time++){
		for(int x = 3; x > 0; x--){
			for(int y = 0; y < 4; y++){
				if(block[x][y] == 0){
					block[x][y] = block[x-1][y];
					block[x-1][y] = 0;
				}
			}
		}
	}
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++){
			if(checkblock[x][y] != block[x][y]){
				add += 1;
	     		break;
			}	
		}
	}
	
	if(add != 0){
		newnum();
	}
}
void right(){
	int add = 0;
	copy();
	for(int time = 0; time < 3; time++){
		for(int x = 0; x < 4; x++){
			for(int y = 3; y > 0; y--){
				if(block[x][y] == 0){
					block[x][y] = block[x][y-1];
					block[x][y-1] = 0;
				}
			}
		}
	}
	for(int x = 0; x < 4; x++){
		for(int y = 3; y > 0; y--){
			if(block[x][y] == block[x][y-1]){
				point += block[x][y];
				block[x][y] += block[x][y-1];
				block[x][y-1] = 0; 
			}
		}
	}
	for(int time = 0; time < 3; time++){
		for(int x = 0; x < 4; x++){
			for(int y = 3; y > 0; y--){
				if(block[x][y] == 0){
					block[x][y] = block[x][y-1];
					block[x][y-1] = 0;
				}
			}
		}
	}
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++){
			if(checkblock[x][y] != block[x][y]){
				add += 1;
	     		break;
			}	
		}
	}
	
	if(add != 0){
		newnum();
	}
}
void left(){
	int add = 0;
	copy();
	for(int time = 0; time < 3; time++){
		for(int x = 0; x < 4; x++){
			for(int y = 0; y < 3; y++){
				if(block[x][y] == 0){
					block[x][y] = block[x][y+1];
					block[x][y+1] = 0;
				}
			}
		}
	}
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 3; y++){
			if(block[x][y] == block[x][y+1]){ 
				point += block[x][y];
				block[x][y] += block[x][y+1];
				block[x][y+1] = 0;
			}
		}
	}
	for(int time = 0; time < 3; time++){
		for(int x = 0; x < 4; x++){
			for(int y = 0; y < 3; y++){
				if(block[x][y] == 0){
					block[x][y] = block[x][y+1];
					block[x][y+1] = 0;
				}
			}
		}
	}
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++){
			if(checkblock[x][y] != block[x][y]){
				add += 1;
	     		break;
			}	
		}
	}
	if(add != 0){
		newnum();
	}
}
int win(){
	int full = 1;          // 0未滿 1滿 
	for(int  x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++){
			if(block[x][y] == 64){
				return 0;
			}
		} 
	}
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++){
			if(block[x][y] == 0){
				full = 0;
			}
		} 
	}
	if(full == 1){
		return 1;
	}
	return 3;
}

void winfin(){
	cout << "\n You Win\n Your grade is : " << point; 
}

void losefin(){
	cout << "\n Your lose, keep working\n Your grade is : " << point;
}

/*void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}  */
