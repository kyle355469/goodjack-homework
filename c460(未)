#include <iostream>

using namespace std;

int main(){
	int line = 0;
	cin >> line;
	//cout << line << endl;
	int type[line][4]; // type [兵種][能力] 
	int skill1[line][3] = {0};
	int skill2[line][3] = {0};
	int skill3[line][3] = {0};
	for(int i = 0; i < line; i++){
		for(int l = 0; l < 4; l++){
			cin >> type[i][l];
		}
	}
	
	
	/*for(int i = 0; i < line; i++){
		for(int l = 0; l < 4; l++){
			cout << type[i][l] << " ";
		}
		cout << endl;
	}*/
	int one = 0, two = 0, three = 0;
	
	for(int i = 0; i < line; i++){
		switch(type[i][0]){
			case 1:
			//	cout << type[i][0] << endl; 
				for(int l = 1; l < 4; l++){
					//cout << "case 1 : type[i][l] = " << type[i][l] << " ";
					if(type[i][l] == 1){
						skill1[one][l - 1] = 1;
						//cout << "skill1[l - 1] = " << skill1[l - 1] << endl;
						one++;
					}
				}
				cout << endl;
			case 2:
				//cout << type[i][0] << endl; 
				for(int l = 1; l < 4; l++){
					//cout << "case 2 : type[i][l] = " << type[i][l] << " ";
					if(type[i][l] == 1){
						skill2[two][l - 1] = 1;
						//cout << "skill2[l - 1] = " << skill2[l - 1] << endl;
						two++;
					}
				}
				cout << endl;
			case 3:
				//cout << type[i][0] << endl; 
				for(int l = 1; l < 4; l++){
					//cout << "case 3 : type[i][l] = " << type[i][l] << " ";
					if(type[i][l] == 1){
						skill3[three][l - 1] = 1;
						//cout << "skill3[l - 1] = " << skill3[l - 1] << endl;
						three++;
					}
				}
				//cout << endl;
		}	
	}
	cout << one << two << three;
	/*for(int i = 0; i < 3; i++){
		cout << skill1[i] << " ";
		cout << skill2[i] << " ";
		cout << skill3[i] << " ";
		cout << endl;
	}
	cout << endl;  */
	
	
	int total = 0;
	/*for(int i = 0; i < 3; i++){
		for(int l = 0; l < 3; l++){
			for(int j = 0; j < 3; j++){
				int ans[3] = {0};
				ans[i] = skill1[i];
				ans[l] = skill2[l];
				ans[j] = skill3[j];
				if(ans[0] == 1 && ans[1] == 1 && ans[2] == 1){
					total += 1;
				}
			}
		}
	}
	cout << total;*/
	return 0;
}
