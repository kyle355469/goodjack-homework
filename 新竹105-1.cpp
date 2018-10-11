#include <iostream>

using namespace std;
int main(){
	int x, y, line; 
	cin >> x >> y >> line;
	int array[x][y];
	for(int i = 0; i < y; i++){
		for(int l =0; l < x; l++){
			array[l][i] = 0;
		}
	}
	for(int i = 0; i < y; i++){
		for(int l = 0; l < x; l++){
			cout << array[l][i] << " ";
		}
		cout << endl; 
	}
	int tree[4] = {0};
	int time = 1;
	int ans = 0;
	int final = 0; //答案 
	for(time = 1; time <= line; time++){
		for(int l = 0; l < 4; l++){
			cin >> tree[l];		
		}for(int l = 0; l < 4; l++){		
			cout << tree[l] << " ";
		}
		cout << endl;
		if(tree[0] == tree[2] && tree[1] == tree[3]){
			array[tree[0]][tree[1]] = 1;
			cout << array[tree[0]][tree[1]] << endl;
			ans += 1;
		}else if(tree[0] == tree[2]){
			if(tree[1] > tree[3]){
				for(int i = tree[3] - 1; i < tree[1]; i++){
					array[tree[0]][i] = 1;
					for(int i = 0; i < y; i++){
						for(int l = 0; l < x; l++){
							cout << array[l][i] << " ";
						}
						cout << endl; 
					}cout << endl; 
					ans += 1;
				} 
			}else if(tree[1] < tree[3]){
				for(int i = tree[1] - 1; i < tree[3]; i++){
					array[tree[0]][i] = 1;
					for(int i = 0; i < y; i++){
						for(int l = 0; l < x; l++){
							cout << array[l][i] << " ";
						}
						cout << endl; 
					}cout << endl;
					ans += 1;
				}
			}
		}else if(tree[1] == tree[3]){
			if(tree[0] > tree[2]){
				for(int i = tree[2] - 1; i < tree[0]; i++){
					array[i][tree[1]] = 1;
					ans += 1;
				} 
			}else if(tree[0] < tree[2]){
				for(int i = tree[0] - 1; i < tree[2]; i++){
					array[i][tree[1]] = 1;
					ans += 1;
				}
			}
		}else{
			if(tree[0] < tree[2] && tree[1] < tree[3]){
				for(int i = tree[0] - 1; i < tree[2]; i++){
					array[i][tree[1] + i] = 1;
					ans += 1;
				}
			}else if(tree[0] > tree[2] && tree[1] < tree[3]){
				for(int i = tree[2] - 1; i < tree[0]; i++){
					array[i][tree[3] - i] = 1;
					ans += 1;
				}
			}else if(tree[0] < tree[2] && tree[1] > tree[3]){
				for(int i = tree[0] - 1; i < tree[2]; i++){
					array[i][tree[1] - i] = 1;
					ans += 1;
				}
			}else if(tree[0] > tree[2] && tree[1] > tree[3]){
				for(int i = tree[2] - 1; i < tree[0]; i++){
					array[i][tree[3] + i] = 1;
					ans += 1;
				}
			}
		}
	
		///cout << ans << endl;
		//ans =0;
		//cout << time;

		for(int i = 0; i < y; i++){
			for(int l = 0; l < x; i++){
				cout << array[l][i] << " ";
			}
			cout << endl;
		}
			
		
	}
	

	
	
	return 0;
}
