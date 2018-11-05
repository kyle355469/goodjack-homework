#include <iostream>

using namespace std;

int main(){
	int num;
	cin >> num;
	int pt[num];
	for(int i = 0; i < num; i++){
		cin >> pt[i];
	}
	for(int i = 0; i < num; i++){
		for(int l = i + 1; l < num; l++){
			if(pt[i] >= pt[l]){
				pt[i] += pt[l];
				pt[l] = pt[i] - pt[l];
				pt[i] -= pt[l]; 
			}
		}
	}
	int cost = 0;
	int nowpt = 0;
	int minspot = 0;
	int secspot = 1;
	for(int l = 0; l < num - 1; l++){
		int min = 999999999,sec = 999999998;
		for(int i = 0; i < num; i++){
			if(pt[i] < min && pt[i] != 0){
				sec = min;
				min = pt[i];
				secspot = minspot;
				minspot = i;
			}else if(pt[i] < sec && pt[i] != 0){
				sec = pt[i];
				secspot = i;
			}
		}
	 /*	for(int i = 0; i < num; i++){
			cout << pt[i] << " ";
		}
		cout << endl;*/
		nowpt = min + sec;
		cost += nowpt;
		//cout << cost << endl;
		pt[secspot] = 0;
		pt[minspot] = nowpt;
	}
	cout << cost;
	return 0;
} 
