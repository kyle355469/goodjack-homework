#include <iostream>

using namespace std;
int main(){
	int x, y, boom;
	cin >> x >> y >> boom;
	int map[y + 2][x + 2];
	int spot[boom][2] = {0};
	for(int i = 0; i < boom; i++){
		for(int l = 0; l < 2; l++){
			cin >> spot[i][l];
			spot[i][l] -= 1;
		}
	}
	/*for(int i = 0; i < boom; i++){
		for(int l = 0; l < 2; l++){
			cout << spot[i][l] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;*/ 
	
	 
	for(int i = 0; i < y; i++){
		for(int l = 0; l < x; l++){
			map[i][l] = 0;
			//cout << map[i][l] << " ";
		}
		//cout << endl;
	}
	//cout << endl << endl;
	
	
	for(int i = 0; i < boom; i++){
		for(int a = (spot[i][0] - 1); a <= (spot[i][0] + 1); a++){
			for(int b = (spot[i][1] - 1); b <= (spot[i][1] + 1); b++){
				map[b][a]++;
			}
		}
	}
	for(int i = 0; i < y; i++){
		for(int l = 0; l < x; l++){
			cout << map[i][l] << " ";
		}
		cout << endl;
	}
	int times = 0;
	int count = 1;
	for(int i = 0; i < boom; i++){
		int check = 0;
		if(map[spot[i][1]][spot[i][0]] != 0 && map[spot[i][1] - 1][spot[i][0]] != 0
			&& map[spot[i][1]][spot[i][0] - 1] != 0 && map[spot[i][1] - 1][spot[i][0] - 1] != 0
			&& map[spot[i][1] + 1][spot[i][0]] != 0 && map[spot[i][1]][spot[i][0] + 1] != 0
			&& map[spot[i][1] + 1][spot[i][0] + 1] != 0 && map[spot[i][1] + 1][spot[i][0] - 1] != 0
			&& map[spot[i][1] - 1][spot[i][0] + 1] != 0 ){
				check = 1;
		}
		for(int a = (spot[i][0] - 1); a <= (spot[i][0] + 1); a++){
			for(int b = (spot[i][1] - 1); b <= (spot[i][1] + 1); b++){				
				map[b][a] = 0;
			}
		}
		if(check == 0){
			continue;
		}
		times += check;
	}
	cout << times;
	return 0;
}
//邊邊會出錯 
