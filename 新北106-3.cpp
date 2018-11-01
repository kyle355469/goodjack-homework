#include <iostream>

using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int lock[n];
	int pass[n];
	for(int i = 0; i < n; i++){
		cin >> lock[i];
	}
	for(int i = 0; i < n; i++){
		cin >> pass[i];
	}
	int time = 0;
	int change[n] = {0};
	for(int i = 0; i < n; i++){
		change[i] = pass[i] - lock[i];
		if(change[i] < 0){
			change[i] += 9;
		}
	}
	/*for(int i = 0; i < n; i++){
		cout << change[i] << " ";
	}*/
	//cout << endl;
	for(int i = 0; i < n; i++){
		
		if(change[i] > 0){
			do{
				for(int l = 0; l < k; l++){
					change[i + l] -= 1;
					time++; 
				//	cout << change[i] << " ";
				}
				//cout << endl;
			}while(change[i] > 0);
		}
	}
	bool check = 1;
	for(int i = 0; i < n; i++){
		if(change[i] < 0){
			check = 0;
		}
	}
	if(check = 0){
		cout << "0";
	}else{
		cout << (time / k);
	}
	return 0;
}
