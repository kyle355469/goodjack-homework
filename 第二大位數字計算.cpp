#include <iostream> 
#include <math.h>
#include <stdlib.h>
using namespace std; 

int main() { 
	int num;
	int check;
	
	int total;
	cout << "請輸入要輸入幾個數字 : ";
	cin >> total;
	cout << "請輸入" << total << "個數字 : " ; 
	cin >> num;
	int array[total];
	check = num;
	int last;   // 餘數 
	for(int i = 1; i <= total; i++){
		for(int l = 0; l < i; l++){
			last = check % 10;
			array[l] = last;
			check = check / 10;
		}
		check = num;
	}
	int big;
	big = array[0];
	for(int i = 0; i < total; i ++){
		if(array[i] > big){
			big = array[i];
		}
	}
	for(int i = 0; i < total; i ++){
		if(big == array[i]){
			array[i] = 0;
		}
	}	
	big = 0;
	for(int i = 0; i < total; i ++){
		if(array[i] > big){
			big = array[i];
		}
	}
	cout << endl << big;
 return 0; 
}
