#include <iostream>

using namespace std;

int main(){
	int n = 0;
	
	cin >> n;
	
	int num[n] = {0};
	for(int i = 0; i < n; i++){
		cin >> num[i];
		cout << num[i] << " ";
	}
	cout << endl;

	int xs = num[0];
	for(int i = 0; i < n; i++){
		if(xs > num[i]){
			xs = num[i];
		}
	}
	int total = 1;
	int times = 1;
	int check = 1;
	while(times < n){
		for(int i = 0; i < n; i++){
			if(num[i] == (xs + 1)){
				xs = num[i];
				total += 1;
				break;
			}
		}
		if(total == check){
			times += 1;
			break;
		}
		check += 1;
		times += 1;
	}	
	
	if(total == n){
		for(int i = 0; i < n; i++){
			cout << num[i] << " ";
		}
		cout << "yes";
	}else{
		for(int i = 0; i < n; i++){
			cout << num[i] << " ";
		}
		cout << "no";
	}
		
	
	return 0;
}
