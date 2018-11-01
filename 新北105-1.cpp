#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int point;
	cin >> point;
	int xy[3][point] ={0};		// 0 = y, 1 = x, 2 = 高度; 
	for(int i = 0; i < point; i++){
		for(int l = 0; l < 3; l++){
			cin >> xy[l][i];
		}
	}
	/*for(int i = 0; i < point; i++){
		for(int l = 0; l < 3; l++){
			cout << xy[l][i] << " ";
		}
		cout << endl;
	}*/
	
	int value = 0;
	int times = 0;
	for(int i = 0; i < point; i++){
		for(int l = i + 1; l < point; l++){
			if((pow(xy[0][i], 2) + pow(xy[1][i], 2)) < (pow(xy[0][l], 2) + pow(xy[1][l], 2)) && xy[2][i] > xy[2][l] && (xy[2][i] - xy[2][l]) >= value){
				value = (xy[2][i] - xy[2][l]);
			}	
		}
		for(int l = point - 1; l >= 0; l--){
			if((pow(xy[0][i], 2) + pow(xy[1][i], 2)) < (pow(xy[0][l], 2) + pow(xy[1][l], 2)) && xy[2][i] > xy[2][l] && (xy[2][i] - xy[2][l]) >= value){
				value = (xy[2][i] - xy[2][l]);
			}	
		}
	}
	cout << value;
	return 0;
}
