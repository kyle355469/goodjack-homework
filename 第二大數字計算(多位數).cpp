#include <iostream> 
#include <math.h>
#include <stdlib.h>
using namespace std; 

int main() { 
	int total;
	cout << "請輸入要幾個數字 : ";
	cin >> total;
	cout << "請輸入" << total << "個數字 : " ; 
	int array[total];
	for(int i = 0; i < total; i++){
		cin >> array[i];
	}	
	int big;
	big = array[0];
	for(int i = 0; i < total; i ++){
		if(array[i] > big){
			big = array[i];
		}
	}
	//cout << big << endl;
	for(int i = 0; i < total; i ++){
		if(big == array[i]){
			array[i] = 0;
		}
	}	
	//cout << endl;
	/*for(int i = 0; i < total; i ++){
		cout << array[i] << endl;
	}  */
	big = 0;
	for(int i = 0; i < total; i ++){
		if(array[i] > big){
			big = array[i];
		}
	}
	cout << endl << big;
 return 0; 
}
