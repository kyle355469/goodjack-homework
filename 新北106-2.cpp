# include <iostream>

using namespace std;

int main(){
	int num = 0;
	cin >> num;
	int attack[num] = {0};
	int defence[num] = {0};
	for(int i = 0; i < num; i++){
		cin >> attack[i];
		cin >> defence[i];
	}
	int i = 0;
	int big = 0;
	int bignum = 0;
	while(i < num){
		int win = 0;
		for(int l = i + 1; l < num; l++){ // 往右 
			if(attack[i] >= attack[l] && defence[i] > defence[l] || attack[i] > attack[l] && defence[i] >= defence[l]){
				win++; 
			}else{
				break;
			}
		}
	

		for(int l = i - 1; l >= 0; l--){  // 往左 
			if(attack[i] >= attack[l] && defence[i] > defence[l] || attack[i] > attack[l] && defence[i] >= defence[l]){
				win++; 
			}else{
				break;
			}
		}
		if(win > big){
			big = win;
			bignum = i + 1;
		}
		i++;
	}
	cout << big;
//	cout << endl << bignum;
	return 0;
} 
