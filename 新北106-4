#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int kg, liter, type;
	cin >> kg >> liter >> type;
	int weight[type] = {0};
	int vol[type] = {0};
	int value[type] = {0};
	for(int i = 0; i < type; i++){
		cin >> weight[i] >> vol[i] >> value[i];
	} 
	int nowkg = 0;
	int nowl = 0;
	int val = 0;
	int use[type] = {0};
	int maxval = 0;
	int i = 0;
	int max = (pow(2, 6) - 1);
	while(i < max){
		use[0] += 1;
		for(int i = 0; i < type; i++){
			if(use[i] > 1){
				use[i] = 0;
				use[i + 1] += 1;
			}
		}
		for(int i = 0; i < type; i++){
			if(use[i] == 1){
				nowkg += weight[i];
				nowl += vol[i];
				val += value[i];
			}
		}
		if(nowkg <= kg && nowl <= liter && val >= maxval){
			maxval = val;
		}
		val = 0;
		nowkg = 0;
		nowl = 0;
		i++;
	} 
	cout << maxval;
	return 0;
}
