#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	int start[2];
	int fin[2];
	cin >> start[0] >> start[1] >> fin[0] >> fin[1];
	int copy[2];
	copy[0] = start[0];
	copy[1] = start[1];
	int step;
	cin >> step;
	int range[step];
	for(int i = 0; i < step; i++){
		cin >> range[i];
	}
	/*for(int i = 0; i < step; i++){
		cout << range[i] << " ";
	}
	cout << endl << endl; */
	int k = 0;
	int ans = 0;
	int directe[step] = {0};
	directe[0] = -1;
	for(int i = 0; i < pow(4, step) - 1; i++){
		directe[0] += 1;
		for(int j = 0; j < step; j++){
			if(directe[j] > 3){
				directe[j] = 0;
				directe[j + 1] += 1;
			}
		}
		
		k = 0;
		copy[0] = start[0];
		copy[1] = start[1];
		for(int j = 0 ; j < step; j++){
			//cout << range[k] << endl;
			switch(directe[j]){
				case 0:
					//cout << "up + " << range[k] << " "; 
					copy[1] += range[k];
					if(copy[1] > y){
						copy[1] -= y;
					}
					if(copy[1] < 0){
						copy[1] += y;
					}
					//cout << copy[0] << " " << copy[1] << endl;
					break;
				case 1:
					//cout << "right + " << range[k] << " ";
					copy[0] += range[k];
					if(copy[0] > x){
						copy[0] -= x;
					}
					if(copy[0] < 0){
						copy[0] += x;
					}
					//cout << copy[0] << " " << copy[1] << endl;
					break;
				case 2:
					//cout << "down - " << range[k] << " ";
					copy[1] -= range[k];
					if(copy[1] > y){
						copy[1] -= y;
					}
					if(copy[1] < 0){
						copy[1] += y;
					}
					//cout << copy[0] << " " << copy[1] << endl;
					break;
				case 3:
					//cout << "left - " << range[k] << " ";
					copy[0] -= range[k];
					if(copy[0] > x){
						copy[0] -= x;
					}
					if(copy[0] < 0){
						copy[0] += x;
					}
					//cout << copy[0] << " " << copy[1] << endl;
					break;
			}
			k++;
			//cout << endl;
		}
		//cout << copy[0] << " " << copy[1] << endl << endl;
		if(copy[0] == fin[0] && copy[1] == fin[1]){
			ans = 1;
			break;
		}
	}
	
	if(ans == 1){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
