#include <iostream> 
#include <math.h>
#include <stdlib.h>
using namespace std; 

int main() { 
	int factorial;     // factorial 階乘
	cin >> factorial;
	int digits;		// 正在乘的數字 
	int total[70];    //總數 
	for(int y = 0; y <= 70; y++){
		total[y] = 0;
	}
	total[0] = 1;
	int check;        //檢查最高位數 
	for(int i = 1; i <= factorial; i++) {
		digits = i;
		
		
		
		for(int y = 0; y < 70; y++){
			total[y] = total[y] * digits;
		}
		
		for(int y = 0; y < 70; y++){
			if(total[y] > 10){
				total[y+1] = (total[y] / 10);
				total[y] = (total[y] % 10);
			}	
		}
		
	}
	
	for(int y = 70; y >=0; y++){
		if(total[y] == 0 && total[y-1] != 0){
			check = y;
			break;
		}	
	}
	//cout << sizeof(total) << endl;
	for(int y = check; y >= 0; y--){
		cout << total[y];
	}
 return 0; 
}
