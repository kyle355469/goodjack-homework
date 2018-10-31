#include <iostream>
// 四種寶藏最高價值計算 

using namespace std;

int main(){
	int kg, l, type;
	cin >> kg >> l >> type;
	int weight[type] = {0};
	int vol[type] = {0};
	int value[type] = {0};
	for(int i = 0; i < type; i++){
		cin >> weight[i];
		cin >> vol[i];
		cin >> value[i];
	}
	int nowkg = 0;
	int nowl = 0;
	int nowvalue = 0;
	int val = 0;
	for(int i = 0; i <= 1; i++){				// 1
		for(int j = 0; j <= 1; j++){			// 2
			for(int y = 0; y <= 1; y++){		// 3
				for(int x = 0; x <= 1; x++){ 	// 4
					if(i == 1){
						nowkg += weight[0];
						nowl += vol[0];
						nowvalue += value[0];	
					}
					if(j == 1){
						nowkg += weight[1];
						nowl += vol[1];
						nowvalue += value[1];	
					}
					if(y == 1){
						nowkg += weight[2];
						nowl += vol[2];
						nowvalue += value[2];	
					}
					if(x == 1){
						nowkg += weight[3];
						nowl += vol[3];
						nowvalue += value[3];	
					}
					if(nowkg <= kg && nowl <= l && nowvalue > val){
						val = nowvalue;		
					}
					nowkg = 0;
					nowl = 0;
					nowvalue = 0;
				}
			}
		}
	}
	cout << val;
	
	
	return 0;
}
