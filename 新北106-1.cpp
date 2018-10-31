#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main(){
	int num = 0;
	cin >> num;
	string type[num];
	for(int i = 0; i < num; i++){
		cin >> type[i];
	}
	
	int times = 0;
	
	for(int i = 0; i < num; i++){
		for(int l = i + 1; l < num; l++){
			times++;
		}
	}
	
	string all[times + times];
	times = 0;
	
	for(int i = 0; i < num ; i++){
		for(int l = i + 1; l < num ; l++){
			all[times] = type[i] + type[l];
			all[times + 1] = type[l] + type[i];
			times += 2;
		}
	}
	int same = 0;
	for(int i = 0 ; i < times; i++){
		for(int l = i + 1; l < times; l++){
			if(all[i] == all[l]){
				same++; 
			}
		}
	}
	if(same == 0){
		cout << "1";
	}else{
		cout << "0";
	}
	return 0;
}
