#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int num = 0;
	int bottom = 0;
	cin >> bottom >> num;
	int array_num[100] = {0}; //非10進位數字 
	int array_10[100] = {0}; //10進位後數字 
	int check = num;
	int n = 1; //位數 
	for(int i = 0; i < 100; i++){
		array_num[i] = check % 10;
		//cout << array_num[i] << " ";
		check = check / 10;
		if(check > 0){
			n++;
			continue;
		}else{
			break;
		}
	}
	//cout << endl << n << endl;
	
	int num10 = 0;
	for(int i = 0; i < n; i++){
		num10 = num10 + array_num[i] * pow(bottom, i); 
		//cout << num10 << " ";
	}
//	cout << endl;
	
	
	int k = 1;
	check = num10;
	for(int i = 0; i < 100; i++){
		array_10[i] = check % 10;
		//cout << array_10[i] << " ";
		check = check / 10;
		if(check > 0){
			k++;
			continue;
		}else{
			break;
		}
		
	}
//	cout << endl << k << endl;
	
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans = ans + pow(array_num[i], n);
		//cout << ans << " ";
	}
	//cout << endl;
	if(ans == num10){
		cout << "YES";
	}else{
		cout << "NO";
	}
	
	
	return 0;
}
